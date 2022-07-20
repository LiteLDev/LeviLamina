## 📚 NbtList - List type

A `NbtList` represents a list that stores a list of NBT objects, similar to a data structure like a list/array.
The interface of the object can perform some operations unique to the NBT list.

### Get an NBT List Object

#### Parse From an Existing NBT Object

See [NbtList - List Type](/en_US/Development/NbtAPI/NBTList.md) and [NbtCompound - Tag Type](/en_US/Development/NbtAPI/NBTCompound.md) documentation.

<br>

#### Create a New NBT List Object

[JS]  `new NbtList([data])`  
[Lua] `NbtList([data])`

- Parameter: 
  - data: Array<NBT object> (optional parameter)   
    Pass in an array of NBT objects. Arrays are allowed to contain other array/object structures, but the contents must all be NBT objects
- Return value: The generated NBT object.
- Return value type: `NbtList`
  - If the creation fails, an exception will be thrown.

<br>

For a certain `NbtList` type of object `list`, there are the following interfaces.

#### Get List Length

`list.getSize()`

- Return value: The length of the list.
- Return value type: `Integer`

<br>

#### Get the Data Type of an Element Stored in a List at the Index Position Given

`list.getTypeOf(index)`

- Parameter: 
  - index : `Integer`  
    The index of the element to query.
- Return value: The data type of the NBT stored at this element.
- Return value type: `Enum`
  - If the NBT being read does not exist, it will return `Null`

Possible return values are: `NBT.End` `NBT.Byte` `NBT.Short` `NBT.Int` `NBT.Long`   
`NBT.Float` `NBT.Double` `NBT.ByteArray` `NBT.String`  
`NBT.List` `NBT.Compound`

<br>

#### Set a NBT Object in a List at the Index Position Given

`list.setTag(index,tag)`

- Parameters: 
  - index : `Integer`  
    The index of the NBT you want to operate on.
  - tag: `NBT object`   
    NBT object to write to.
    The data type of the write object must be the same as the data type stored in the list position, and the index cannot exceed the number of items in the list.
- Return value: The NBT list that has been written (for other operations in the chain).
- Return value type: `NbtList`

<br>

#### Read NBT Object in a List at the Index Position Given

`list.getTag(index)`

- Parameter: 
  - index : `Integer`  
    The index of the NBT you want to operate on.
- Return value: The NBT Object at the index position.
- Return value type: `NBT object`
  - If the NBT being read does not exist, it will return `Null`

<br>

#### Append an NBT Object to the End of the List

`list.addTag(tag)`

- Parameter: 
  - tag: `NBT object`  
    The NBT object being added to the list.
- Return value: The NBT list with the NBT object added (for chaining operations).
- Return value type: `NbtList`

<br>

#### Delete an NBT Object at the Given Index Position

`list.removeTag(index)`

- Parameter: 
  - index : `Integer`  
    The position of the NBT object to be deleted.  
    The index cannot exceed the number of NBT objects in the list.
- Return value: Processed NBT list (easy for chaining to perform other operations).
- Return value type: `NbtList`

<br>

## Some Convenience Functions to Assist in the Manipulation of NBT Objects

Obviously, purely using NBT objects can be cumbersome and syntactically complex when modifying some of the NBT values.
Therefore, some convenient functions for simplifying object operations are also provided here. By directly operating the data at the specified location and avoiding transit through the NBT object, the amount of code can be reduced to a certain extent.

#### Set Data at a Specific Position

`list.setEnd(index)`  
`list.setByte(index,data)`  
`list.setShort(index,data)`  
`list.setInt(index,data)`  
`list.setLong(index,data)`  
`list.setFloat(index,data)`  
`list.setDouble(index,data)`  
`list.setByteBuffer(index,data)`      
`list.setString(index,data)`    

- Parameter: 
  - index : `Integer`  
    The index of the NBT you want to operate on.
  - data: `Number` / `Float` / `Double` / `ByteBuffer` / `String`  
    The specific data being written.  
    The write data type must be the same as the data type stored in the subscript position, and the index cannot be greater than the number of NBT objects in the list.
- Return value: NBT list that has been written (for other operations in the chain).
- Return value type: `NbtList`

<br>

#### Read the Specific Data of a Subscript Position 

`list.getData(index)`  

- Parameter: 
  - index : `Integer`  
    The index of the NBT you want to operate on.
- Return value: The data stored in the specified location in the list.
- Return value type: `Number` / `Float` / `Double` / `ByteBuffer` / `String`, whatever is the data type of the data stored by the object.
  - If the target location stores the `List` type NBT, it will return a `NbtList` object; if the target location stores a `Compound` type NBT, it will return a `NbtCompound` object.
  - If the NBT being read does not exist, it will return `Null`

<br>

#### Convert List Type to Array

`list.toArray()`

- Return value: The array form of the list.
- Return value type: `Array`

Convert the contents of List to LLSE array/list, convert all data items to LLSE data type and store them in the corresponding subscript of the array/list for easy reading and processing.
If an item in the List stores a `List` or `Compound` type which will recursively expand at the corresponding position as `Array` or `Object`.

<br>