## 📚 NbtList - 列表类型

一个`NbtList`代表一个列表，里面储存了一列 NBT 对象，类似于列表 / 数组这样的数据结构。  
通过`NbtList`对象的接口，才可以进行 NBT 列表所独有的一些操作。  

### 获取一个 NBT 列表对象

#### 从现有的NBT对象中解析获取

详见 [NbtList - 列表类型](zh_CN/Development/NbtAPI/NBTList.md) 和 [NbtCompound - 标签类型](zh_CN/Development/NbtAPI/NBTCompound.md) 文档

<br>

#### 创建新的NBT列表对象

[Js]  `new NbtList([data])`  
[Lua] `NbtList([data])`

- 参数：
  - data: Array<NBT对象>（可选参数）  
    传入一个NBT对象构成的数组。数组中允许包含其他数组 / 对象结构，但内容必须都为NBT对象
- 返回值：生成的NBT对象
- 返回值类型：`NbtList`
  - 如果创建失败，将抛出异常

<br>

对于某个一个`NbtList`类型的对象`list`，有如下这些接口

#### 获取列表长度

`list.getSize()`

- 返回值：此列表的长度
- 返回值类型：`Integer`

<br>

#### 获取某个下标位置储存的数据类型

`list.getTypeOf(index)`

- 参数：
  - index : `Integer`  
    要查询的目标下标
- 返回值：此下标处储存的NBT的数据类型
- 返回值类型：`Enum`
  - 如果要读取的NBT不存在，将返回`Null`

可能的返回值有：`NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### 设置某个下标位置的NBT对象

`list.setTag(index,tag)`

- 参数：
  - index : `Integer`  
    要操作的目标下标
  - tag: `NBT对象`   
    要写入的 NBT 对象  
    写入对象的数据类型必须和下标位置储存的数据类型一致，且下标不能超出有效下标的最大值
- 返回值：写入完毕的NBT列表（便于连锁进行其他操作）
- 返回值类型：`NbtList`

<br>

#### 读取某个下标位置的NBT对象

`list.getTag(index)`

- 参数：
  - index : `Integer`  
    要操作的目标下标
- 返回值：下标位置的NBT对象
- 返回值类型：`NBT对象`
  - 如果要读取的NBT不存在，将返回`Null`

<br>

#### 往列表末尾追加一个NBT对象

`list.addTag(tag)`

- 参数：
  - tag: `NBT对象`  
    要追加的 NBT 对象
- 返回值：追加完毕的NBT列表（便于连锁进行其他操作）
- 返回值类型：`NbtList`

<br>

#### 删除某个下标位置的NBT对象

`list.removeTag(index)`

- 参数：
  - index : `Integer`  
    要删除的目标下标  
    下标不能超出有效下标的最大值
- 返回值：处理完毕的NBT列表（便于连锁进行其他操作）
- 返回值类型：`NbtList`

<br>

## 一些协助 NBT 对象操作的方便函数

很明显，在修改NBT的某些值的时候，纯粹使用NBT对象会显得麻烦而语法复杂。  
因此，这里还提供了一些简化对象操作的方便函数，通过直接操作指定位置的数据，而避免通过NBT对象中转，可以一定程度上降低代码量

#### 设置某个下标位置的具体数据

`list.setEnd(index)`  
`list.setByte(index,data)`  
`list.setShort(index,data)`  
`list.setInt(index,data)`  
`list.setLong(index,data)`  
`list.setFloat(index,data)`  
`list.setDouble(index,data)`  
`list.setByteBuffer(index,data)`      
`list.setString(index,data)`    

- 参数：
  - index : `Integer`  
    要操作的目标下标
  - data: `Number` / `Float` / `Double` / `ByteBuffer` / `String`  
    要写入的具体数据  
    写入数据类型必须和下标位置储存的数据类型一致，且下标不能超出有效下标的最大值
- 返回值：写入完毕的NBT列表（便于连锁进行其他操作）
- 返回值类型：`NbtList`

<br>

#### 读取某个下标位置的具体数据

`list.getData(index)`  

- 参数：
  - index : `Integer`  
    要操作的目标下标
- 返回值：指定位置储存的具体数据
- 返回值类型：`Number` / `Float` / `Double` / `ByteBuffer` / `String`，以对象储存的数据类型为准
  - 如果目标位置储存的是`List`类型 NBT，将返回一个`NbtList`对象；如果目标位置储存的是`Compound`类型 NBT，将返回一个`NbtCompound`对象
  - 如果要读取的NBT不存在，将返回`Null`

<br>

#### 将List类型转换为Array

`list.toArray()`

- 返回值：对应的数组 / 列表
- 返回值类型：`Array`

将List的内容转换为LXL数组 / 列表，把数据项都转换为LXL数据类型储存于数组 / 列表的对应下标中，方便读取和处理  
如果List某一项储存的是`List`或者`Compound`类型的 NBT，将在对应位置递归展开为`Array`或`Object`

<br>