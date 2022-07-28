# 性能优化

> 过早优化是万恶之源

ScriptX已经做了足够多的优化和性能测试。通常情况下你不需要刻意的做特殊优化；请在性能优化前做充足的profile确定性能瓶颈。

## 通用的性能优化建议

1. ScriptX 的大多数API都是支持使用C++类型的，对于频繁调用的场景请考虑创建一个 `Local` 引用

如：
```c++

while (cond) {
    obj.get("key");
}

// 优化为

auto keyString = String::newString("key");
while (cond) {
    StackFrameScope s;
    obj.get(keyString);
}

```