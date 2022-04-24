## 📦 Block Related Events

#### `"onBlockInteracted"` - Block Player Interaction Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player object that interacts with the block.
  - block : `Block`  
    The block object being interacted with.

- Intercept events: function returns `false`

Only blocks that can be interacted with will trigger this event, such as barrels, beacons, cartography tables, grindstones, etc.
Intercept events have no effect on chests, shulker boxes, and workbenches.

<br>

#### `"onBlockChanged"` - Block Change Event

- Listener function prototype 
  `function(beforeBlock,afterBlock)`
- Parameters: 
  - beforeBlock : `Block`  
    The block object before the change.
  - afterBlock : `Block`  
    The block object after the change.

- Intercept events: function returns `false`
  <details>
    <summary>Intercepting this event requires attention to the following issues</summary>

         1. Block changes caused by some events cannot be intercepted, such as players digging and placing.
         2. For the changes caused by the relationship between blocks, some of them cannot be intercepted, such as explosions destroying surrounding blocks
         (Actually, the client still looks like there is a block there, but it's already a fake one)
         3. But for a block such as a torch that needs to be attached to other blocks, if the block is destroyed because of the attached block, the torch will not be destroyed.
         4. Some specific features can be tested by themselves.
    </details>

<br>

#### "onBlockExplode"` - Block Explosion Event

- Listener function prototype 
  `function(source,pos,radius,maxResistance,isDestroy,isFire)`
- Parameters: 
  - source : `Block`  
    The block object from which the explosion originated.
  - pos : `FloatPos`  
    The coordinates of the explosion.
  - radius : `Float`    
    Blast radius.
  - maxResistance : `Float`  
    Maximum Blast Resistance of the Block.
  - isDestroy : `Boolean`  
    If the explosion destroyed the block.
  - isFire : `Boolean`  
    If the explosion caught the block on fire.

- Intercept events: function returns `false`

<br>

#### `"onRespawnAnchorExplode"` - Respawn Anchor Explosion Event

- Listener function prototype 
  `function(pos,player)`
- Parameters: 
  - pos : `IntPos`  
    The coordinates of the respawn anchor where the explosion occured.
  - player : `Player`  
    Player attempting to use a respawn anchor.
- Intercept events: function returns `false`

<br>

#### `"onBlockExploded"` - Block Destroyed by Explosion Event

- Listener function prototype 
  `function(block,source)`
- Parameters: 
  - block : `Block`  
    The block object destroyed by the explosion.
  - source : `Entity`  
    The entity object from which the explosion originated.
- Intercept event: cannot be intercepted.

<br>

#### `"onFireSpread"` - Fire Spread Event

- Listener function prototype 
  `function(pos)`
- Parameters: 
  - pos : `IntPos`  
    The coordinates of the block the flame spread to.
- Intercept events: function returns `false`

<br>

#### `"onCmdBlockExecute"` - Command Block Command Execution Event

- Listener function prototype 
  `function(cmd,pos,isMinecart)`
- Parameters: 
  - cmd : `String`  
    The command executed.
  - pos : `IntPos`  
    The coordinates of the command block where the command was executed.
  - isMinecart : `bool`  
    Whether the command is executed by a command block minecart.
  
- Intercept events: function returns `false`

<br>

#### `"onContainerChange"` - Container Content Change Event

- Listener function prototype 
  `function(player,container,slotNum,oldItem,newItem)`
- Parameters: 
  - player : `Player`  
    The player who manipulated the container.
  - container : `Block`  
    he block object of the container being manipulated.
  - slotNum : `Integer`  
    The grid position of the operation. (SlotNumber)
  - oldItem : `Item`  
    The original item in the grid before the change.
  - newItem : `Item`  
    The new item in the grid after the change.
- Intercept event: cannot be intercepted.

The **container** here is a broad concept of container, including boxes, buckets and other containers that can store items can trigger this event.

Explanation of callback parameters: 
There are many different combinations of old item objects and new item objects, indicating different changes in the grid.

- Put item: the old item object is empty, the new item object is not empty.
- Take out the item: the old item object is not empty, the new item object is not empty.
- Item Stack Increase: Old Item Object's `type`== new item object's `type`, and the old item object's `count`< new item object's `count`.
- Item Stack Reduction: Old Item Object's `type` == new item object's `type`, and the old item's `count` > new item object's `count`
- Replacement Item: Old Item Object's typenot equal to the new item object `type`, and neither `item` object is empty.

<br>

#### `"onProjectileHitBlock"` - Block Hit by Projectile Event

- Listener function prototype 
  `function(block,source)`
- Parameters: 
  - block : `Block`  
    The block that was hit.
  - source : `Entity`  
    The projectile entities fired (arrows).
- Intercept event: cannot be intercepted.

<br>

#### `"onRedStoneUpdate"` - Redstone Update Event

- Listener function prototype 
  `function(block,level,isActive)`
- Parameters: 
  - block : `Block`  
    The block object where the redstone update occurred.
  - level : `Integer`  
    Updated redstone power levels (0-15).
  - isActive : `Boolean`  
    Indicates whether the redstone update is active or off.  
    - If `true`, the redstone became active.
    - if `false`, the redstone became inactive.
- Intercept events: function returns `false`

Currently, the types of blocks that can monitor redstone updates are: redstone wire, redstone torch, redstone repeater, redstone comparator.

<br>

#### `"onHopperSearchItem"` - Hopper (or Funnel Minecart) Item Absorption Detection Event

- Listener function prototype 
  `function(pos,isMinecart)`
- Parameters: 
  - pos : `FloatPos`  
    Where the hopper is located.
  - isMinecart : `bool`  
    Is it a hopper minecart?
- Intercept events: function returns `false`

Note: After placing the funnel, this event will be repeatedly triggered on the server side.
After you intercept the event, the hopper will not be able to absorb the item.

<br>

#### `"onHopperPushOut"` - Hopper Item Output Event

- Listener function prototype 
  `function(pos)`
- Parameters: 
  - pos : `FloatPos`  
    Where the funnel is.
- Intercept events: function returns `false`

<br>

#### `"onPistonTryPush"` - Piston Push Attempt Event

- Listener function prototype 
  `function(pistonPos,block)`
- Parameters: 
  - pistonPos : `IntPos`  
    Working piston coordinates.
  - block : `Block`  
    The block object that the piston attempted to push.
- Intercept events: function returns `false`

If the piston is blocked by a block and cannot be pushed, this event will loop continuously.

<br>

#### `"onPistonPush"` - Piston Push Event

- Listener function prototype 
  `function(pistonPos,block)`
- Parameters: 
  - pistonPos : `IntPos`  
    Working piston coordinates.
  - block : `Block`  
    The pushed block object.
- Intercept event: Unable to intercept.

Note: This event is different from the previous event, the last Try event is fired when the piston is trying to push, this event is fired after the push is complete.

<br>

#### `"onFarmLandDecay"` - Farmland Degrade Event

- Listener function prototype 
  `function(pos,entity)`
- Parameters: 
  - pos : `IntPos`  
    Coordinates of degraded arable land.
  - entity : `Entity`  
    Entity that degraded the arable land.
- Intercept events: function returns `false`

<br>

#### `"onUseFrameBlock"` - Manipulate Item Frame Event

- Listener function prototype 
  `function(player,block)`
- Parameters: 
  - player : `Player`  
    The player object that manipulates the item frame.
  - block : `Block`  
    The manipulated item frame block object.
- Intercept events: function returns `false`

NOTE: Actions include placing items, removing items, and rotating items.

<br>

#### `"onLiquidFlow"` - Liquid Flow Event

- Listener function prototype 
  `function(from,to)`
- Parameters: 
  - from : `Block`  
    Water source block object.
  - to : `IntPos`  
    The coordinates of the position where the liquid will flow.
- Intercept events: function returns `false`

