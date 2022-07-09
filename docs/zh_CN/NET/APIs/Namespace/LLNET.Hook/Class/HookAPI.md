# 🔖 HookAPI 类

## 定义

<br>

> 自定义表单类。

<br>

C#
```cs
public abstract class HookAPI
```
C++
```cpp
public ref class HookAPI abstract
```
<br>

继承 [Object](https://docs.microsoft.com/zh-cn/dotnet/api/system.object?view=net-6.0) → [HookAPI](zh_CN/NET/APIs/Namespace/LLNET.Hook/Class/HookAPI.md)

<br>

<br>

##  方法
- 
    |||
    |-|-|
    |`HookFunction(void*,void**,void*)`|由给定原函数指针和给定的替换函数指针对原函数进行Hook，并由参数返回可供使用的原函数指针的地址。|
    |`HookFunction(IntPtr,SecondaryRankPtr,IntPtr)`|由给定原函数指针和给定的替换函数指针对原函数进行Hook，并由参数返回可供使用的原函数指针的地址，但参数均采用非指针类型。|
    |`dlsym_real(Byte*)`|由给定的字节数组表示的符号获取对应函数指针。|
    |`dlsym_real(String)`|由给定的符号获取对应的函数指针。|
    |`dAccess(IntPtr,UInt64)`|由给定指针返回给定偏移量的地址。|
    |`dAccess(void*,UInt64)`|由给定指针返回给定偏移量的地址。|
    |`VirtualFuction<VirtualProtorype>(IntPtr,UInt64)`|由给定的委托类型、this指针和偏移量构建可供调用的虚函数委托。|
    |`SYM<FunctionProtorype>(String)`|由给定的委托类型和符号构建可供调用的委托。|
    |`SYM(String)`|由给定的符号获取对应的函数指针。|
    |-|-|
    |`VirtualCall<RTN>(void*,UInt64)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`0`参数重载形式。|
    |`VirtualCall<RTN,T0>(void*,UInt64,T0)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`1`参数重载形式。|
    |`VirtualCall<RTN,T0,T1>(void*,UInt64,T0,T1)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`2`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2>(void*,UInt64,T0,T1,T2)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`3`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3>(void*,UInt64,T0,T1,T2,T3)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`4`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4>(void*,UInt64,T0,T1,T2,T3,T4)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`5`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5>(void*,UInt64,T0,T1,T2,T3,T4,T5)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`6`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5,T6>(void*,UInt64,T0,T1,T2,T3,T4,T5,T6)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`7`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5,T6,T7>(void*,UInt64,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`8`参数重载形式。|
    |-|-|
    |`VirtualCall<RTN>(IntPtr,UInt64)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`0`参数重载形式。|
    |`VirtualCall<RTN,T0>(IntPtr,UInt64,T0)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`1`参数重载形式。|
    |`VirtualCall<RTN,T0,T1>(IntPtr,UInt64,T0,T1)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`2`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2>(IntPtr,UInt64,T0,T1,T2)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`3`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3>(IntPtr,UInt64,T0,T1,T2,T3)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`4`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4>(IntPtr,UInt64,T0,T1,T2,T3,T4)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`5`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`6`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5,T6>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5,T6)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`7`参数重载形式。|
    |`VirtualCall<RTN,T0,T1,T2,T3,T4,T5,T6,T7>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的this指针和偏移量对具有返回值的虚函数进行调用。`8`参数重载形式。|
    |-|-|
    |`Virtual_Call(void*,UInt64)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`0`参数重载形式。|
    |`Virtual_Call<T0>(void*,UInt64,T0)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`1`参数重载形式。|
    |`Virtual_Call<T0,T1>(void*,UInt64,T0,T1)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`2`参数重载形式。|
    |`Virtual_Call<T0,T1,T2>(void*,UInt64,T0,T1,T2)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`3`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3>(void*,UInt64,T0,T1,T2,T3)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`4`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4>(void*,UInt64,T0,T1,T2,T3,T4)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`5`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5>(void*,UInt64,T0,T1,T2,T3,T4,T5)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`6`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5,T6>(void*,UInt64,T0,T1,T2,T3,T4,T5,T6)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`7`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5,T6,T7>(void*,UInt64,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`8`参数重载形式。|
    |-|-|
    |`Virtual_Call(IntPtr,UInt64)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`0`参数重载形式。|
    |`Virtual_Call<T0>(IntPtr,UInt64,T0)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`1`参数重载形式。|
    |`Virtual_Call<T0,T1>(IntPtr,UInt64,T0,T1)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`2`参数重载形式。|
    |`Virtual_Call<T0,T1,T2>(IntPtr,UInt64,T0,T1,T2)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`3`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3>(IntPtr,UInt64,T0,T1,T2,T3)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`4`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4>(IntPtr,UInt64,T0,T1,T2,T3,T4)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`5`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`6`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5,T6>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5,T6)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`7`参数重载形式。|
    |`Virtual_Call<T0,T1,T2,T3,T4,T5,T6,T7>(IntPtr,UInt64,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的this指针和偏移量对无返回值的虚函数进行调用。`8`参数重载形式。|
    |-|-|
    |`SymCall<RTN>(String)`|由给定的符号对具有返回值的函数进行调用。`0`参数重载形式。|
    |`SymCall<RTN,T0>(String,T0)`|由给定的符号对具有返回值的函数进行调用。`1`参数重载形式。|
    |`SymCall<RTN,T0,T1>(String,T0,T1)`|由给定的符号对具有返回值的函数进行调用。`2`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2>(String,T0,T1,T2)`|由给定的符号对具有返回值的函数进行调用。`3`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2,T3>(String,T0,T1,T2,T3)`|由给定的符号对具有返回值的函数进行调用。`4`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2,T3,T4>(String,T0,T1,T2,T3,T4)`|由给定的符号对具有返回值的函数进行调用。`5`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2,T3,T4,T5>(String,T0,T1,T2,T3,T4,T5)`|由给定的符号对具有返回值的函数进行调用。`6`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2,T3,T4,T5,T6>(String,T0,T1,T2,T3,T4,T5,T6)`|由给定的符号对具有返回值的函数进行调用。`7`参数重载形式。|
    |`SymCall<RTN,T0,T1,T2,T3,T4,T5,T6,T7>(String,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的符号对具有返回值的函数进行调用。`8`参数重载形式。|
    |-|-|
    |`Sym_Call(String)`|由给定的符号对无返回值的函数进行调用。`0`参数重载形式。|
    |`Sym_Call<T0>(String,T0)`|由给定的符号对无返回值的函数进行调用。`1`参数重载形式。|
    |`Sym_Call<T0,T1>(String,T0,T1)`|由给定的符号对无返回值的函数进行调用。`2`参数重载形式。|
    |`Sym_Call<T0,T1,T2>(String,T0,T1,T2)`|由给定的符号对无返回值的函数进行调用。`3`参数重载形式。|
    |`Sym_Call<T0,T1,T2,T3>(String,T0,T1,T2,T3)`|由给定的符号对无返回值的函数进行调用。`4`参数重载形式。|
    |`Sym_Call<T0,T1,T2,T3,T4>(String,T0,T1,T2,T3,T4)`|由给定的符号对无返回值的函数进行调用。`5`参数重载形式。|
    |`Sym_Call<T0,T1,T2,T3,T4,T5>(String,T0,T1,T2,T3,T4,T5)`|由给定的符号对无返回值的函数进行调用。`6`参数重载形式。|
    |`Sym_Call<T0,T1,T2,T3,T4,T5,T6>(String,T0,T1,T2,T3,T4,T5,T6)`|由给定的符号对无返回值的函数进行调用。`7`参数重载形式。|
    |`Sym_Call<T0,T1,T2,T3,T4,T5,T6,T7>(String,T0,T1,T2,T3,T4,T5,T6,T7)`|由给定的符号对无返回值的函数进行调用。`8`参数重载形式。|
    


