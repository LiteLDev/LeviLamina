## 📋 NBT - Normal Data Type

We refer to other NBT objects other than `NbtList` and `NbtCompound` types collectively as **normal data** types. These objects only store simple data and contain no other complex structures inside.

### Get an NBT Normal Data Object

#### Parse From an Existing NBT Object

See the [NbtList - List Type](/en_US/Development/NbtAPI/NBTList.md) and [NbtCompound - Tag Type](/en_US/Development/NbtAPI/NBTCompound.md) documentation.

<br>

#### Create a New NBT Data Object

[JS]  
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

- Parameters: 
  - data: `Number` / `Float` / `Double` / `ByteBuffer` / `String` (Optional parameter)  
    Set the initial data according to the type of object you want to create. The incoming data type needs to be able to initialize the corresponding type of data.  
- Return value: The generated NBT object.
- Return value type: `NbtEnd` / `NbtByte` / `NbtShort` / `NbtInt` / `NbtLong` / `NbtFloat` / `NbtDouble` / `NbtByteBuffer` / `NbtString` , depending on the type of the data.
  - If the creation fails, an exception will be thrown.

<br>

For an NBT object that stores common data types `value`, with the following member functions.

#### Set Object Data

`value.set(data)`

- Parameter: 
  - data : `Number` / `Float` / `Double` / `ByteBuffer` / `String`  
    According to the data type of this NBT object, write the data of the corresponding type.  
    For an `NbtFloat` object, write data with a `Float` type.
- Return value: Whether the write was successful or not.
- Return value type: `Boolean`

<br>

#### Read Object Data.

`value.get()`

- Return value: The data stored in the object.
- Return value type: ``Number` / `Float` / `Double` / `ByteBuffer` / `String`, depending on the type of the data stored.

<br>