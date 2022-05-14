## 📝 Scoreboard API

In LLSE, use the "score object" to operate and obtain a specific scoring variable, and provide many other common interfaces for manipulating the scoreboard.

MC uses **score items** as the core of the scoreboard system, each of which has a name and can be used to track specific players, entities or even string targets. In the scoring item, the corresponding score of each tracking target is recorded.

### Get a Scoring Item Object

Obtain a scoring item object through the following interface and perform related operations:

#### Create a New Scoring Item

`mc.newScoreObjective(name,displayName)`

- Parameters: 
  -  name : `String`  
     Scoring item name.  
  -  displayName : `String`  
     Scoring item display name.  
- Return type: The newly created scoring item object.
- Return value type: `Objective`
  - If it returns `Null`, it means the creation failed.

This interface acts like a command  `/scoreboard objectives add <name> <displayName> dummy`

<br>

#### Get an Existing Scoring Item

`mc.getScoreObjective(name)`

- Parameters: 
  - name : `String`  
    The name of the score to get.
- Return type: The corresponding scoring item object.
- Return value type: `Objective`
  - If `Null` is returned, it means the scoring item does not exist.

<br>

#### Get All Scoring Items

`mc.getAllScoreObjectives()`

- Return type: All score object objects recorded by the scoreboard system.
- Return value type: `Array<Objective,Objective,...>`

This interface acts like a command  `/scoreboard objectives list`

<br>

#### Get a Scoring Item That Is Displayed

`mc.getDisplayObjective(slot)`

- Parameters: 
  - slot : `String`   
    Display slot name to be queried, which can be `"sidebar"`/`"belowname"`/`"list"`
- Return type: Scoring items being displayed in the `slot` slot.
- Return value type: `Objective`
  - If it returns `Null`, it means that the corresponding slot does not display the scoring item.

<br>


### Scoring Object - Properties

Each scoring item object contains some fixed object properties. for a specific scoring item object `ob`, has the following properties:

| Attributes     | Meaning          | Data Type |
| -------------- | ---------------- | -------- |
| ob.name        | Scoring item name| `String` |
| ob.displayName | Display name of the scoring item | `String` |

These object properties are read-only and cannot be modified.

<br>

### Scoring Item Object - Function

Each scoring item object contains some member functions (member methods) that can be executed. for a specific scoring item object `ob`, you can perform some operations on this scoring item through the following functions:

#### Get the Score for a Tracked Goal

`ob.getScore(target)`

- Parameters: 
  - target  : `Player` / `String`  
    The tracking target to be queried, which can be passed in a player object or any string.
- Return type: The target/player's score for this scoring item.
- Return value type: `Integer`

<br>

#### Modify the Score of a Goal

Set score: `ob.setScore(target,score)`  
Increase score: `ob.addScore(target,score)`  
Reduce score: `ob.reduceScore(target,score)`

- Parameters: 
  - target : `Player` / `String`  
    The target tracked by the scoring item, which can be passed in a player object or an arbitrary string.
  - score : `Integer`  
    Score to set/increase/decrease.
- Return type: The score of the target after the set/increase/decrease operation.
- Return value type: `Integer`
  - If `Null` is returned, the operation failed.

<br>

#### Stop Tracking a Target 

`ob.deleteScore(target)`

- Parameters: 
  - target : `Player` / `String`  
    The target tracked by the scoring item, which can be passed in a player object or an arbitrary string.
- Return type: Whether the target was deleted successfully.
- Return value type: `Boolean`

Stop tracking will directly delete the value of the goal's scoring item. You need to create it again if you need to access it again.

<br>

#### Set the Display State of the Scoring Item

`ob.setDisplay(slot[,sortOrder=0])`

- Parameters: 
  - slot : `String`   
    Displays the slot name string, which can be `"sidebar"`/`"belowname"`/`"list"`
  - sortOrder : `Integer`  
    (Optional parameter) the sorting method, which can be `0` (ascending) or `1`(descending order), the default is `0`
- Return type: Whether setting the display was successful.
- Return value type: `Boolean`

<br>

### Other Scoreboard APIs

The following APIs provide more APIs for operating the scoreboard system:

#### Get the Score of a Player’s Scoring Item (Convenience Function)

`pl.getScore(name)`

- Parameters: 
  - name : `String`  
    Scoring item name.  
- Return type: The numerical value on the scoreboard.
- Return value type: `Integer`

Before using, you must ensure that the corresponding scoring item already exists.

```Javascript
[JS]
//For a player object pl: 
log("You have money:",pl.getScore("money"));
[Lua]

```

#### Modify the Score of a Player’s Scoring Item (Convenience Function)

Set score: `pl.setScore(name,value)`  
Increase score:  `pl.addScore(name,value)`  
Reduce score: `pl.reduceScore(name,value)`

- Parameters: 
  - name : `String`  
    Scoring item name  
  - value : `Integer`  
    The value to set/increase/decrease  
- Return type: Whether the setting was successful.
- Return value type: `Boolean`

Before using, you must ensure that the corresponding scoring item already exists.

```Javascript
[JS]
//For a player object pl: 
pl.setScore("money",10000);
pl.addScore("money",100);
pl.reduceScore("money",50);
[Lua]

```

#### Player Stops Tracking Scoring Items (Convenience Function) 

`pl.deleteScore(name)`

- Parameters: 
  - name : `String`  
    Scoring item name   
- Return type: Whether the removal was successful.
- Return value type: `Boolean`

Before using, you must ensure that the corresponding scoring item already exists.

```Javascript
[JS]
//For a player object pl: 
pl.deleteScore("what");
[Lua]

```

#### Remove an Existing Scoring Item

`mc.removeScoreObjective(name)`

- Parameters: 
  -  name : `String`  
     Scoring item name   
- Return type: Whether the removal was successful.
- Return value type: `Boolean`

This interface acts like a command `/scoreboard objectives remove <name>`

<br>

#### Stop Scoring Items From Showing

`mc.clearDisplayObjective(slot)`

- Parameters: 
  - slot : `String`   
    Displays the slot name string, which can be `"sidebar"`/`"belowname"`/`"list"`
- Return type: Whether the display objective was cleared successfully.
- Return value type: `Boolean`

<br>