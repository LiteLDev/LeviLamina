## 🧰 Item Object API

In LLSE, use "item objects" to manipulate and get information about an item in the inventory.

### Get an Item Object

#### Get From Event or API

Obtain the item object given by BDS by registering the **event listener** function, or calling some **returning item object** functions.
For details, see [Event listener documentation - EventAPI](/en_US/Development/EventAPI/Listen.md)   

#### Generate New Item Object

Through this function, a new item object is generated based on the given information.

`mc.newItem(name,count)`  

- Parameters: 
  - name : `String`  
    The standard type name of the item, such as `minecraft:bread`
  - count : `Integer`  
    The number of items to create.
- Return value: Generated item object.
- Return value type: `Item`
  - If the return value is `Null`, the item generation has failed.

#### Clone From an Existing Item Object


Through this function, clone a new item object based on an existing item object.
The new item object is not related to the old object.
For an existing item object item, there are functions:

`item.clone()`  

- Return value: The cloned item object.
- Return value type: `Item`
  - If the return value is `Null`, the item generation has failed.

#### Generate Item Objects via **NBT**

Through this function, a new item object is generated using NBT.

`mc.newItem(nbt)`  

- Parameters: 
  - nbt : `NbtCompound`  
    The item NBT used to generate the item object.
- Return value: The generated item object.
- Return value type: `Item`
  - If the return value is `Null`, the item generation has failed.

> Note: Do not save an item object long-term.
> When the item corresponding to the item object is destroyed, the corresponding item object will become invalid. Therefore, if there is a need to operate an item for a long time, please obtain the real-time item object through the above methods.
<br>


### Item Object - Properties

Every item object contains some fixed object properties. For a specific item object `it`, there are the following attributes:

| Attributes| Meaning                | Data Type |
| -------- | ------------------------ | --------- |
| it.name  | Item's in-game name      | `String`  |
| it.type  | Item Standard Type Name           | `String`  |
| it.id    | Item's in-game ID           | `Integer` |
| it.count | Item's count   | `Integer` |
| it.aux   | Item's data value (for example, wool color or wood type) | `Integer` |

These object properties are read-only and cannot be modified.

<br>

### Item Object - Properties

Each item object contains some member functions (member methods) that can be executed. For a specific item object `it`, you can perform some operations on this item through the following functions:

> Note that after modifying the items corresponding to the player's inventory, don't forget to use the member function `pl.refreshItems()` of the player object to refresh the player's inventory displayed on the client.

#### Check if the Item Object Is Empty

`it.isNull()`

For example, when there is no item in a grid, the item object you get is empty.

- Return value: Whether this item object is empty.
- Return value type:  `Boolean`

<br>

#### Make This Item Object Empty (Delete Item)

`it.setNull()`

- Return value: Whether the deletion is successful.
- Return value type:  `Boolean`

<br>

#### Set This Item Object to Another Item 

`it.set(item)`

- Parameters: 
  - item : `Item`  
    The item object to assign.
- Return value: Whether the assignment is successful.
- Return value type:  `Boolean`

<br>

#### Set the Data Value of an Item 

`it.setAux(aux)`

- Parameters: 
  - aux : `Integer`  
    Item's auxiliary/data value (ex. Wool color, Wood plank type)
- Return value: Whether the data value was successfully set.
- Return value type:  `Boolean`

<br>

#### Generate Drop Entities From Item Objects

Through this function, according to the item object, a drop entity with the same content is generated at the specified location.

`mc.spawnItem(item,pos)`    
`mc.spawnItem(item,x,y,z,dimid)`  

- Parameters: 
  - item : `Item`  
    The item object used to spawn the drop entity.
  - pos : `IntPos `/ `FloatPos`  
    A coordinate object where the drop entity spawns (or use x, y, z, dimid to determine spawn position).
- Return value: The generated drop entity object.
- Return value type: `Entity`
  - If the return value is `Null`, the item generation has failed.

<br>

#### Get the Item's NBT Object

`it.getNbt()`

- Return value: The item's NBT object.
- Return value type: `NbtCompound`

<br>

#### Write to the Item's NBT Object 

`it.setNbt(nbt)`

- Parameters: 
  - nbt : `NbtCompound`  
    NBT objects.
- Return value: Whether the write was successful or not.
- Return value type: `Boolean`

For more usage of NBT objects, please refer to [NBT Interface Documentation](/en_US/Development/NbtAPI/NBT.md)

<br>

#### Set Custom Item Lore

`it.setLore(names)`

- Parameters: 
  - names : `Array<String,String,...>`  
    The array of Lore strings to set.
- Return value: Whether setting the lore was successful.
- Return value type:  `Boolean`

<br>

