# LLSE - NBT Documentation

> **NBT** (**N**amed **B**inary **T**ags) format is a storage format used in Minecraft to store data into files.
> The NBT format stores data in a tree structure with many *tags*. All tags have an independent ID and name.
>
> --- Minecraft Wiki

This provides scripts with the ability to manipulate the **NBT** data type. **NBT** interface support greatly improves the scalability of the game.

In the game, a node called **NBT tag** is used to identify an item of NBT data. A variety of data types such as ordinary data, List, Compound, etc. can be stored in NBT tags.

In LiteLoader ScriptEngine, each NBT data type has its corresponding data type, and we collectively call them "NBT objects".
The comparison of the LLSE type with the NBT data type is as follows:

| NBT Data Type | Corresponding NBT Object Type | Type Description Wiki)        |
| ----------- | ----------------- | ----------------------------- |
| `End`       | `NbtEnd`          | Used to mark the end of a tag.            |
| `Byte`      | `NbtByte`         | Signed byte or boolean (8 bits)   |
| `Short`     | `NbtShort`        | Signed Short (16-bit)          |
| `Int`       | `NbtInt`          | Signed Integer (32-bit)             |
| `Long`      | `NbtLong`         | Signed Long (64-bit)           |
| `Float`     | `NbtFloat`        | Single precision floating point number   |
| `Double`    | `NbtDouble`       | Double precision floating point number   |
| `ByteArray` | `NbtByteBuffer`   | Byte Array                      |
| `String`    | `NbtString`       | UTF-8 string                  |
| `List`      | `NbtList`         | NBT List (similar to array)       |
| `Compound`  | `NbtCompound`     | NBT Tags (Similar to a list of Key-Value pairs)|

Each data type may have a slightly different usage interface. They are introduced separately below:

<br>

## 🎈 NBT Object Generic Interface 

Each NBT object contains some executable member functions (member methods).  
For any kind of NBT object, there are the following general interfaces. named `nbt`. An example of an NBT object of:

#### Get the Data Type Stored by the NBT Object 

`nbt.getType()`

- Return value: The data type stored by this NBT object.
- Return value type: `Enum`

Possible return values are: `NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### Convert NBT Object to JSON String 

`nbt.toString([space])`

- Parameter:
  - space : `Integer`  
    (Optional parameter) If you want to format the output string, pass this parameter.  
    Represents the number of spaces per indent, so the resulting string is more human-readable.  
    This parameter defaults to `-1`, i.e. the output string is not formatted.
- Return value: The JSON form of the NBT object.
- Return value type: `String`

Hint: If this NBT object stores the `List` or `Compoundtype`, they will expand recursively to `Array` or `Object`.
If this NBT object stores the `ByteArray` Type, the output byte string will be base64 encoded before output.

> The string output by the above function conforms to the Json standard format, but cannot be deserialized.
> If there is a need for deserialization, please use the **SNBT** interface provided by the NBT tag class.

<br>