# Patch API

## 作用

Patch API 通过 SDK 读取、写入并回滚进程内存。

## 头文件

```cpp
#include <pl/memory/Patch.hpp>
```

## 函数

```cpp
bool writeBytes(uintptr_t address, std::span<const uint8_t> bytes,
                std::string_view name);

bool writeBytes(uintptr_t address, std::string_view hexBytes,
                std::string_view name);

std::vector<uint8_t> readBytes(uintptr_t address, size_t length);

bool revertPatch(std::string_view name);
void revertAllPatches();
```

patch 名称用于保存原始字节，之后由 `revertPatch()` 回滚。

## 示例

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

## RAII 句柄

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

## 注意

- 十六进制字符串用空白分隔字节，每个 token 必须是一位或两位十六进制数。
- 复用 patch 名称会替换之前保存的记录。
- 错误指令或错误地址仍可能让进程崩溃。
