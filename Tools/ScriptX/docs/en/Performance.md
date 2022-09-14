# Performance optimization

> Premature optimization is the root of all evil

ScriptX has done enough optimization and performance testing. Normally, you don't need to do special optimization deliberately; please do a sufficient profile to determine the performance bottleneck before performance optimization.

## General performance optimization suggestions

1. Most of the APIs of ScriptX support the use of C++ types. For frequently called scenarios, please consider creating a `Local` reference

Such as:

```c++
while (cond) {
     obj.get("key");
}

// Optimized as

auto keyString = String::newString("key");
while (cond) {
     StackFrameScope s;
     obj.get(keyString);
}
```