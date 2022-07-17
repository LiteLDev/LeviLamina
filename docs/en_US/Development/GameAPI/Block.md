## 📦 Block Object API

In LLSE, use "block objects" to manipulate and obtain information about a certain type of block.

### Get a Block Object

#### Get From Event or API 

By registering the **event listener** function, or calling some **returning a block object** function, you can get the block object related to the related event given by the BDS
For details, see [Event listener documentation - EventAPI](/en_US/Development/EventAPI/Listen.md)  

#### Obtained by Block Coordinates

Use this function to manually generate objects. Note that the block you want to get must be in the range that has been loaded, otherwise there will be problems.

`mc.getBlock(pos)`  
`mc.getBlock(x,y,z,dimid)`

- Parameters: 
  - pos : `IntPos `  
    The coordinates of the block (or use x, y, z, dimid to determine the block position)
- Return value: The generated `Block` object. 
- Return value type: `Block`
  - If the return value is `Null`, it means that the block acquisition failed.

> Note: Do not save a block object **long-term**.
> When the block corresponding to the block object is destroyed, the corresponding block object will become invalid. Therefore, if there is a need to operate a certain block for a long time, please obtain the real-time block object through the above method.
<br>


### Block Object - Properties

Every block object contains some fixed object properties. for a specific block object `bl`, has the following properties:

| Attributes    | Meaning              | Data Type      |
| ------------- | -------------------- | --------- |
| bl.name       | The name of the block displayed in the game   | `String`  |
| bl.type       | Block standard type name        | `String`  |
| bl.id         | The in-game id of the block       | `Integer` |
| bl.pos        | The coordinates of the block         | `IntPos`  |
| bl.tileData   | The block's data value          | `Integer` |

These object properties are read-only and cannot be modified.

<br>

#### Destroy The Block

`bl.destroy(drop)`

- Parameters：
  - drop : `Boolen`  
    Whether to generate drops
- Return value: Whether the destroy was successful or not.
- Return value type: `Boolean`

<br>

### Block Object - Function

Each block object contains some member functions (member methods) that can be executed. for a specific block object `bl`, you can perform some operations on this block through the following functions.

#### Get the Block's NBT Object

`bl.getNbt()`

- Return value: NBT object of the block
- Return value type: `NbtCompound`

<br>

#### Write to the Block's NBT Object

`bl.setNbt(nbt)`

- Parameters: 
  - nbt : `NbtCompound`  
    NBT objects
- Return value: Whether the write was successful or not.
- Return value type: `Boolean`

For more usage of NBT objects, please refer to [NBT Interface Documentation](/en_US/Development/NbtAPI/NBT.md)
Note: Use this api with caution, consider using mc.setBlock() instead.

<br>

#### Get the BlockState of the Block 

`bl.getBlockState()`

- Return value: The BlockState of the Block.
- Return value type: `Object`

Convenience function to help parse block BlockState and convert it to `Object` for easy reading and parsing
Equivalent to script executing `block.getNbt().getTag("states").toObject()`

<br>

#### Determine if a Block Has a Container

`bl.hasContainer()`

- Return value: whether this block has a container
- Return value type: `Boolean`

Such as boxes, buckets and other containers; they each have a container object of their own.

<br>

#### Get the Container Object Owned by the Block

`bl.getContainer()`

- Return value: The container object owned by this block
- Return value type: `Container`

For more usage of container objects, please refer to [Container Object API Documentation](/en_US/Development/GameAPI/Container.md)

<br>

#### Determine if a Block Has a Block Entity

`bl.hasBlockEntity()`

- Return value: Whether the block has a block entity
- Return value type: `Boolean`

<br>

#### Get the Block Entity Owned by the Block

`bl.getBlockEntity()`

- Return value: The block entity owned by this block
- Return value type: `BlockEntity`

<br>

#### Remove the Block Entity Owned by the Block

`bl.removeBlockEntity()`

- Return value: Whether the deletion was successful
- Return value type: `Boolean`

For more usage of block entity object, please refer to [Block entity object API documentation](/en_US/Development/GameAPI/BlockEntity.md)

<br>

### Other Block Function API

The following APIs provide APIs for interacting with blocks at specified locations in the game:

#### Set the Block at the Specified Location

`mc.setBlock(pos,block,tiledata)`  
`mc.setBlock(x,y,z,dimid,block,tiledata)`

- Parameters: 
  - pos : `IntPos `  
    Target block position (or use x, y, z, dimid to determine block position)
  - block : `Block` ,`String` or `NBTCompound`
    The block object to set to, the block standard type name (e.g. `minecraft:stone`) or block NBT data
  - tiledata : `Integer`  
    Block state value, same as tiledata of vanilla /setBlock command, default is 0, only valid when placing blocks by block type name.
- Return value: Whether the setting is successful or not.
- Return value type: `Boolean`

Through this function, set the block corresponding to one coordinate to another, similar to the command `/setblock`

<br>

#### Generate Particle Effects at Specified Locations

`mc.spawnParticle(pos,type)`  
`mc.spawnParticle(x,y,z,dimid,type)`

- Parameters: 
  - pos : `IntPos `/ `FloatPos`  
    Target spawn position (or use x, y, z, dimid to determine block position)
  - type : `String`  
    The name of the particle effect to generate (check the wiki for details)
- Return value: Whether it was successfully generated
- Return value type: `Boolean`

Particle effect names can be found in the [Minecraft Wiki](https://minecraft.fandom.com/wiki/Particles#Types_of_particles), don't forget the namespace prefix when passing in parameters. similar to `minecraft:heart_particle`