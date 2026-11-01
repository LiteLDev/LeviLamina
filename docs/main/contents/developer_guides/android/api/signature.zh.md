# Signature API

## 作用

Signature API 在已加载模块中解析符号或字节特征。

## 头文件

```cpp
#include <pl/memory/Signature.hpp>
```

## 函数

```cpp
uintptr_t resolveSignature(std::string_view signature,
                           std::string_view moduleName);

std::unordered_map<std::string, uintptr_t>
resolveSignatures(std::span<const std::string> signatures,
                  std::string_view moduleName);
```

无法解析时返回 `0`。

## Pattern 格式

```text
48 8B ?? ?? 89
488B????89
```

通配符：

| Pattern | 含义 |
| --- | --- |
| `?` | 整字节通配 |
| `??` | 整字节通配 |
| `A?` | 低半字节通配 |
| `?F` | 高半字节通配 |

## 示例

```cpp
#include <pl/memory/Signature.hpp>

uintptr_t update = pl::memory::resolveSignature(
    "Game_update", "libminecraftpe.so");

if (update == 0) {
  update = pl::memory::resolveSignature(
      "48 8B ?? ?? 89", "libminecraftpe.so");
}
```

同一模块解析多个特征时优先使用 `resolveSignatures()`。
