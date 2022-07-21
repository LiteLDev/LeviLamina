##  🎓 数据包 API

下面这些对象与API为脚本提供了基本的BDS数据包接口。 

温馨提示：此类API需要部分逆向基础，了解数据包结构（可通过参考Nukkit，PokcetMine，BDS逆向得知数据包结构）如出现客户端崩溃，为数据包结构错误，并非BUG。   

文档不列出数据包ID与其结构，请自行查询。


## 目录
- 🔉 [数据包对象 API](#🔉-数据包对象-api)
- 🔌 [二进制流对象 API](#🔌-二进制流对象-api)

<br>

## 🔉 数据包对象 API

在LLSE中，使用「数据包对象」来获取数据包的相关信息。

### 获取一个数据包对象

#### 从API获取

调用某些**返回数据包对象**的函数，来获取到BDS给出的数据包对象    
详见 [二进制流对象](#🔌-二进制流对象-api) 

<br>

### 数据包对象 - 函数

每一个数据包对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的实体对象`pkt`，可以通过以下这些函数对这个数据包进行一些操作

#### 获取数据包名称

`pkt.getName()`

- 返回值：数据包名称
- 返回值类型： `String`

<br>

#### 获取数据包ID

`pkt.getId()`

- 返回值：数据包ID
- 返回值类型： `Integer`

<br>

## 🔌 二进制流对象 API

### 创建一个二进制流对象

[Js] ```new BinaryStream()```

[Lua] ```BinaryStream()```

- 返回值：二进制流对象
- 返回值类型： `BinaryStream`

### 二进制流对象 - 函数

每一个二进制流对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的实体对象`bs`，可以通过以下这些函数对这个二进制流进行一些操作

#### 重置二进制流

`bs.reset()`

- 返回值：是否成功
- 返回值类型： `Boolean`

<br>

#### 写入二进制流

`bs.writexxxx(value)`    

- 参数：
  - value : `NULL`  
    参考下面表格

- 返回值：是否成功
- 返回值类型： `Boolean`

| 可用函数     |  参数类型                 |
| -------- | ------------------------ |
| writeBool | `Boolean`                 | 
| writeByte  |  `Integer`          | 
| writeDouble    |`Number`    | 
| writeFloat | `Float`     | 
| writeSignedBigEndianInt   |  `Number` | 
| writeSignedInt   |  `Number` | 
| writeSignedInt64   |  `Number` | 
| writeSignedShort   | `Integer` | 
| writeString   | `String`  | 
| writeUnsignedChar   |  `Integer` | 
| writeUnsignedInt   |  `Number` | 
| writeUnsignedInt64   |  `Number` | 
| writeUnsignedShort   |  `Integer` | 
| writeUnsignedVarInt   |  `Number` | 
| writeUnsignedVarInt64   |  `Number` |
| writeVarInt   |  `Number` |
| writeVarInt64   |  `Number`  |
| writeVec3   |  `FloatPos`  |
| writeCompountTag   |  `NbtCompound`  |

<br>

#### 通过二进制流构建数据包

`bs.createPacket(pktid)`    

- 参数：
  - pktid : `Integer`  
    数据包ID

- 返回值：数据包对象
- 返回值类型： `Packet`

<br>

### 演示代码

向一个玩家发送TextPacket数据包
```JavaScript
mc.listen("onChat",function(pl,msg){
    const bs = new BinaryStream()
    var text = "LLSE Packet Test"
    bs.reserve(text.length + 8)
    bs.writeUnsignedChar(0)
    bs.writeBool(true)
    bs.writeString(text)
    bs.writeString("")
    bs.writeString("")
    var pkt = bs.createPacket(9)
    pl.sendPacket(pkt)
})
```