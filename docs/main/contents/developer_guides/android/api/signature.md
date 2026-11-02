# Signature API

## Purpose

Signature API resolves symbols or byte patterns inside a loaded module.

## Header

```cpp
#include <pl/memory/Signature.hpp>
```

## Functions

```cpp
uintptr_t resolveSignature(std::string_view signature,
                           std::string_view moduleName);

std::unordered_map<std::string, uintptr_t>
resolveSignatures(std::span<const std::string> signatures,
                  std::string_view moduleName);
```

The functions return `0` for signatures that cannot be resolved.

## Pattern Format

```text
48 8B ?? ?? 89
488B????89
```

Wildcards:

| Pattern | Description |
| --- | --- |
| `?` | Whole byte wildcard |
| `??` | Whole byte wildcard |
| `A?` | Low nibble wildcard |
| `?F` | High nibble wildcard |

## Example

```cpp
#include <pl/memory/Signature.hpp>

uintptr_t update = pl::memory::resolveSignature(
    "Game_update", "libminecraftpe.so");

if (update == 0) {
  update = pl::memory::resolveSignature(
      "48 8B ?? ?? 89", "libminecraftpe.so");
}
```

Use `resolveSignatures()` when resolving several patterns from the same module.
