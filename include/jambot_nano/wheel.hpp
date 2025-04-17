#ifndef JAMBOT_NANO_WHEEL_HPP
#define JAMBOT_NANO_WHEEL_HPP

#include <string>
#include <cmath>

namespace jambot_nano
{

class Wheel
{
    public:
    std::string name_;
    int enc_;
    double cmd_;
    double pos_;
    double vel_;
    double rads_per_count_;
    int enc_counts_per_rev_;

    Wheel();
    Wheel(const std::string &wheel_name, int counts_per_rev);
    void setup(const std::string &wheel_name, int counts_per_rev);
    double calc_enc_angle();
};

} // namespace jambot_nano

#endif // JAMBOT_NANO_WHEEL_HPP
