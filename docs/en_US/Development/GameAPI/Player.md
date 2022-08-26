## 🏃‍♂️ Player Object API

In LLSE, use "player objects" to manipulate and obtain information about a player.

### Get a Player Object

#### Get From Event or API

By registering the **event listener** function, get the player object related to the related event given by BDS.
For details, see [Event listener documentation - EventAPI](/en_US/Development/EventAPI/Listen.md)

#### Acquired From Existing Players

Manually generate player objects by **playername** or **xuid**
Use this function to manually generate objects. Note that the player you want to get must be online, otherwise the generation will fail.

`mc.getPlayer(info)`

- Parameters: 
  - info : `String`  
    Player's name or Xuid.
- Return value: The generated player object. 
- Return value type: `Player`
  - If the return value is `Null`, it means that getting the player failed.

#### Get All Online Players

This function returns an array of player objects, each of which corresponds to a player on the server.

`mc.getOnlinePlayers()`

- Return value: List of online `Player` objects.
- Return value type: `Array<Player,Player,...>`

> Note: Do not save a `Player` object **long-term**.
> When the player exits the server, the corresponding player object will become invalid. Therefore, if there is a need to operate a player for a long time, please obtain the real-time player object through the above methods.

#### Get random online player

`mc.getRandomPlayer()`

- Return value: Random player
- Return value type: `Player`

<br>

### Player Object - Properties

Each player object contains some fixed object properties. For a particular player object `pl`, there are these properties.

| Attributes   | Meaning                     | Data Type        |
| ------------ | --------------------------- | ---------------- |
| pl.name      | Player's name               | `String`         |
| pl.pos       | Player's coordinates        | `FloatPos`       |
| pl.blockPos  | The coordinates of the block that the player is standing on.          | `IntPos`         |
| pl.lastDeathPos  | The coordinates of the block that the player last died.          | `IntPos`         |
| pl.realName  | Player's Real Name              | `String`         |
| pl.nameTag   | Player's Name Tag               | `String`         |
| pl.xuid      | Player Xuid String              | `String`         |
| pl.uuid      | Player Uuid string              | `String`         |
| pl.permLevel | Player's permission level (0 - 4) | `Integer`        |
| pl.gameMode  | Player's game mode (0 - 3)     | `Integer`        |
| pl.canSleep  | Whether the player can sleep   | `Boolean`        |
| pl.canFly    | Whether the player can fly     | `Boolean`        |
| pl.canBeSeenOnMap    | Whether the player can be seen on map     | `Boolean`        |
| pl.maxHealth | Player's maximum health              | `Integer`        |
| pl.health    | Player's current health              | `Integer`        |
| pl.inAir     | Whether the player is in the air     | `Boolean`        |
| pl.inWater   | Whether the player is in water       | `Boolean`        |
| pl.inLava   | Whether the player is in lava       | `Boolean`        |
| pl.inRain   | Whether the player is in rain       | `Boolean`        |
| pl.inSnow   | Whether the player is in snow       | `Boolean`        |
| pl.inClouds | Whether the player is in clouds       | `Boolean`    |
| pl.sneaking  | Whether the player is sneaking       | `Boolean`        |
| pl.speed     | Player's current speed               | `Float`          |
| pl.direction | Player's current orientation         | `DirectionAngle` |
| pl.uniqueId  | Player's (entity's) unique identifier    | `String`         |
| pl.isLoading | Player is loading | `Boolean`    |
| pl.isTrading | Player is trading | `Boolean`    |
| pl.isRiding | Player is riding | `Boolean`    |
| pl.isGliding | Player is gliding | `Boolean`    |

These object properties are read-only and cannot be modified. in:

- The value of the **Player Game Mode** attribute is: `0` for survival mode, `1` for creative mode, `2` for adventure mode, `3` for spectator mode
- **Player's real name** attribute stored strings can be considered reliable, they will not be changed by name changes
- **Player device IP address** attribute stores the player's device IP and port number, the format is similar to `12.34.567.89:1111`
- For a detailed explanation of the **player's current orientation** attribute, see [Basic Game Interface Documentation](/en_US/Development/GameAPI/Basic.md)
- The comparison table of **operation authority level** attributes is as follows:

| Permission Level | Corresponding Authority    |
| ------------ | --------------- |
| 0            | Ordinary Member    |
| 1            | OP permissions         |
| 4            | OP + Console permissions |

<br>

### Player Object - Function

Each player object contains some member functions (member methods) that can be executed. For a specific player object `pl`, you can perform some operations on this player through the following functions.

#### Determine if the Player Is OP  

`pl.isOP()`

- Return value: Whether the player is an OP.
- Return value type: `Boolean`  

```Javascript
[JS]
// For a `Player` object pl
var open = pl.isOP();
[Lua]

```

#### Disconnect Player  

`pl.kick([msg])`  
`pl.disconnect([msg])`

- Parameters: 
  - msg : `String`  
    (Optional parameter) The reason for the disconnection displayed to the kicked player.
    Defaults to "disconnecting from server".  
- Return value: Whether the connection was successfully disconnected.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.kick();
```
```Lua
[Lua]
pl:kick()
```

#### Send a Text Message to the Player  

`pl.tell(msg[,type])`  
`pl.sendText(msg[,type])`

- Parameters: 

  - msg : `String`  
    The message to be sent.  

  - type : `Integer`  
    (Optional parameter) The type of text message to send, default is `0`.

    | Type Parameter | Message Type                |
    | -------- | ----------------------- |
    | 0        | Normal Message (Raw)        |
    | 1        | Chat Message (Chat)         |
    | 4        | Music Box Message (Popup)      |
    | 5        | Message Above the Inventory (Tip)  |
    | 9        | JSON format message (JSON)    |

- Return value: Whether the message was sent successfully.

- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.tell("Welcome back ~ ",5);
[Lua]

```

#### Broadcast a Text Message to All Players  

`mc.broadcast(msg[,type])`

- Parameters: 

  - msg : `String`  
    The message to be sent.  

  - type : `Integer`  
    (Optional parameter) The type of text message to send, default is `0`.

    | Type Parameter | Message Type                |
    | -------- | ----------------------- |
    | 0        | Normal Message (Raw)          |
    | 1        | Chat Message (Chat)         |
    | 4        | Music Box Message (Popup)      |
    | 5        | Message Above the Inventory (Tip)  |
    | 9        | JSON format message (JSON)    |

- Return value: Whether the message was sent successfully.

- Return value type: `Boolean`

```Javascript
[JS]
mc.broadcast("Hello everyone ~ ");
[Lua]

```

#### Display a toast to the top of the screen

`pl.sendToast(title,message)`

- Parameters: 

  - title : `String`  
    The title of the toast.  

  - message : `string`  
    the message that the toast may contain alongside the title.

- Return value: Whether the message was sent successfully.
- Return value type: `Boolean`

```Javascript
[JS]
pl.sendToast("Hello","everyone ~");
[Lua]

```


#### Execute a Command as a Player 

`pl.runcmd(cmd)`

- Parameters: 
  - cmd : `String`  
    The command to be executed.  
- Return value: Whether the execution was successful.
- Return value type:  `Boolean`   

```Javascript
[JS]
//For a `Player` object pl
var open = pl.runcmd("tp ~ ~+50 ~");
[Lua]

```

#### Speak as a Player

`pl.talkAs(text)`

- Parameters: 
  - text : `String`  
    The text the player will be made to say. 
- Return value: Whether the execution was successful.
- Return value type:  `Boolean`   

<br>

#### Speak to a Player as a Player

`pl.talkAs(target,text)`

- Parameters: 
  - target : `Player`  
    The player who will be spoken to. 
  - text : `String`  
    The text the player will be made to say. 
- Return value: Whether the execution was successful.
- Return value type:  `Boolean`   

<br>

#### Teleport the Player to the Specified Location  

`pl.teleport(pos)`  
`pl.teleport(x,y,z,dimid)`

- Parameters: 
  - pos :`IntPos `/ `FloatPos`  
    Target position coordinates (or use x, y, z, dimid to determine player position)
- Return value: Whether the teleport was successful or not.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl, a coordinate object pos
pl.teleport(pos);
[Lua]

```

#### Kill the Player  

`pl.kill()`

- Return value: Whether the execution was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.kill();
[Lua]

```

#### Damage the Player

`pl.hurt(damage)`

- Parameters: 
  - damage : `Integer`  
    The amount of damage dealt to the player .
- Return value: Whether damage was dealt.
- Return value type: `Boolean`

Note that the damage dealt here is real damage and cannot be reduced by protective equipment such as armor.

<br>

#### Set the Specified Player on Fire

`pl.setOnFire(time,isEffect)`

- Parameters: 
  - time : `Integer`  
    Fire time, in seconds.
  - isEffect : `Boolean`
    Will there be a fire effect?
- Return value: Whether the player was set on fire.
- Return value type: `Boolean`

<br>

#### Rename Player  

`pl.rename(newname)`

- Parameters: 
  - newname : `String`  
    Player's new name.  
- Return value: WHether the rename was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.rename("newname");
[Lua]

```

#### Get the Block the Player Is Currently Standing On

`pl.getBlockStandingOn()`

- Return value: The `Block` object currently standing on.
- Return value type: `Block`

<br>

#### Get the Player's Device Information Object

`pl.getDevice()`

- Return value: Device information object corresponding to the player
- Return value type: `Device`

The device information object stores certain information about the player's device, such as device IP address, device type, network latency, etc.  
For additional information about device information objects, please refer to [Device Information Objects API](/en_US/Development/GameAPI/Device.md)

<br>

#### Get the Item Object in the Player’s Main Hand

`pl.getHand()`

- Return value: The item object in the player's main hand.
- Return value type: `Item`

The item object obtained here is a reference. That is to say, modifying the item object returned here, or using its API, is equivalent to directly operating the corresponding item in the player's main hand.

<br>

#### Get the Item Object of the Player’s Off-Hand

`pl.getOffHand()`

- Return value: The item object in the player's off-hand
- Return value type: `Item`

The item object obtained here is a reference. That is to say, modifying the item object returned here, or using its API, is equivalent to directly operating the corresponding item in the player's off hand.

<br>

#### Get the Container Object of the Player’s Inventory  

`pl.getInventory()`

- Return value: The container object corresponding to the player's inventory
- Return value type: `Container`

For more usage of container objects, please refer to [Container Object API Documentation](/en_US/Development/GameAPI/Container.md)

<br>

#### Gets the Container Object for the Player’s Armor Bar  

`pl.getArmor()`

- Return value: The container object corresponding to the player's armor bar
- Return value type: `Container`

For more usage of container objects, please refer to [Container Object API Documentation](/en_US/Development/GameAPI/Container.md)

<br>

#### Get the Container Object of the Player’s Ender Chest  

`pl.getEnderChest()`

- Return value: The container object corresponding to the player's ender chest.
- Return value type: `Container`

For more usage of container objects, please refer to [Container Object API Documentation](/en_US/Development/GameAPI/Container.md)

<br>

#### Get the Player’s Respawn Coordinates  

`pl.getRespawnPosition()`

- Return value: Respawn point coordinates
- Return value type: `IntPos`

<br>

#### Modify the Player’s Respawn Coordinates  

`mc.setRespawnPosition(pos)`  
`mc.setRespawnPosition(x,y,z,dimid)`

- Parameters: 
  - pos : `IntPos`  
    Respawn coordinates (or use x, y, z, dimid to determine respawn position)
- Return value: Whether the modification was successful.
- Return value type: `Boolean`

<br>

#### Give the Player an Item

`pl.giveItem(item)`

- Parameters: 
  - iten : `Item`  
    The item being given.
- Return value: Whether the item was given.
- Return value type: `Boolean`

If the player's inventory is full, it will return failure.

<br>

#### Clears All Items of the Specified Type From the Player’s Backpack

`pl.clearItem(type)`

- Parameters: 
  - type : `String`  
    Item object type name to clear
- Return value: The number of items cleared
- Return value type: `Integer`

Compares the type attribute of all items in the player's inventory, main hand, off-hand, and armor to this string.
If found, clear this item.

<br>

#### Refresh Player Inventory, Armor Bar

`pl.refreshItems()`

- Return value: Whether the refresh was successful
- Return value type: `Boolean`

After modifying the player's items, in order for the client to take effect, it is necessary to refresh all the player's items.

<br>

#### Refresh All Chunks Loaded by the Player

`pl.refreshChunks()`

- Return value: Whether the refresh was successful.
- Return value type: `Boolean`

<br>

#### Modify Player Operation Permissions  

`pl.setPermLevel(level)`

- Parameters: 

  - level : `Integer`  
    Target operation authority level  

    | Player Permission Level | Corresponding Permission Authority    |
    | ------------ | --------------- |
    | 0            | Ordinary Member Permissions    |
    | 1            | OP Permissions          |
    | 4            | OP + Console Permissions |

- Return value: Whether the modification was successful.

- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.setPermLevel(1);
[Lua]

```

#### Modify Player Game Mode

`pl.setGameMode(mode)`

- Parameters: 

  - mode : `Integer`  
    Target game mode, `0` is survival mode, `1` is creative mode, `2` is extreme mode.
- Return value: Whether the modification was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.setGameMode(1);
[Lua]

```

#### Increase Player Experience Level 

`pl.addLevel(count)`

- Parameters: 
  - count : `Integer`  
    The number of experience levels to add.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.addLevel(6);
[Lua]

```
#### Decreases Player Experience Level

`pl.reduceLevel(count)`

- Parameters: 
  - count : `Integer`  
    The number of experience levels to reduce.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Get Player Experience Level 

`pl.getLevel()`

- Return value: The player's experience level.
- Return value type: `Integer`

```JavaScript
[Js]
//For a `Player` object pl
pl.getLevel();
```
```Lua
[Lua]
--For a `Player` object pl
pl.getLevel()
```
#### Set Player Experience Level

`pl.setLevel(count)`

- Parameters
  - count : `Integer`  
    The number of experience levels to set.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Reset Player Experience

`pl.resetLevel()`

- Return value: Whether the setting was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.resetLevel();
```
```Lua
[Lua]
--For a `Player` object pl
pl:resetLevel()
```

#### Get Player Current Experience Points 

`pl.getCurrentExperience()`

- Return value: The player's current experience points.
- Return value type: `Integer`

<br>

#### Set Player Current Experience Points

`pl.setCurrentExperience(count)`

- Parameters
  - count : `Integer`  
    The number of experience points to set.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Get Player Total Experience Points

`pl.getTotalExperience()`

- Return value: The player's total experience points.
- Return value type: `Integer`

<br>

#### Set Player Total Experience Points

`pl.getTotalExperience(count)`

- Parameters
  - count : `Integer`  
    The number of experience points to set.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Increase Player Experience Points

`pl.addExperience(count)`

- Parameters: 
  - count : `Integer`
    The amount of experience points to give to the player.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.addExperience(6);
```
```Lua
[Lua]
--For a `Player` object pl
pl:addExperience(6)
```

#### Decreases Player Experience Points

`pl.reduceExperience(count)`

- Parameters: 
  - count : `Integer`  
    The number of experience points to reduce.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Get the Experience Points Needed for Players to Level Up

`pl.getXpNeededForNextLevel()`

- Return value: The amount of experience points required for the player to level up.
- Return value type: `Integer`

Note that this method ignores the experience value that exceeds the level when calculating.

```Javascript
[JS]
//For a `Player` object pl
pl.getXpNeededForNextLevel();
```
```Lua
[Lua]
--For a `Player` object pl
pl.getXpNeededForNextLevel()
```
<br>

#### Get Player Nametag

`pl.getNameTag()`

- Return value: Nametag text
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.getNameTag();
```
```Lua
[Lua]
--For a `Player` object pl
pl.getNameTag()
```

<br>

#### Set Player Nametag Visible

`pl.setNameTagVisible(bool)`

- Parameters
  - bool : `Boolean`  
    Will Nametag be visible.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.setNameTagVisible(true);
```
```Lua
[Lua]
--For a `Player` object pl
pl.setNameTagVisible(true)
```

<br>

#### Send the Player to the Specified Server  

`pl.transServer(server,port)`

- Parameters: 
  - server : `String`  
    Target server IP / domain name

  - port : `Integer`  
    Target server port  
- Return value: Whether the transfer was successful or not.
- Return value type: `Boolean` 

```Javascript
[JS]
//For a `Player` object pl
pl.transServer("123.45.67.89",23333);
[Lua]

```

#### Crash the Player Client

`pl.crash()`

- Return value: Whether the execution was successful.
- Return value type: `Boolean` 

```Javascript
//For a `Player` object pl
[JS]
pl.crash();
```
```Lua
[Lua]
pl:crash()

```
#### Set Player Custom Sidebar

`pl.setSidebar(title,data[,sortOrder])`

- Parameters: 

  - title : `String`  
    Sidebar Title  
  - data : `Object<String-Integer>`  
    Sidebar Object Content Object  
    Each key-value pair in the object will be set as a row of the sidebar content.
  - sortOrder : `Number`  
    (Optional) Sort order for sidebar content. `0` In ascending order of scores, `1` in descending order by score. Default is `1`.

- Return value: Whether the setting was successful or not.

- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.setSidebar("title",{"aaaa":3,"bbb":12,"cc":7});
[Lua]

```

#### Remove Player Customization Sidebar 

`pl.removeSidebar()`

- Return value: Whether the removal was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.removeSidebar();
[Lua]

```

#### Sets the Custom Boss Health Bar That the Player Sees  

`pl.setBossBar(uid,title,percent,colour)`

- Parameters: 
  - uid : `Number`   
    Unique identifier, no conflicting duplicates! One uid for one line of bar
  - title : `String`  
    Custom Health Bar Title  
  - percent : `Integer`  
    The percentage of health in the boss bar, the valid range is 0~100. `0` is empty boss bar, `100` is full.
  - colour : `Integer`
     Health bar color (default is 2 (RED))
- Return value: Whether the setting was successful or not.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.setBossBar(1145141919,"Hello ~ ",80,0);
[Lua]

```

#### Remove the Player’s Custom Boss Health Bar  

`pl.removeBossBar(uid)`

- Parameters: 
  - uid : `Number`  
    Identifier, corresponding to setBossBar!
- Return value: Whether the removal was successful.
- Return value type: `Boolean`

```Javascript
[JS]
//For a `Player` object pl
pl.removeBossBar(1145141919);
[Lua]

```

#### Get the Player's NBT Object

`pl.getNbt()`

- Return value: Player's NBT object.
- Return value type: `NbtCompound`

<br>

#### Write to the Player's NBT Object

`pl.setNbt(nbt)`

- Parameters: 
  - nbt : `NbtCompound`  
    NBT objects
- Return value: Whether the write was successful or not.
- Return value type: `Boolean`

For more usage of NBT objects, please refer to [NBT Interface Documentation](/en_US/Development/NbtAPI/NBT.md)

<br>

#### Add a Tag for the Player

`pl.addTag(tag)`

- Parameters: 
  - tag: `String`  
    The tag string to be added.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Remove a Tag for a player

`pl.removeTag(tag)`

- Parameters: 
  - tag: `String`  
    The tag string to remove.
- Return value: Whether the removal was successful.
- Return value type: `Boolean`

<br>

#### Check if the Player Has a Tag 

`pl.hasTag(tag)`

- Parameters: 
  - tag: `String`  
    Tag string to check
- Return value: Whether the player has the tag.
- Return value type: `Boolean`

<br>

#### Get a List of All Tags Player the Player Has

`pl.getAllTags()`

- Return value: List of all tag strings of the player.
- Return value type: `Array<String,String,...>`

<br>

#### Get a List of the Player’s Abilities (From the Player’s NBT)

`pl.getAbilities()`

- Return value:  A list object of key-value pairs of all player ability information.
- Return value type: `object<String-Any Type>`

Each item in the list of key-value pairs looks like: `"mayfly": 1` etc.
<br>

#### Get a list of the player's Attributes (from the player's NBT)

`pl.getAttributes()`

- Return value: An array of all property objects of the player.
- Return value type: `Array<Object,Object,...>`

Each item in the array is a key-value pair list object `Object`, and the Attributes object contains several contents such as `Base` `Current` `DefaultMax` `DefaultMin` `Max` `Min` `Name` by default. Its content looks like:
```JSON
{
    "Base": 0, 
    "Current": 0, 
    "DefaultMax": 1024, 
    "DefaultMin": -1024, 
    "Max": 1024, 
    "Min": -1024, 
    "Name": "minecraft:luck"
}
```

(Here it's displayed visually using JSON format)

<br>

#### Get Player Sprint Status

`pl.isSprinting()`

- Return value: Player's sprint state
- Return value type: `Boolean`

<br>

#### Set Player Sprint State 

`pl.setSprinting(sprinting)`

- Parameters: 
  - sprinting : `Boolean`  
    Sprinting state.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

#### Sending packets to the player

`pl.sendPacket(packet)`  

- Parameters:
  - packet : `Packet`  
    Packet
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>