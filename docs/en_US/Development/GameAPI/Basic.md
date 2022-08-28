# 🎨 LLSE - Game Element Interface Documentation

> The following APIs provide the ability to **modify** and **extension** game content.

Obviously, the game element interface is at the core of the entire plug-in system, which is related to the ability to control and expand game content.  
LLSE provides a rich and powerful interface of game elements to facilitate your creativity.

## 🔮 Game Element Objects

For the indexing of game elements, LLSE uses a special type of variable to keep track of each game element, and calls it "xx objects", such as "player objects" or "block objects".  
You can think of it as a unique identifier for a game element.   

Currently, LLSE has the following game element objects:

| Object Type Name | Object Name     | Purpose of Object                  |
| ---------------- | --------------- | ------------------------------------------ |
| `IntPos`         | Integer Coordinate Object  | Identifies integer location (like block coordinates)             |
| `FloatPos`       | Floating Point Coordinate Object | Identifies a floating point position (like entity coordinates)          |
| `DirectionAngle` | Direction Object| Identifies angle information (such as the direction a player is facing)       |
| `Player`         | Player Object | Identify player or access player attributes       |
| `Entity`         | Entity Object | Identify entity or access entity attributes      |
| `Block`          | Block Object  | Identify Block or access block attributes |
| `Item`           | Item Object  | Identifies an item in an inventory |
| `Container`      | Container Object | Identifies a container that can store items|
| `BlockEntity`    | Block Entity Object| Identifies a block entity |
| `Objective`      | Scoring Item Objective | Identifies the scoring items of a scoreboard system|

You will come across them frequently in subsequent documentation.

<br>

<br>

## 🎯 Coordinate Object

In games, numerous APIs require coordinates.
The engine uses objects of type `IntPos` and `FloatPos` to indicate coordinates, called "coordinate objects".
Each member of the coordinate object is **readable and writable**.

1. `IntPos` object
    Its members are all **integers**, which are mostly used to represent **block coordinates** and other positions represented by integers.
    For a variable pos of type `IntPos`, there are the following members: 

   | Member    | Meaning    | Data Type       |
   | --------- | ---------- | --------- |
   | pos.x     | x coordinate     | `Integer` |
   | pos.y     | y coordinate     | `Integer` |
   | pos.z     | z coordinate     | `Integer` |
   | pos.dim   | Dimension name   | `String`  |
   | pos.dimid | Dimension ID     | `Integer` |

    Among them, the value of the **dimension ID** attribute is: `0` represents the Main World, `1` represents The Nether, and `2` represents The End.
    
    **Dimension text name:** The values of the attributes are: "Main World", "Nether", "End".

   If in some cases the dimension is invalid, or cannot be obtained, you will find that the value of `dimid` is `-1`.

   <br>

2. `FloatPos`object
    Its members are all **floating point numbers**, which are mostly used to represent **entity coordinates** and other positions that cannot be represented by integers  
    For a variable pos of type `FloatPos`, there are the following members:  

   | Member    | Meaning    | Data Type       |
   | --------- | ---------- | --------- |
   | pos.x     | x coordinate     | `Float`   |
   | pos.y     | y coordinate     | `Float`   |
   | pos.z     | z coordinate     | `Float`   |
   | pos.dim   | Dimension Name   | `String`  |
   | pos.dimid | Dimension ID     | `Integer` |

   Among them, the value of the **dimension ID** attribute is: `0` represents The Main World, `1` represents The Nether, and `2` represents The End.
   
   **Dimension text name:** The values of the attributes are: "Main World", "Nether", "End"

   If in some case the dimension is invalid, or cannot be obtained, you will find that the value of `dimid` is `-1`.

<br>

### Coordinate Object Auxiliary Interface

For scripting languages ​​that naturally support object-oriented, you can directly construct the coordinate object and pass in the x, y, z, dimid parameters.
For some languages ​​that support general object orientation, LLSE also provides auxiliary interfaces to help generate a coordinate object more easily.

#### Generate an Integer Coordinate Object

`mc.newIntPos(x,y,z,dimid)` [static]

- Parameters: 
  - x : `Integer`  
    x coordinate
  - y : `Integer`  
    y coordinate
  - z : `Integer`  
    z coordinate
  - dimid : `Integer`  
    Dimension ID: `0` representing the overworld, `1` represents The Nether, `2` represents The End.
- Return value: An Integer coordinate object.
- Return value type: `IntPos`

#### Generate a Floating Point Coordinate Object

`mc.newFloatPos(x,y,z,dimid)`

- Parameters: 
  - x : `Float`  
    x coordinate
  - y : `Float`  
    y coordinate
  - z : `Float`  
    z coordinate
  - dimid : `Integer`  
    Dimension ID: `0` representing the overworld, `1` represents The Nether, `2` represents The End.
- Return value: A floating point coordinate object.
- Return value type: `FloatPos`

<br>

## 📐 Bearing Angle Object

The engine uses a `DirectionAngle` object to denote an Euler angle, called a "direction angle object".
Its two members are **floating point numbers**, which are mostly used to represent the direction data such as the orientation of the entity.
Each member of the direction angle object is **readable and writable**. 

For a `DirectionAngle` type variable ang, there are the following members:  

| Member    | Meaning       | Data Type      |
| --------- | ---------- | --------- |
| ang.pitch | Pitch angle (-90° ~ 90°)  | `Float` |
| ang.yaw   | Yaw angle (rotation angle) | `Float`   |

Since there is no concept of rotation in the entity system of MC, there is no data related to the rollover angle.

<br>

#### Convert Yaw Angle to Base Heading

`ang.toFacing()`

- Return value: The basic orientation indicated by the current bearing object.
- Return value type: `Integer`

The return value is `0-3`, representing the four basic orientations of **North, East, South, West**. Used to quickly determine the general direction an entity is facing.

## Get Structure NBT

`mc.getStructure(pos1, pos2, ignoreBlocks = false, ignoreEntities = false)`

- Parameters:
  - pos1 : `IntPos`
  - pos1 : `IntPos`
  - ignoreBlocks : `Boolean`
  - ignoreEntities : `Boolean`

- Return value type: `NbtCompound`

## Set Structure NBT

`mc.setStructure(nbt, pos, mirror = 0, rotation = 0)`

- Parameters:
  - nbt : `NbtCompound`
  - pos : `IntPos`
  - mirror : `number`
    - `0:None` `1:X` `2:Z` `3:XZ`
  - rotation : `number`
    - `0:None` `1:Rotate90` `2:Rotate180` `3:Rotate270`

- Return value type: `Boolean`
