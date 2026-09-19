# AGENTS.md

LeviLamina is a Minecraft Bedrock Dedicated Server / Client mod loader written in C++20 (with some
C++23 features enabled), built with xmake and clang-cl on Windows x64.

## Repository layout

| Path          | What it is                                                             |
| ------------- | ---------------------------------------------------------------------- |
| `src/ll/api`  | Public, exported API for mod developers. Changes here are breaking.    |
| `src/ll/core` | Internal loader implementation, not visible to mods.                   |
| `src/mc`      | Bedrock headers, mostly generated, shared by server and client.        |
| `src-server`  | Server-only code, compiled when `target_type=server`.                  |
| `src-client`  | Client-only code, compiled when `target_type=client`.                  |
| `src-test`    | GTest suites split into `common/`, `server/`, `client/`.               |
| `scripts`     | `format_all.py`, `coverage_report.py`, `validate_release.py`.          |
| `docs/main`   | mkdocs sources; every page is mirrored as `*.md` and `*.zh.md`.        |

## Editing `src/mc` (and `mc/` under src-server/src-client)

These headers are produced by the external tool, but they are not off-limits.
The generator **merges** with what is already there, so hand-written
additions survive regeneration as long as they follow the convention.

Generated regions are fenced and belong to the tool:

- `// auto generated inclusion list` and `// auto generated forward declare list`
- anything between `// NOLINTBEGIN` and `// NOLINTEND`
- declarations marked `MCAPI`, `MCFOLD`, `MCTAPI`, `MCNAPI`
- `::ll::TypedStorage<...>` member layouts and the `// prevent constructor by default` block

Hand-written code goes *outside* those fences and is marked with LeviLamina's own export macros:
`LLNDAPI` for functions with a return value worth checking, `LLAPI` otherwise. A typical addition
sits in its own `public:` section above the generated `// member variables` block:

```cpp
    LLNDAPI Inventory& getInventory() const;
    LLNDAPI static Player* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    LLAPI void setSelectedItem(ItemStack const& item) const;
```

Definitions live in a sibling `.cpp` next to the header, never inline in the header, since these
headers are shipped to mods.

The general rule for anything hand-written in these headers: keep it in its own block, separated by
a blank line, and never interleaved into a generated list. That applies to includes, forward
declarations, and declarations alike. Manual `#include`s go at the very top, above
`// auto generated inclusion list`, with `mc/_HeaderOutputPredefine.h` first. Manual forward
declarations sit in a block of their own, outside the generated declare list and its
`// clang-format off` / `on` fence. Never add to or reorder the generated lists themselves.

```cpp
#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/inventory/EnderChestContainer.h"   // manual

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

class Inventory;                                      // manual
```

`MCNAPI` marks symbols that are deliberately unavailable. Do not call them and do not strip the
deprecation attribute; new requests go to
[mcapi-requests](https://github.com/LiteLDev/mcapi-requests/issues/new).

Header regeneration lands through the `header` branch as `chore: update headers ...` merges. Keep
functional changes out of those commits.

## Build and test

xmake configuration is sticky, so reconfigure whenever you switch target or toggle tests.

```powershell
xmake f -a x64 -m debug -p windows -y --target_type=server --tests=y
xmake
```

`--target_type` is `server` (default) or `client`; only `server` builds on Linux. `--tests=y` pulls
in gtest, compiles `src-test`, and regenerates the `include_all.cpp` files before each build. They
are truncated again afterwards, so leave those diffs alone.

CI runs the full matrix of server/client x debug/release x tests on/off, and warnings matter: the
Windows build uses `/W4` with several warnings promoted. A change to a public header should compile
under both target types, since `src-client` and `src-server` are never built together.

## Style

Run `python scripts/format_all.py` after touching C++ files; it applies `.clang-format` across
`src`, `src-server`, `src-client`, and `src-test`. Sources use CRLF (normalized via
`.gitattributes`); `CHANGELOG.md` stays LF.

Naming follows `docs/main/contents/maintainer_guides/cpp_style_guide.md`:

- directories `snake_case`, files and types `PascalCase`, namespaces lowercase
- functions and locals `camelCase`, constants `PascalCase`, macros `UPPER_SNAKE_CASE`
- non-public data members Hungarian `mMember`, public ones plain `camelCase`
- `///` for Doxygen comments, `// TODO(#1234): ...` for TODOs

New API in `src/ll/api` needs Doxygen comments on public members. Prefer `Expected<T>` for
recoverable errors over exceptions; the Windows build sets `set_exceptions("none")` in xmake.

## Changelog and commits

Add user-visible changes to the `## [Unreleased]` section of `CHANGELOG.md` under Keep a Changelog
headings (`Added`, `Changed`, `Fixed`, `Removed`). Skip it for header regeneration and internal
churn.

Commits use Conventional Commits: `feat:`, `fix:`, `chore:`, `refactor:`, with `chore(deps):` for
dependency bumps. Versions come from git tags at build time, so do not hand-edit generated version
output or bump versions manually.

## Docs

Documentation in `docs/main/contents` is bilingual. When you change an English page, update its
`.zh.md` sibling in the same pass, and register new pages in `docs/main/mkdocs.yml`.
