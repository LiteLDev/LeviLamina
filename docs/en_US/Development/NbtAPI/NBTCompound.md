## 📒 NbtCompound - Tag Type

A `NbtCompound` represents a complete tag, which stores a series of key-value pairs, similar to a data structure such as an object/table.  
pass `NbtCompound` Only the interface of the object can perform some operations unique to the NBT tag.

### Get an NBT Tag Object

#### Parse From an Existing NBT Object 

See [NbtList - List Type](/en_US/Development/NbtAPI/NBTList.md) and [NbtCompound - Tag Type](/en_US/Development/NbtAPI/NBTCompound.md) documentation.

<br>

#### Create a New NBT Tag Object

[JS]  `new NbtCompound([data])`  
[Lua] `NbtCompound([data])`

- Parameter: 
  - data: Object<string, NBT Object> (Optional parameter)  
    Pass in an object consisting of NBT objects. Objects are allowed to contain other array/object structures, but the contents must be NBT objects.
- Return value: The generated NBT Object
- Return value type: `NbtList`
  - If the creation fails, an exception will be thrown.

```clike
[JS]
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



#### Generate NBT Tag Object From SNBT String 

`NBT.parseSNBT(snbt)`  

- Parameter: 
  - snbt : `String`  
    The SNBT string you want to parse.
- Return value: The generated NBT object.
- Return value type: `NbtCompound`
  - If the return value is `Null` it means the parsing failed.

> The SNBT string must contain a complete Compound.

<br>

#### Generate NBT Tag Objects From Binary NBT Data

`NBT.parseBinaryNBT(nbt)`  

- Parameter: 
  - nbt : `ByteBuffer`  
    The binary NBT data you want to parse.
- Return value: The generated NBT object.
- Return value type: `NbtCompound`
  - If the return value is `Null` it means the parsing failed.

>  A complete Compound must be included in the binary NBT data 

<br>For an object `comp` of type `NbtCompound`, there are the following interfaces:

#### Get All Keys

`comp.getKeys()`

- Return value: All keys in Compound.
- Return value type: `Array<String,String,...>`

<br>

#### Get the Data Type of the Value Corresponding to the Key

`comp.getTypeOf(key)`

- Parameter: 
  - key: `String`  
    The name of the key to query.
- Return value: The data type of the corresponding value.
- Return value type: `Enum`
  - If the NBT to read does not exist, it will return `Null`.

Possible return values ​​are: `NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### Set the NBT Object Corresponding to the Key

`comp.setTag(key,tag)`

- Parameters: 
  - key: `String`   
    The name of the key to operate on.
  - tag:  `NBT Object`  
    NBT object to be written (it carries specific NBT data).
    The write data type must be the same as the data type stored in the value corresponding to the key, and the key name may not exist.
- Return value: Whether the write was successful or not.
- Return value type: `Boolean`

<br>

#### Read the NBT Object Corresponding to the Key

`comp.getTag(key)`

- Parameter: 
  - key: `String`   
    The name of the key to operate on.
- Return value: NBT object corresponding to the key.
- Return value type:  `NBT Object`
  - If the NBT to read does not exist, it will return `Null`.

<br>

#### Delete the NBT Object Corresponding to the Key 

`comp.removeTag(key)`

- Parameter: 
  - key: `String`  
    The name of the key to operate on. The key must already exist.
- Return value: The processed NBT object (for other operations in the chain).
- Return value type: `NbtCompound`

<br>

## Some Convenience Functions to Assist in the Manipulation of NBT Objects

Obviously, purely using NBT objects can be cumbersome and syntactically complex when modifying some of the NBT values. 
Therefore, some convenient functions for simplifying object operations are also provided here. By directly operating the data at the specified location and avoiding transit through the NBT object, the amount of code can be reduced to a certain extent.

#### Set the Specific Data of the Value Corresponding to the Key

`comp.setEnd(key)`  
`comp.setByte(key,data)`  
`comp.setShort(key,data)`  
`comp.setInt(key,data)`  
`comp.setLong(key,data)`  
`comp.setFloat(key,data)`  
`comp.setDouble(key,data)`  
`comp.setByteArray(key,data)`  
`comp.setString(key,data)`    

- Parameters: 
  - key: `String`   
    The name of the key to operate on.
  - data: `Above type`  
    The data to write.  
    The write data type must be the same as the data type stored in the value corresponding to the key, and the key name may not exist.
- Return value: The NBT object that has been written to. (For chaining to perform other operations)
- Return value type: `NbtCompound`

<br>

#### Read the Specific Data of the Value Corresponding to the Key

`comp.getData(key)`  

- Parameter: 
  - key: `String`   
    The name of the key to operate on.
- Return value: The specific data of the value corresponding to the key.
- Return value type: `Any type`, whichever is the type of the stored data.
  - If the target location stores the `List` type NBT, will return a `NbtList` object; if the target location stores a `Compound` type NBT, will return a `NbtCompound` object.
  - If the NBT to read does not exist, it will return `Null`.

<br>

#### Convert NBT Tag Object to Object

`comp.toObject()`

- Return value: The object/table form of an NBT Tag object.
- Return value type: `Object`

Convert the content of Compound to LLSE object, convert all data items to LLSE data type and store them in the corresponding key of the object, which is convenient for reading and processing.  
If an item of Compound stores a `List` or `Compound` type NBT, it will recursively expand at the corresponding position as `Array` or `Object`.

<br>

#### Serialize NBT Tag Object to SNBT
`nbt.toSNBT([space])`

- Parameter:
  - space : `Integer`  
     (Optional parameter) If you want to format the output string, pass this parameter.  
    Represents the number of spaces per indent, so the resulting string is more human-readable.  
    This parameter defaults to `-1`, i.e. the output string is not formatted.
- Return value: The converted SNBT string.
- Return value type: `String`

> In addition to the normal binary NBT, another type of NBT that players are more familiar with is plain text, usually used in [commands](https://minecraft.fandom.com/wiki/Commands). This format is often referred to as **SNBT** (**Binary Named Tag,**, **S**tringified **NBT**)
>
> --- Minecraft Wiki

<br>

#### Serialize NBT Tag Object to Binary NBT

`comp.toBinaryNBT()`

- Return value: The corresponding binary NBT data.
- Return value type: `ByteBuffer`
> Only complete top-level Compound tags can be converted to binary NBT.

<br>

#### Destroy This NBT Tag Object
`comp.destroy()`

- Return value: Whether the cleanup was successful.
- Return value type: `Boolean`

Note that only the root Compound tag can be destroyed, and please use this function with caution, improper use will cause the server to crash.  
Proper destruction can help with memory footprint issues. After destruction, please never use this NBT object and all its sub-objects again.