## NativePatch补丁工具

此类工具用于对指定地址进行补丁操作，通常用于对汇编的修改，请确保有相关知识储备

### PatternSearch搜索

在全局范围内搜索指定Bytes并获得第一个结果地址

`NativePatch.search(pattern)`

- 参数：
  - String: `pattern`
    描述匹配模式的字符串
- 返回值：结果地址
- 返回值类型：`NativePointer`

<br>

### Patch应用补丁

对指定位置进行Patch操作

`NativePatch.patch(pointer, expect, target)`

- 参数：
  - NativePointer: `pointer`
    目标地址
  - String: `expect`
    原始字节
  - String： `target`
    目标字节
- 返回值：成功结果
- 返回值类型：`Bool`

<br>

### Dump展示内存

以十六进制字符串展示目标地址的指定长度内存

`NativePatch.dump(pointer, size)`

- 参数：
  - NativePointer: `pointer`
    目标地址
  - int64: `size`
    长度
- 返回值：内存内容
- 返回值类型：`String`

<br>