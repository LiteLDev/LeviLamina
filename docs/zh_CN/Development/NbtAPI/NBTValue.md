## 📋 NBT - 普通数据类型

我们把除了 `NbtList` 和 `NbtCompound` 类型以外的其他NBT对象统称为 **普通数据** 类型。这些对象只储存了简单的数据，内部不含有其他复杂结构。

### 获取一个 NBT 普通数据对象

#### 从现有的NBT对象中解析获取

详见 [NbtList - 列表类型](zh_CN/Development/NbtAPI/NBTList.md) 和 [NbtCompound - 标签类型](zh_CN/Development/NbtAPI/NBTCompound.md) 文档

<br>

#### 创建新的NBT数据对象

[Js]  
`new NbtEnd()`  
`new NbtByte([data])`  
`new NbtShort([data])`  
`new NbtInt([data])`  
`new NbtLong([data])`  
`new NbtFloat([data])`  
`new NbtDouble([data])`   
`new NbtByteArray([data])`  
`new NbtString([data])`  
[Lua]  
`NbtEnd()`  
`NbtByte([data])`  
`NbtShort([data])`  
`NbtInt([data])`  
`NbtLong([data])`  
`NbtFloat([data])`  
`NbtDouble([data])`   
`NbtByteArray([data])`  
`NbtString([data])`  

- 参数：
  - data: `Number` / `Float` / `Double` / `ByteBuffer` / `String`（可选参数）  
    根据你要创建的对象类型设置初始数据，传入的数据类型需要能够初始化对应类型的数据  
    可以不传入此参数
- 返回值：生成的NBT对象
- 返回值类型：`NbtEnd` / `NbtByte` / `NbtShort` / `NbtInt` / `NbtLong` / `NbtFloat` / `NbtDouble` / `NbtByteBuffer` / `NbtString` ，取决于你选择的数据类型
  - 如果创建失败，将抛出异常

<br>

对于一个储存普通数据类型的NBT对象 `value`，有如下成员函数

#### 设置对象的数据

`value.set(data)`

- 参数：
  - data : `Number` / `Float` / `Double` / `ByteBuffer` / `String`  
    根据这个NBT对象的数据类型，写入对应类型的数据  
    如对于一个`Float`类型的 NBT 对象，你需要传入一个`Float`类型的值
- 返回值：是否成功写入
- 返回值类型：`Boolean`

<br>

#### 读取对象的数据

`value.get()`

- 返回值：对象中储存的数据
- 返回值类型：``Number` / `Float` / `Double` / `ByteBuffer` / `String`，以储存的实际数据类型为准

<br>