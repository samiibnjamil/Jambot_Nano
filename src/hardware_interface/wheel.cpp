#include "jambot_nano/wheel.hpp"

namespace jambot_nano
{
Wheel::Wheel()
: name_("")
, enc_(0)
, cmd_(0.0)
, pos_(0.0)
, vel_(0.0)
, rads_per_count_(0.0)
, enc_counts_per_rev_(0)
{
}

Wheel::Wheel(const std::string &wheel_name, int counts_per_rev)
{
  setup(wheel_name, counts_per_rev);
}

void Wheel::setup(const std::string &wheel_name, int counts_per_rev)
{
  name_ = wheel_name;
  enc_counts_per_rev_ = counts_per_rev;
  rads_per_count_ = (2.0 * M_PI) / enc_counts_per_rev_;
}

double Wheel::calc_enc_angle()
{
  return enc_ * rads_per_count_;
}
}  // namespace jambot_nano 