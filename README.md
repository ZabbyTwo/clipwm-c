# clipwm-c

**clipwm-c** is a lightweight, terminal-based password manager written in C. It aims to provide secure, offline password management directly from the command line — fast, minimal, and Unix-friendly.

## Features

- 🔐 Secure local password storage (encrypted)
- 🧠 Master password authentication
- 🧱 Strong encryption (AES-256)
- 📁 File-based password database (JSON)
- 📟 Minimal, intuitive CLI interface (TUI with ncurses planned)
- 🛠️ Written entirely in C for speed and portability

## Why?

Most modern password managers are either browser-based, cloud-first, or written in high-level languages. `clipwm-c` takes a different approach: a minimal, auditable, offline-first password manager built from scratch in C, with no unnecessary dependencies.

## Planned Features

- 🔑 Support for password categories and search
- 🔄 Encrypted export/import
- 🧪 Test suite (unit & integration)
- 🔐 Optional Git-based password versioning

## Build

To build the project:

```bash
git clone https://github.com/your-username/clipwm-c.git
cd clipwm-c
make

