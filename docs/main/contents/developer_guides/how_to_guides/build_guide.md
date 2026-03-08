# Build Guide

This guide covers building LeviLamina from source, including environment setup, build commands, dependencies, and version management.

## Prerequisites

### Required Tools

- **XMake 3.0.0+** — Build system ([xmake.io](https://xmake.io))
- **MSVC 2022+** — Microsoft Visual C++ compiler with C++20 support
- **Git** — For version control and version number generation
- **Windows 10/11 x64** — Currently only Windows builds are supported

### Installing XMake

```powershell
# Using PowerShell
Invoke-Expression (Invoke-Webrequest 'https://xmake.io/psget.text' -UseBasicParsing).Content

# Or using Scoop
scoop install xmake
```

### Installing MSVC

Install Visual Studio 2022 with the "Desktop development with C++" workload, or install Build Tools for Visual Studio 2022.

## Build Commands

### Basic Build

```powershell
# Clone the repository
git clone https://github.com/LiteLDev/LeviLamina.git
cd LeviLamina

# Build for server (default)
xmake

# Or explicitly specify server
xmake f --target_type=server
xmake
```

### Build for Client

```powershell
xmake f --target_type=client
xmake
```

### Build with Tests

```powershell
xmake f --tests=y
xmake
```

### Build for Release/Publish

```powershell
xmake f --publish=y
xmake
```

### Clean Build

```powershell
xmake c
xmake
```

## Build Options

| Option | Values | Default | Description |
|--------|--------|---------|-------------|
| `--target_type` | `server`, `client` | `server` | Build target type |
| `--tests` | `y`, `n` | `n` | Enable GTest-based testing |
| `--publish` | `y`, `n` | `n` | Mark as published release (affects version string) |
| `--levimc_repo` | URL | - | Custom xmake-repo URL |

### Examples

```powershell
# Server build with tests
xmake f --target_type=server --tests=y
xmake

# Client release build
xmake f --target_type=client --publish=y
xmake

# Custom repo
xmake f --levimc_repo=https://custom.repo.url
xmake
```

## Dependencies

LeviLamina depends on 25+ external libraries, automatically managed by XMake:

### Core Libraries

| Library | Version | Purpose |
|---------|---------|---------|
| **entt** | v3.15.0 | Entity component system |
| **fmt** | 11.2.0 | String formatting |
| **nlohmann_json** | v3.11.3 | JSON parsing |
| **rapidjson** | v1.1.0 | Fast JSON parsing |
| **leveldb** | 1.23 | Key-value database |
| **gsl** | v4.2.0 | Guidelines Support Library |

### Performance

| Library | Version | Purpose |
|---------|---------|---------|
| **mimalloc** | v2.1.7 | High-performance allocator |
| **parallel-hashmap** | v2.0.0 | Fast hash maps |
| **concurrentqueue** | v1.0.4 | Lock-free queue |

### Utilities

| Library | Version | Purpose |
|---------|---------|---------|
| **ctre** | 3.8.1 | Compile-time regex |
| **magic_enum** | v0.9.7 | Enum reflection |
| **type_safe** | v0.2.4 | Type safety utilities |
| **expected-lite** | v0.8.0 | Expected/Result type |
| **glm** | 1.0.1 | Math library |

### LeviLamina-Specific

| Library | Version | Purpose |
|---------|---------|---------|
| **pcg_cpp** | v1.0.0 | Random number generation |
| **pfr** | 2.1.1 | Reflection |
| **demangler** | v17.0.7 | C++ name demangling |
| **levibuildscript** | 0.4.1 | Build scripts |
| **preloader** | v1.15.7 | DLL preloading |
| **symbolprovider** | v1.2.0 | Symbol resolution |
| **trampoline** | 2024.11.7 | Function hooking |

### Platform-Specific

| Library | Version | Platform | Purpose |
|---------|---------|----------|---------|
| **libhat** | 0.4.0 | Windows | Memory manipulation |
| **bedrockdata** | v1.21.132 | - | BDS headers (server.8 or client.9) |

## Version Number Generation

LeviLamina's version is automatically generated from Git tags:

### Version Format

```
v{major}.{minor}.{patch}{-prerelease}+{commit_hash}
```

### Examples

- **Release**: `v1.8.0`
- **Pre-release**: `v1.8.0-rc.2`
- **Development**: `v1.8.0-rc.2+ce09050f05` (includes commit hash when `--publish=n`)

### Version Source Priority

1. **Git tag** — If the current commit has a tag matching `v*.*.*`
2. **tooth.json** — Fallback to `version` field in `tooth.json`

### Version Injection

The version is injected into `src/ll/core/Version.h.in` during build:

```cpp
// Generated Version.h
#define LL_VERSION_MAJOR 1
#define LL_VERSION_MINOR 8
#define LL_VERSION_PATCH 0
#define LL_VERSION_PRERELEASE "rc.2"
#define LL_VERSION_BUILD "ce09050f05"
```

## Compiler Settings

### C++ Standard

- **C++20** required
- **C++23** features enabled via `_HAS_CXX23=1`

### MSVC Flags

- **Runtime**: `/MD` (dynamic, non-debug)
- **Exceptions**: `/EHa` (SEH + C++ exceptions)
- **Warnings**: `/W4` with specific upgrades:
  - `/w44265` — Virtual function without override
  - `/w44289` — Loop variable used outside loop
  - `/w44296` — Expression always true/false
  - `/w45263` — Calling std::move on temporary
  - `/w44738` — Storing float in memory

## Build Output

### Directory Structure

```
LeviLamina/
├── build/
│   └── windows/
│       └── x64/
│           └── release/
│               └── LeviLamina.dll
└── bin/
    └── LeviLamina/
        ├── LeviLamina.dll
        └── manifest.json
```

### Artifacts

- **LeviLamina.dll** — Main loader DLL
- **manifest.json** — Mod metadata with version info

## CI/CD

LeviLamina uses GitHub Actions for continuous integration:

### Automated Builds

- **Trigger**: Push to main branch or pull requests
- **Platforms**: Windows x64
- **Targets**: Both server and client
- **Tests**: Run when `--tests=y`

### Release Process

1. Tag commit with version: `git tag v1.8.0`
2. Push tag: `git push origin v1.8.0`
3. CI builds with `--publish=y`
4. Artifacts uploaded to GitHub Releases

## Troubleshooting

### XMake Cache Issues

```powershell
xmake c -a  # Clean all
xmake f -c  # Reconfigure
```

### Dependency Download Failures

```powershell
# Use mirror
xmake g --proxy_pac=github_mirror.lua
```

### MSVC Not Found

Ensure Visual Studio 2022 or Build Tools are installed and run from "Developer Command Prompt for VS 2022".

## Related

- [Architecture](architecture.md) — Project structure and design
- [Testing Guide](how_to_guides/testing_guide.md) — Running and writing tests
