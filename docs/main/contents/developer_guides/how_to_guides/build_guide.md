# Build Guide

This guide covers building LeviLamina from source, including environment setup, build commands, dependencies, and version management.

## Prerequisites

### Required Tools

- **XMake 3.0.0+** — Build system ([xmake.io](https://xmake.io))
- **LLVM/Clang** — The Windows build uses the `clang-cl` toolchain
- **MSVC 2022+** — Provides the Windows SDK and standard library that `clang-cl` builds against
- **Git** — For version control and version number generation
- **Windows 10/11 x64** — Currently only Windows builds are supported

Exact tool and dependency versions are defined in `xmake.lua`; the CI workflow in
`.github/workflows/build.yml` shows the combination that is actively tested.

### Installing XMake

```powershell
# Using PowerShell
Invoke-Expression (Invoke-Webrequest 'https://xmake.io/psget.text' -UseBasicParsing).Content

# Or using Scoop
scoop install xmake
```

### Installing MSVC

Install Visual Studio 2022 with the "Desktop development with C++" workload, or install Build Tools for Visual Studio 2022.

### Installing LLVM

Install LLVM from [releases.llvm.org](https://releases.llvm.org) or via `scoop install llvm`, and
make sure `clang-cl` is on `PATH`.

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

| Option          | Values             | Default  | Description                                        |
| --------------- | ------------------ | -------- | -------------------------------------------------- |
| `--target_type` | `server`, `client` | `server` | Build target type                                  |
| `--tests`       | `y`, `n`           | `n`      | Enable GTest-based testing                         |
| `--publish`     | `y`, `n`           | `n`      | Mark as published release (affects version string) |
| `--levimc_repo` | URL                | -        | Custom xmake-repo URL                              |

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

LeviLamina depends on 25+ external libraries, all declared with `add_requires` in `xmake.lua` and
downloaded automatically by XMake. **`xmake.lua` is the single source of truth for versions**, so
this page lists only what each dependency is for. Run `xmake require --list` to see the versions
resolved for your current configuration.

### Core Libraries

| Library         | Purpose                    |
| --------------- | -------------------------- |
| `entt`          | Entity component system    |
| `fmt`           | String formatting          |
| `nlohmann_json` | JSON parsing               |
| `rapidjson`     | Fast JSON parsing          |
| `leveldb`       | Key-value database         |
| `gsl`           | Guidelines Support Library |

### Performance

| Library            | Purpose                    |
| ------------------ | -------------------------- |
| `mimalloc`         | High-performance allocator |
| `parallel-hashmap` | Fast hash maps             |
| `concurrentqueue`  | Lock-free queue            |

### Utilities

| Library         | Purpose               |
| --------------- | --------------------- |
| `ctre`          | Compile-time regex    |
| `magic_enum`    | Enum reflection       |
| `type_safe`     | Type safety utilities |
| `expected-lite` | Expected/Result type  |
| `glm`           | Math library          |
| `cpr`           | HTTP client           |
| `stb`           | Image and font decode |

### LeviLamina-Specific

These come from the `levimc-repo` xmake repository, overridable with `--levimc_repo`.

| Library           | Purpose                  |
| ----------------- | ------------------------ |
| `pcg_cpp`         | Random number generation |
| `pfr`             | Reflection               |
| `demangler`       | C++ name demangling      |
| `levibuildscript` | Build scripts            |
| `preloader`       | DLL preloading           |
| `symbolprovider`  | Symbol resolution        |
| `trampoline`      | Function hooking         |

### Platform-Specific

| Library       | Platform | Purpose                                             |
| ------------- | -------- | --------------------------------------------------- |
| `libhat`      | Windows  | Memory manipulation                                 |
| `bedrockdata` | Windows  | MC binaries and data, per `--target_type`            |
| `gtest`       | -        | Test framework, only required when `--tests=y`       |

`bedrockdata` is version-locked to the Minecraft version LeviLamina currently targets, and its
`-server` / `-client` variant is selected by `--target_type`. Bumping it is part of adapting to a
new Minecraft release, not a routine dependency update.

## Version Number Generation

LeviLamina's version is automatically generated from Git tags:

### Version Format

```
v{major}.{minor}.{patch}{-prerelease}+{commit_hash}
```

### Examples

- **Release**: `v26.1.0`
- **Pre-release**: `v26.1.0-rc.2`
- **Development**: `v26.1.0-rc.2+ce09050f05` (includes commit hash when `--publish=n`)

Major and minor track the targeted Minecraft version. See `tooth.json` and `CHANGELOG.md` for the
current one.

### Version Source Priority

1. **Git tag** — If the current commit has a tag matching `v*.*.*`
2. **tooth.json** — Fallback to `version` field in `tooth.json`

### Version Injection

The version is injected into `src/ll/core/Version.h.in` during build:

```cpp
// Generated Version.h
#define LL_VERSION_MAJOR 26
#define LL_VERSION_MINOR 1
#define LL_VERSION_PATCH 0
#define LL_VERSION_PRERELEASE "rc.2"
#define LL_VERSION_BUILD "ce09050f05"
```

## Compiler Settings

### C++ Standard

- **C++20** required
- **C++23** features enabled via `_HAS_CXX23=1`

### Compiler Flags

The Windows build compiles with `clang-cl` using MSVC-compatible flags. See the
`target("LeviLamina")` block in `xmake.lua` for the authoritative list.

- **Runtime**: `/MD` (dynamic, non-debug)
- **Exceptions**: `/EHa` and `/EHs`, with xmake-level exceptions disabled
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

- **Trigger**: Pushes to any branch and pull requests touching sources or `xmake.lua`
- **Platforms**: Windows x64
- **Matrix**: server and client, each in debug and release, with tests on and off

### Release Process

1. Tag commit with version: `git tag v26.1.0`
2. Push tag: `git push origin v26.1.0`
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

### Toolchain Not Found

Ensure Visual Studio 2022 or Build Tools are installed for the Windows SDK, that LLVM is installed
so `clang-cl` resolves on `PATH`, and run from "Developer Command Prompt for VS 2022".

## Related

- [Architecture](architecture.md) — Project structure and design
- [Testing Guide](how_to_guides/testing_guide.md) — Running and writing tests
