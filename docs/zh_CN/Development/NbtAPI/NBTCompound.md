## 📒 NbtCompound - 标签类型

一个`NbtCompound `代表一个完整的标签，里面储存了一系列键值对，类似于对象 / 表这样的数据结构。  
通过`NbtCompound`对象的接口，才可以进行 NBT 标签所独有的一些操作。

### 获取一个 NBT 标签对象

#### 从现有的 NBT 对象中解析获取

详见 [NbtList - 列表类型](zh_CN/Development/NbtAPI/NBTList.md) 和 [NbtCompound - 标签类型](zh_CN/Development/NbtAPI/NBTCompound.md) 文档

<br>

#### 创建新的 NBT 标签对象

[Js]  `new NbtCompound([data])`  
[Lua] `NbtCompound([data])`

- 参数：
  - data: Object<string, NBT对象>（可选参数）  
    传入一个NBT对象构成的对象。对象中允许包含其他数组 / 对象结构，但内容必须都为NBT对象
- 返回值：生成的NBT对象
- 返回值类型：`NbtList`
  - 如果创建失败，将抛出异常

```clike
[Js]
var nbt = new NbtCompound({
        "name1": new NbtInt(3),
        "name2": new NbtString("test"),
        "name3": new NbtList([
            new NbtFloat(4.0),
            new NbtFloat(6.0)
        ]),
        "name4": new NbtLong(66666)
    });
[Lua]
local nbt = NbtCompound({
        "name1" = NbtInt(3),
        "name2" = NbtString("test"),
        "name3" = NbtList({
            NbtFloat(4.0),
            NbtFloat(6.0)
        }),
        "name4" = NbtLong(66666)
    });
```



#### 从 SNBT  字符串生成 NBT 标签对象

`NBT.parseSNBT(snbt)`  

- 参数：
  - snbt : `String`  
    你要解析的SNBT字符串
- 返回值：生成的NBT对象
- 返回值类型：`NbtCompound`
  - 如返回值为 `Null` 则表示解析失败

> SNBT字符串中必须包含一个完整的Compound

<br>

#### 从二进制 NBT 数据生成 NBT 标签对象

`NBT.parseBinaryNBT(nbt)`  

- 参数：
  - nbt : `ByteBuffer`  
    你要解析的二进制 NBT 数据
- 返回值：生成的NBT对象
- 返回值类型：`NbtCompound`
  - 如返回值为 `Null` 则表示解析失败

> 二进制 NBT 数据中必须包含一个完整的Compound

<br>对于某个一个`NbtCompound`类型的对象`comp`，有如下这些接口

#### 获取所有的键

`comp.getKeys()`

- 返回值：Compound 中所有的键
- 返回值类型：`Array<String,String,...>`

<br>

#### 获取键对应的值的数据类型

`comp.getTypeOf(key)`

- 参数：
  - key: `String`  
    要查询的键名
- 返回值：对应的值的数据类型
- 返回值类型：`Enum`
  - 如果要读取的NBT不存在，将返回`Null`

可能的返回值有：`NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### 设置键对应的 NBT 对象

`comp.setTag(key,tag)`

- 参数：
  - key: `String`   
    要操作的键名
  - tag:  `NBT对象`  
    要写入的 NBT 对象（它承载着具体的NBT数据）  
    写入数据类型必须和键对应的值储存的数据类型一致，键名可以不存在
- 返回值：是否成功写入
- 返回值类型：`Boolean`

<br>

#### 读取键对应的 NBT 对象

`comp.getTag(key)`

- 参数：
  - key: `String`   
    要操作的键名
- 返回值：键对应的NBT对象
- 返回值类型： `NBT对象`
  - 如果要读取的NBT不存在，将返回`Null`

<br>

#### 删除键对应的 NBT 对象

`comp.removeTag(key)`

- 参数：
  - key: `String`  
    要操作的键名。键名必须已经存在
- 返回值：处理完毕的NBT对象（便于连锁进行其他操作）
- 返回值类型：`NbtCompound`

<br>

## 一些协助 NBT 对象操作的方便函数

很明显，在修改 NBT 的某些值的时候，纯粹使用 NBT 对象会显得麻烦而语法复杂。  
因此，这里还提供了一些简化对象操作的方便函数，通过直接操作指定位置的数据，而避免通过 NBT 对象中转，可以一定程度上降低代码量

#### 设置键对应的值的具体数据

`comp.setEnd(key)`  
`comp.setByte(key,data)`  
`comp.setShort(key,data)`  
`comp.setInt(key,data)`  
`comp.setLong(key,data)`  
`comp.setFloat(key,data)`  
`comp.setDouble(key,data)`  
`comp.setByteArray(key,data)`  
`comp.setString(key,data)`    

- 参数：
  - key: `String`   
    要操作的键名
  - data: `上述类型`  
    要写入的具体数据  
    写入数据类型必须和键对应的值储存的数据类型一致，键名可以不存在
- 返回值：写入完毕的NBT对象（便于连锁进行其他操作）
- 返回值类型：`NbtCompound`

<br>

#### 读取键对应的值的具体数据

`comp.getData(key)`  

- 参数：
  - key: `String`   
    要操作的键名
- 返回值：键对应的值的具体数据
- 返回值类型：`任意类型`，以储存的数据类型为准
  - 如果目标位置储存的是`List`类型 NBT，将返回一个`NbtList`对象；如果目标位置储存的是`Compound`类型 NBT，将返回一个`NbtCompound`对象
  - 如果要读取的NBT不存在，将返回`Null`

<br>

#### 将 NBT 标签对象 转换为Object

`comp.toObject()`

- 返回值：对应的对象 / 表
- 返回值类型：`Object`

将Compound的内容转换为LXL对象，把数据项都转换为LXL数据类型储存于对象的对应key中，方便读取和处理  
如果Compound某一项储存的是`List`或者`Compound`类型的 NBT，将在对应位置递归展开为`Array`或`Object`

<br>

#### 将 NBT 标签对象 序列化为SNBT
`nbt.toSNBT([space])`

- 参数
  - space : `Integer`  
    （可选参数）如果要格式化输出的字符串，则传入此参数  
    代表每个缩进的空格数量，这样生成的字符串更适合人阅读  
    此参数默认为0，即不对输出字符串进行格式化
- 返回值：对应的SNBT字符串
- 返回值类型：`String`

> 除了普通的二进制NBT之外，另一种玩家更熟悉的NBT是纯文本形式的，通常在[命令](https://minecraft.fandom.com/zh/wiki/命令)里使用。这种格式常被称为**SNBT**（**字符串化的二进制命名标签**，**S**tringified **NBT**）
>
> --- Minecraft Wiki

<br>

#### 将 NBT 标签对象 序列化为二进制NBT

`comp.toBinaryNBT()`

- 返回值：对应的二进制NBT数据
- 返回值类型：`ByteBuffer`
> 只有完整的顶层Compound标签可以被转换为二进制NBT

<br>

#### 销毁此 NBT 标签对象
`comp.destroy()`

- 返回值：是否成功清理
- 返回值类型：`Boolean`

注意，只有根Compound标签可以被销毁，而且，请谨慎使用此函数，不当的使用将会造成服务器崩溃  
合适的销毁有助于解决内存占用问题。在销毁完后，请千万不要再使用此NBT对象和他的所有子对象