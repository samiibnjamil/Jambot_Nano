# 📖 Global Rules (For AI IDEs — ROS 2 Edition)

A master guide for AI-assisted ROS 2 coding projects to maintain consistency, clarity, reliable AI prompting, and long-term workflow optimization.

---

## 📦 📁 File Purpose & Usage

### `README.md`
- Project summary, ROS 2 version, package dependencies, and build/run instructions.
- Always update when new nodes, messages, or dependencies are added.
- Include `colcon` build/run commands and launch file examples.
- **Always read `PLANNING.md`** at the start of a new conversation to understand the project's architecture, goals, style, and constraints.

### `PLANNING.md`
- ROS 2 system architecture overview (nodes, topics, services, actions).
- Message, service, and action definitions.
- Project goals and planning roadmap.
- Package structure and dependencies.
- Update before adding new ROS 2 components.

### `TASK.md`
- ROS 2-specific task board with:
  - **To Do** (e.g., "Implement navigation node")
  - **In Progress**
  - **Done**
  - **Discovered During Work** (e.g., "Need custom message type")
- **Check `TASK.md`** before starting a new task. If the task isn’t listed, add it with a brief description and today's date.
- **Use consistent naming conventions, file structure, and architecture patterns** from `PLANNING.md`.
- Update immediately when completing ROS 2 tasks.

### `prompts.md`
- ROS 2-specific AI prompt library:
  - Creating ROS 2 nodes
  - Designing interfaces (messages, services, actions)
  - Launch file configurations
  - ROS 2 best practices
- Tag prompts with ROS 2 version (e.g., "ROS 2 Humble").
- Include:
  - **Date added**
  - **Use case description**
  - **Effectiveness notes**
  - Modification logs if updated.

### `project_log.md`
- Track ROS 2-specific developments:
  - Node creation/modification
  - Interface changes
  - Launch file updates
  - Dependency additions
- Log every AI suggestion, outcome (accepted/rejected/modified), and reasoning.

---

## 🔄 ROS 2 Project Awareness & Context

- **Always verify ROS 2 version** before suggesting or writing code.
- **Check existing message/service/action definitions** in `PLANNING.md`.
- **Follow ROS 2 naming conventions** (e.g., `snake_case` for packages).
- AI must understand:
  - ROS 2 package structure
  - `ament` build system
  - `colcon` workflow

---

## 🧱 ROS 2 Code Structure & Modularity

### Package Organization
- One package per major functionality.
- Keep node source files in `src/`.
- Launch files in `launch/`.
- Config files in `config/`.
- Complex logic should include inline comments with a `# Reason:` explaining the *why*, not just the *what*.

---

## 🧪 ROS 2 Testing & Reliability

### Test Types
- Unit tests for individual components.
- Integration tests for node interactions.
- System tests for full workflows.

- **Tests should live in a `/tests` folder** mirroring the main app structure.
  - Include at least:
    - 1 test for expected use
    - 1 edge case
    - 1 failure case
---

## ✅ Task Completion & Discovery

- **Mark completed ROS 2 tasks immediately** in `TASK.md`:
  - Node implementation
  - Interface definitions
  - Launch file creation
  - Test coverage updates
- Log any new sub-tasks or discoveries under **“Discovered During Work”**.
- Log important observations:
  - Message changes needed
  - Unexpected node behavior
  - Performance tuning suggestions

---

## 📚 ROS 2 Documentation Standards

### Code Documentation
- Document the node’s purpose at the top of each file.
- Explain topic, service, and action usage.
- Note QoS settings and the reasons behind their selection.

### System Documentation
- Update `PLANNING.md` with:
  - New nodes and their connections
  - Message/service/action changes
  - Architecture adjustments

---

## 🧠 ROS 2 AI Behavior Rules

- **Never assume ROS 2 version** — always verify.
- **Check existing interfaces** before suggesting new ones.
- **Strictly follow ROS 2 naming conventions**.
- **Verify package and file paths** exist before referencing them.
- **Never suggest deprecated ROS 2 APIs**.
- When suggesting:
  - Include relevant ROS 2 package dependencies.
  - Specify whether the code is for a node, component, or utility.
  - Note thread safety and performance considerations where relevant.

---

## 📚 ROS 2 Prompting Etiquette

- Always specify the ROS 2 version in prompts.
- Include relevant package and system context.
- For interface design prompts:
  - Reference existing messages and services.
- For node prompts:
  - Specify publisher/subscriber needs.
  - Mention services/actions if required.
  - Address performance or QoS considerations if applicable.

---

## ✅ ROS 2 Closing Note

**Adapted from the original workflow by Sami Ibn Jamil, 2025, for ROS 2 projects.**
