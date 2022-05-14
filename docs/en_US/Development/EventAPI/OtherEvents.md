## 🔊 Other Events 

#### `"onScoreChanged"` - Player Scoreboard Change Event

- Listener function prototype
  `function(player,num,name,disName)`
- Parameters: 
  - player : `Player`  
    The player whose scoreboard values have changed.
  - num: `Integer`  
    The changed scoreboard value.
  - name : `String`  
    The name of the scoreboard scoring item.
  - disName : `String`  
    The display name of the scoreboard item.
- Intercept event: cannot be intercepted.

<br>

#### `"onTick"` - Tick Event

- Listener function prototype
  `function()`
- Parameters: 
  - None
- Intercept events: function returns `false`

<br>

#### `"onServerStarted"` - Server Start Event

- Listener function prototype
  `function()`
- Parameters: 
  - None
- Intercept event: cannot be intercepted.

<br>

#### `"onConsoleCmd"` - Server Command Event

- Listener function prototype
  `function(cmd)`
- Parameters: 
  - cmd : `String`  
    The console command being executed.

- Intercept events: function returns `false`

<br>

#### `"onConsoleOutput"` - Console Output Event

- Listener function prototype
  `function(cmd)`
- Parameters: 
  - cmd : `String`  
    The console output.

- Intercept events: function returns `false`