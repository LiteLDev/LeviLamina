# LLSE - NBT 文档

> **NBT（二进制命名标签**，**N**amed **B**inary **T**ags**）** 格式为Minecraft中用于向文件中存储数据的一种存储格式。   
> NBT格式以树形结构并配以许多*标签* 的形式存储数据。所有的标签都有一个独立的ID和名称。
>
> --- Minecraft Wiki

这里为脚本提供了操作 **NBT** 数据类型的能力。 **NBT** 接口的支持，极大的提高了游戏的可扩展性

游戏中，使用被称为 **NBT标签 **的节点来标识一项NBT数据。NBT标签中可以储存普通数据、List、Compound 等多种数据类型。   

在LiteLoader ScriptEngine中，每种NBT数据类型都有其对应的数据类型，我们统称他们为「NBT对象」。  
LLSE类型与NBT数据类型的对照如下：

| NBT数据类型 | 对应的NBT对象类型 | 类型说明（来自MC Wiki）       |
| ----------- | ----------------- | ----------------------------- |
| `End`       | `NbtEnd`          | 用于标记标签的结尾            |
| `Byte`      | `NbtByte`         | 有符号字节 或 布尔值（8位）   |
| `Short`     | `NbtShort`        | 有符号短整型（16位）          |
| `Int`       | `NbtInt`          | 有符号整形（32位）            |
| `Long`      | `NbtLong`         | 有符号长整型（64位）          |
| `Float`     | `NbtFloat`        | 单精度浮点数                  |
| `Double`    | `NbtDouble`       | 双精度浮点数                  |
| `ByteArray` | `NbtByteBuffer`   | 字节数组                      |
| `String`    | `NbtString`       | UTF-8 字符串                  |
| `List`      | `NbtList`         | NBT 列表（类似于 数组）       |
| `Compound`  | `NbtCompound`     | NBT 标签（类似于 键值对列表） |

每种数据类型可能有略微不同的使用接口。下面对他们作分别介绍

<br>

## 🎈  NBT 对象通用接口

每一个 NBT 对象都包含一些可以执行的成员函数（成员方法）  
对于任何种类的NBT对象，都有下面这些通用的接口。以名为`nbt`的某个NBT对象为例：

#### 获取NBT对象储存的数据类型

`nbt.getType()`

- 返回值：此NBT对象储存的数据类型
- 返回值类型：`Enum`

可能的返回值有：`NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### 将NBT对象转换为Json字符串

`nbt.toString([space])`

- 参数
  - space : `Integer`  
    （可选参数）如果要格式化输出的字符串，则传入此参数  
    代表每个缩进的空格数量，这样生成的字符串更适合人阅读  
    此参数默认为-1，即不对输出字符串进行格式化
- 返回值：对应的Json字符串
- 返回值类型：`String`

提示：如果这个NBT对象储存的是`List`或者`Compound`类型，将递归展开为`Array`或`Object`  
如果这个NBT对象储存的是`ByteArray`类型，输出的字节串将先进行base64编码后再输出

> 上述函数输出的字符串符合Json标准格式，但是无法进行反序列化。  
> 如果有反序列化的需求，请使用 NBT标签类 提供的的 **SNBT** 接口

<br>