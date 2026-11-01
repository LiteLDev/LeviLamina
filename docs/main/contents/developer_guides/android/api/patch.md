# Patch API

## Purpose

Patch API reads, writes, and reverts process memory through the SDK.

## Header

```cpp
#include <pl/memory/Patch.hpp>
```

## Functions

```cpp
bool writeBytes(uintptr_t address, std::span<const uint8_t> bytes,
                std::string_view name);

bool writeBytes(uintptr_t address, std::string_view hexBytes,
                std::string_view name);

std::vector<uint8_t> readBytes(uintptr_t address, size_t length);

bool revertPatch(std::string_view name);
void revertAllPatches();
```

Patch names identify the saved original bytes used by `revertPatch()`.

## Example

```cpp
#include <pl/memory/Patch.hpp>

bool installReturnZero(uintptr_t address) {
  return pl::memory::writeBytes(address, "00 00 80 D2 C0 03 5F D6",
                                "example.return_zero");
}

void removeReturnZero() {
  pl::memory::revertPatch("example.return_zero");
}
```

## RAII Handle

```cpp
class MyMod {
public:
  bool enable() {
    mPatch = pl::memory::PatchHandle(address, "00 00 80 D2 C0 03 5F D6",
                                     "example.return_zero");
    return mPatch.applied();
  }

  bool disable() {
    mPatch.reset();
    return true;
  }

private:
  uintptr_t address{};
  pl::memory::PatchHandle mPatch;
};
```

## Notes

- Hex strings are whitespace-separated bytes. Each token must contain one or two
  hex digits.
- Reusing a patch name replaces the previous saved record.
- Wrong instruction bytes or a wrong address can still crash the process.
