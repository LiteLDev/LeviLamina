## NativeFunction原生函数

此API集包含如下两种类型`NativeFunction`和`NativeHook`，其中`NativeHook`为特化的实现，只包含`call`,`address`两个属性

### Symbol获得函数

自动解析Symbol并得到一个可调用的函数，如解析失败，抛出异常

`static NativeFunction.fromSymbol(symbol)`

- 参数：
  - String: `symbol`
    需要解析的函数
- 返回值：原生函数实例
- 返回值类型：`NativeFunction`

<br>

### Describe获得函数

描述函数类型并得到一个不可调用的函数，如需调用，则还需手动设置Address属性

`static NativeFunction.fromDescription(ReturnValue: NativeTypes.Void, Params: [NativeType.Int......])`

- 参数：
  - Enum-NativeTypes: `ReturnValue`
    返回值类型
  - Enum-NativeTypes...: `Params`
    参数类型，从左到右直接传递
- 返回值：原生函数实例
- 返回值类型：`NativeFunction`

<br>

### Script获得函数

描述函数类型并得到一个来自脚本的函数，其被包装为可直接在Native代码中调用的函数

`static NativeFunction.fromScript(ReturnValue: NativeTypes.Void, Params: [NativeType.Int......], Callback: func(Params...){})`

- 参数：
  - Enum-NativeTypes: `ReturnValue`
    返回值类型
  - Enum-NativeTypes...: `Params`
    参数类型，从左到右直接传递
  - Function: `Callback`
    回调函数，当该原生包装函数被调用后，会调用此函数
- 返回值：原生函数实例
- 返回值类型：`NativeFunction`

<br>

### Hook函数钩子

改写指定地址函数的头部，设置回调函数，当原函数调用时则会调用回调函数
如果需要保留原始功能，请记得在回调函数内调用原函数

`NativeFunction.hook(function)`

- 参数：
  - Function: `function`
    回调函数，请注意保持参数类型与NativeFunction描述的一致
- 返回值：原函数
- 返回值类型：`NativeHook`

<br>

### call功能

通过虚拟对象call，调用对应函数

`NativeFunction.call(params...)`

- 参数：
  - Parameters: `params`
    对应NativeFunction所描述的函数参数
- 返回值：  对应NativeFunction所描述的返回类型
- 返回值类型：`Value`

<br>

### address属性

函数指针的指针值

`NativeFunction.address`

- Setter：
  - NativePointer
  - int64
- Getter
  - int64

<br>

## NativeType参数类型

此Enum展示了所有可用于函数参数以及返回的类型

|Void|
|Bool|
|Char|
|UnsignedChar|
|Short|
|UnsignedShort|
|Int|
|UnsignedInt|
|Long|
|UnsignedLong|
|LongLong|
|UnsignedLongLong|
|Float|
|Double|
|Pointer|

<br>