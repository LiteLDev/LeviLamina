## NativePointer原生指针

此API旨在帮助开发者操作原生指针

> 由于x64调用约定，任何对象(size>8)均以引用方式传递，欲要了解更多相关细节，请参考[msdoc: x64 calling convention](https://docs.microsoft.com/en-us/cpp/build/x64-calling-convention)

### 内存申请

此函数帮助申请一块指定大小内存

`static NativePointer.malloc(size)`

- 参数：
  - int64: `size`
    欲申请的内存的大小
- 返回值：指向新内存的指针
- 返回值类型：`NativePointer`

<br>

### 销毁内存

销毁一个指定内存块

`static NativePointer.free(block)`

- 参数：
  - NativePointer: `block`
    需要销毁的内存块

<br>

### 指针偏移

获取相对某个指针偏移后的地址

`NativePointer.offset(offset)`

- 参数：
  - int32: `offset`
    
- 返回值：偏移后指针
- 返回值类型：`NativePointer`

<br>

### 获得符号地址

获得一个MCAPI符号地址，等同于CPP中`dlsym`

`NativePointer.fromSymbol(symbol)`

- 参数：
  - String: `symbol`
    需要查询的符号
- 返回值：查询结果，若查询失败则返回空指针
- 返回值类型：`NativePointer`

<br>

### 获得地址实例

获得一个指定地址的指针实例

`NativePointer.fromAddress(address)`

- 参数：
  - String/int64: `address`
    地址，以16进制字符串或数字表示
- 返回值：对应地址的指针实例
- 返回值类型：`NativePointer`

<br>

### 获得指针地址

获取原始指针地址

`NativePointer.asRawAddress`
    
- 返回值：以数字形式表示的指针所指地址
- 返回值类型：`int64`

<br>

### 获得指针地址描述

获取原始指针地址（16进制字符串）

`NativePointer.asHexAddress`
    
- 返回值：以十六进制形式表示的指针所指地址
- 返回值类型：`String`

<br>

### 读写指针内存

以下虚拟属性为帮助访问指针内容设立,可用type如下表所示

`NativePointer.type`

|访问名|大小|特殊说明|
|:--|:--:|:--|
|byte|1|此属性读写通过十六进制字符串完成|
|int8|1||
|uint8|1||
|int16|2||
|uint16|2||
|int32|3||
|uint32|4||
|long|4||
|ulong|4||
|int64|8||
|uint64|8||
|float|4||
|double|8||
|string|32|此属性表示std::string*|
|bool|1||

<br>