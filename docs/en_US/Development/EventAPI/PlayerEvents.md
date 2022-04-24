## 📜 Listen Event List

Here is a list of the various events that LLSE supports listening for.

Tip: You can obtain relevant information about the game objects obtained by listening, such as the coordinates of the block, the name of the entity, and so on.  
At the same time, the member functions of these objects can also be called.

> Notice! Some of the callback parameters passed in may sometimes be Null, which requires a good judgment check when writing code.

## 🏃‍♂️ Player Related Events

#### `"onPreJoin"` - Player Connection Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that is connecting to the server.
- Intercept events: function returns `false`

Note: Only some basic information of players can be obtained in this monitoring function, such as name, IP, xuid, etc. Because the player has not fully entered the server at this time.

<br>

#### `"onJoin"` - Player Join Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that enters the game.
- Intercept event: cannot be intercepted.

<br>

#### `"onLeft"` - Player Leave Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that left the game.

- Intercept event: cannot be intercepted.

<br>

#### `"onRespawn"` - Player Respawn Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player being respawned.
- Intercept event: cannot be intercepted.

<br>

#### `"onPlayerDie"` - Player Death Event

- Listener function prototype 
  `function(player,source)`
- Parameters: 
  - player : `Player`  
    The player that died.
  - source : `Entity`  
    The entity that dealt the damage that killed the player (may be `Null`).
  
- Intercept event: cannot be intercepted.

<br>

#### `"onPlayerCmd"` - Player Command Execution Event

- Listener function prototype 
  `function(player,cmd)`
- Parameters: 
  - player : `Player`  
    The player that executed the command.
  - cmd : `String`  
    The command that is being executed.

- Intercept events: function returns `false`

<br>

#### `"onChat"` - Player Chat Event

- Listener function prototype 
  `function(player,msg)`
- Parameters: 
  - player : `Player`  
    The player that sent the message.
  - msg : `String`  
    The message that was sent.

- Intercept events: function returns `false`

<br>

#### `"onChangeDim"` - Player Dimension Switch Event

- Listener function prototype 
  `function(player,dimid)`
- Parameters: 
  - player : `Player`  
    The player that switched dimensions.
  - dimid : `Integer`  
    Go to the dimension ID of the dimension, 0 is the main world, 1 is the nether, and 2 is the end.
- Intercept event: cannot be intercepted.

Reminder: This event does not fire when the player returns to the Overworld from the End via a return portal.

<br>

#### `"onJump"` - Player Jump Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that jumped.

- Intercept event: cannot be intercepted.

<br>

#### `"onSneak"` - Player Sneak Event

- Listener function prototype 
  `function(player,isSneaking)`
- Parameters: 
  - player : `Player`  
    The player that toggled their sneak state.
  - isSneaking : `Boolean`  
    `True` indicates that the player is sneaking,`False` indicates that the player is no longer sneaking.

- Intercept event: cannot be intercepted.

<br>

#### `"onAttackEntity"` - Player Attack Other Event

- Listener function prototype 
  `function(player,entity)`
- Parameters: 
  - player : `Player` 
    The player that attacked an entity.
  - entity : `Entity` 
    The entity that is being attacked.

- Intercept events: function returns `false`

<br>

#### `"onAttackBlock"` - Player Attack Block Event

- Listener function prototype 
  `function(player,block,item)`

- Parameters: 

  - player : `Player` 
    The player that attacked the block.
  - entity : `Block` 
    Attacked block.
  - item: `Item`
    Item used to attack the block.

- Intercept events: function returns `false`

<br>

#### `"onUseItem"` - Player Item Use Event 

- Listener function prototype 
  `function(player,item)`
- Parameters: 
  - player : `Player`  
    The player that used the item.
  - item : `Item`  
    The item that was used.
- Intercept events: function returns `false`

<br>

#### `"onUseItemOn"` - Player Use Item on Block Event (Right-Click)

- Listener function prototype 
  `function(player,item,block,side)`
- Parameters: 
  - player : `Player`  
    The player that used the item.
  - item : `Item`  
    The item being used.
  - block : `Block`  
    The block that was right-clicked.
  - side : `Number`  
    The face of the object that was clicked.  
    The faces: `0`-Down `1`-Up `2`-North `3`-South `4`-West `5`-East
- Intercept events: function returns `false`

Note: Win10 client right-clicking on the player will trigger this event on the server multiple times in a row.

<br>

#### `"onTakeItem"` - Player Pickup Item Event

- Listener function prototype 
  `function(player,entity,item)`
- Parameters: 

  - player : `Player`  
    The player that picked up the item.
  - entity: `Entity`  
    The dropped entity of the item about to be picked up.
  - item : `Item`  
    The item about to be picked up.

- Intercept events: function returns `false`

<br>

#### `"onDropItem"` - Player Drop Item Event

- Listener function prototype 
  `function(player,item)`
- Parameters: 
  - player : `Player`  
    The player that dropped the item.
  - item : `Item`  
    The item being dropped.

- Intercept events: function returns `false`

<br>

#### `"onEat"` - Player Eat Event

- Listener function prototype 
  `function(player,item)`
- Parameters: 
  - player : `Player`  
    The player that is eating.
  - item : `Item`  
    The item being eaten.
  
- Intercept events: function returns `false`

**Food** here is a broad concept of items, including conventional food, potions, milk, medicines and other items that can be ingested.

<br>

#### `"onConsumeTotem"` - Player Consume Totem Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that consumes the totem.
- Intercept events: function returns `false`
  - After intercepting here, the resurrection effect of the totem will still be triggered, but the totem will not be consumed.

<br>

#### `"onEffectAdded"` - Player Effect Added Event

- Listener function prototype 
  `function(player,effectName)`
- Parameters: 
  - player : `Player`  
    The player who gets the effect.
  - effectName : `String`  
    Obtained effect name: **minecraft:effect.EffectName**
  
- Intercept events: function returns `false`

<br>

#### `"onEffectRemoved"` - Player Effect Removed Event

- Listener function prototype 
  `function(player,effectName)`
- Parameters: 
  - player : `Player`  
    Player with the removed effect.
  - effectName : `String`   
    Removed effect name: **minecraft:effect.EffectName**
  
- Intercept events: function returns `false`

<br>

#### `"onEffectUpdated"` - Player Effect Updated Event

- Listener function prototype 
  `function(player,effectName)`
- Parameters: 
  - player : `Player`  
    The player that updated the effect.
  - effectName : `String`   
    Refreshed effect name: **minecraft:effect.EffectName**
  
- Intercept events: function returns `false`

<br>

#### `"onStartDestroyBlock"` - Player Start Breaking Block Effect

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player that is breaking the block.
  - block : `Block`  
    The block that is being destroyed.

- Intercept event: cannot be intercepted.

<br>

#### `"onDestroyBlock"` - Player Destroyed Block Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player that broke the block.
  - block : `Block`  
    The broken block.

- Intercept events: function returns `false`

<br>

#### `"onPlaceBlock"` - Player Places Block Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player that placed the block.
  - block : `Block`  
    The block that was placed.

- Intercept events: function returns `false`

<br>

#### `"onOpenContainer"` - Player Opens Container Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player that opened the container.
  - block : `Block`  
    The opened container block.
- Intercept events: function returns `false`

The **container** here is a broad concept of container, including boxes, buckets and other containers that can store items can trigger this event.

<br>

#### `"onCloseContainer"` - Player Closes Container Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player that closes the container.
  - block : `Block`  
    The container that was closed.
- Intercept events: function returns `false`

Due to the limitation of the monitoring function, the containers that currently support monitoring and closing are: chests (`minecraft:chest`), and wooden barrels (`minecraft:barrel`).

<br>

#### `"onInventoryChange"` - Player Inventory Change

- Listener function prototype 
  `function(player,slotNum,oldItem,newItem)`
- Parameters: 
  - player : `Player`  
    The player whose inventory changed.
  - slotNum : `Integer`  
    The slot position of the inventory operation.
  - oldItem : `Item`  
    The original item in the grid.
  - newItem : `Item`  
    The new item in the grid.
- Intercept event: cannot be intercepted.

Explanation of callback parameters:  
There are many different combinations of old item objects and new item objects, indicating different changes in the grid.

- Put item: the old item object is empty, the new item object is not empty.
- Take out the item: the old item object is not empty, the new item object is empty.
- Item Increase Stack: Old Item Object's `type` == new item object's `type`, old item's `count` < new item's `count`.
- Item Reduce Stack: Old Item Object's `type` == new item object's `type`, old item's `count` > new item's `count`.
Replacement Item: Old Item Object's `type` does not equal the new item's `type`, and neither item stack is empty.

<br>

#### `"onMove"` - Player Move Event

- Listener function prototype 
  `function(player,pos)`
- Parameters: 
  - player : `Player`  
    THe player that is moving.
  - pos : `FloatPos`  
    The current position of the player.
- Intercept event: cannot be intercepted.

Note: In the process of player movement, this event will be repeatedly triggered on the server side.

<br>

#### `"onChangeSprinting"` - Player Sprint State Change Event

- Listener function prototype 
  `function(player,sprinting)`
- Parameters: 
  - player : `Player`  
    The player that started or stopped sprinting.
  - sprinting : `Boolean`  
    Whether the player is now sprinting.
- Intercept event: cannot be intercepted.

Note: Player.setSprinting (false) can be executed in the next game tick to achieve the interception effect.

<br>

#### `"onSetArmor"` - Player Armor Change Event

- Listener function prototype 
  `function(player,slotNum,item)`
- Parameters: 
  - player : `Player`  
    Player object that changes armor.
  - slotNum : `Integer`  
    The armor column number, range from 0 to 3.
  - item : `Item`  
    The item in the armor slot.
- Intercept event: function returns `false`
- Warning: After interception, you will take off your original equipment when you enter the game.

<br>

#### `"onUseRespawnAnchor"` - Player Respawn Anchor Use Event

- Listener function prototype 
  `function(player,pos)`
- Parameters: 
  - player : `Player`  
    The player using the respawn anchor.
  - pos : `IntPos`  
    The position of the respawn anchor that was used.
- Intercept events: function returns `false`

<br>

#### `"onOpenContainerScreen"` - Player Opens Container GUI Event

- Listener function prototype 
  `function(player)`
- Parameters: 
  - player : `Player`  
    The player that opened the GUI.
- Intercept events: function returns `false`

Note: This event is so powerful that it can even intercept and open backpacks.

