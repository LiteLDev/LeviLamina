## 👜 Container Object API

In LLSE, "container objects" are used to manipulate information about containers that have grids and can store and place items.
The **container** here is a broad concept. In addition to the traditional containers such as boxes and barrels, such as player inventory, boxes carried by alpaca, etc. can also be handled as "containers", obtained and used. Container APIs  corresponding to the container

### Get a Container Object

#### Get From Event or API

Obtain the container object given by BDS by registering the **event listener** function, or calling some **returning container object** functions.
For details, see [Event listener documentation - EventAPI](/en_US/Development/EventAPI/Listen.md)      

#### Get By Entity 

Obtain a **container object** corresponding to a player's item bar, armor bar, and ender box through each member function of the player object
See [Player Object API](/en_US/Development/GameAPI/Player.md)      

#### Obtained From Blocks

For a block that can hold items, the corresponding **container object** is obtained through the member function of the block object.
See [Block Object API](/en_US/Development/GameAPI/Block.md)      

> Note: Do not save a container object long-term.
> When the entity/block corresponding to the container object is destroyed, the corresponding container object will become invalid. Therefore, if there is a need to operate a certain container for a long time, please obtain the real-time container object through the above methods.

<br>

### Container Info Object - Properties

Each container information object contains some fixed object properties. for a specific container object `ct`, has the following properties:

| Attributes| Meaning               | Data Types      |
| ------- | ------------------ | --------- |
| ct.size | The total number of spaces the container has | `Integer` |
| ct.type | The type of container       | `String`  |

<br>

### Container Object - Function

Each container object contains some member functions (member methods) that can be executed. for a specific container object `ct`, you can perform some operations on this container through the following functions:

> Attention! After modifying the items corresponding to the player's inventory, don't forget to use the member function `pl.refreshItems` of the player object to refresh the player's inventory displayed by the client.

#### Put the Item Object Into the Container  

`ct.addItem(item)`  

- Parameters: 
  - item : `Item`  
    The item to add to the container.
- Return type: Whether the item was added successfully or not.
- Return value type: `Boolean`

<br>

#### Put the Item Object Into the First Empty Space of the Container

`ct.addItemToFirstEmptySlot(item)`  

- Parameters: 
  - item : `Item`  
    The item to add to the container.
- Return type: Whether the item was added successfully or not.
- Return value type: `Boolean`

Unlike the above function, this function will not stack to the existing item stack in the container.

<br>

#### Check to See if (There Is Room) In the Container for This Item 

`ct.hasRoomFor(item)`  

- Parameters: 
  - item : `Item`  
    The item to be placed in the container.
- Return type: Whether the item can be placed in the container.
- Return value type: `Boolean`

<br>

#### Reduce an Item Object in a Container

`ct.removeItem(index,count)`  

- Parameters: 
  - index : `Integer`  
    The grid number in the container where the item is placed.
  - count : `Integer`  
    The amount of items to remove from the container. If it is equal to or greater than the amount of that item in the container, the item stack will be cleared.
- Return type: Whether the item removal was successful.
- Return value type: `Boolean`

<br>

#### Get the Item Object of a Grid in the Container

`ct.getItem(index)`  

- Parameters: 
  - index : `Integer`  
    The container grid location where the item is palced.
- Return type: The item object at the grid location.
- Return value type: `Item`

The item object obtained here is a reference. That is to say, modifying the item object returned here, or using its API, is equivalent to directly manipulating the corresponding item in the container.

<br>

#### Set the Item Object of a Grid in the Container

`ct.setItem(index,item)`  

- Parameters: 
  - index : `Integer`  
    The container grid location where the item will be placed.
  - item : `Item`  
    The item that will be placed in the container.
- Return type: Whether placing the item in the container was successful.
- Return value type: `Boolean`

<br>

#### Get the List of Item Objects in All Grids of the Container

`ct.getAllItems()`  

- Return type: All item objects in the container.
- Return value type: `Array<Item,Item,...>`

The item objects obtained here are all references. That is to say, modifying the item object returned here, or using its API, is equivalent to directly manipulating the corresponding item in the container.

<br>

#### Empty The Container

`ct.removeAllItems()`  

- Return type: Whether the container was successfully cleared.
- Return value type: `Boolean`

<br>

#### Check if the Container Is Empty

`ct.isEmpty()`  

- Return type: Whether the container is empty.
- Return value type: `Boolean`