## 📮 Block Entity Object API

In LLSE, "block entity objects" are used to manipulate and obtain additional data associated with a particular block.
Note: **Block Entity Object** is not a **Entity**! There is no special relationship between them.

### Get a Block Entity Object

#### Obtained From Blocks


For an existing block object `bl`, there are:

`bl.getBlockEntity()` 

- Return type: The block's block entity object.
- Return value type: `BlockEntity`
  - If the return value is `Null`, it means that obtaining the block entity object failed, or this block **doesn't** have a corresponding entity object.

> Note: Do not save a block entity object.
> When the block corresponding to the block object is destroyed, the corresponding block entity object will become invalid. Therefore, if there is a need to operate a certain block entity for a long time, please obtain the real-time block entity object through the above method.

<br>


### Block Entity Object - Properties

Each block entity object contains some fixed object properties. For a particular block entity object `be`, there are the following properties:

| Attributes | Meaning                 | Data Type |
| ------- | -------------------------- | --------- |
| be.pos  | The coordinates where the block entity is located. | `IntPos`  |
| be.type | The Type ID of the block entity object.       | `Integer` |

These object properties are read-only and cannot be modified.

<br>

### Block Entity Object - Function

Each block entity object contains some member functions (member methods) that can be executed. For a specific block entity object `be`, you can perform some operations on this block entity through the following functions:

#### Get the Block Entity's NBT Object 

`be.getNbt()`

- Return type: NBT object of the block entity.
- Return value type: `NbtCompound`

<br>

#### Write to the Block Entity's NBT object 

`be.setNbt(nbt)`

- Parameters:
  - nbt : `NbtCompound`  
    NBT objects.
- Return type: Whether the write was successful or not.
- Return value type: `Boolean`

For more usage of NBT objects, please refer to [NBT Interface Documentation](/en_US/Development/NbtAPI/NBT.md)

<br>

#### Get the Block Entity's Block Object

`be.getBlock()`

- Return type: The block entity's block object.
- Return value type: `Block`

<br>