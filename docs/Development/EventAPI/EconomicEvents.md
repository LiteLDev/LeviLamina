## 💰 Economic System Events

Here are the economic change events related to the LLSE built-in economic system:

#### `"beforeMoneyAdd"` - Pre-Money Adding Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being given.
- Intercept events: Function returns `false`

<br>

#### `"onMoneyAdd"` - Money Adding Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being given.

<br>

#### `"beforeMoneyReduce"` - Pre-Money Reduction Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being taken.
- Intercept events: Function returns `false`

<br>

#### `"onMoneyReduce"` - Money Reduction Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being taken.

<br>

#### `"beforeMoneyTrans"` - Pre-Player Money Transfer Event

- Listener function prototype 
  `function(from,to,money)`
- Parameters: 
  - from : `String`  
    The Xuid of the player initating the transfer.
  - to : `String`  
    The Xuid of the player accepting the transfer.
  - money : `Integer`  
    The amount of money being transferred.
- Intercept events: Function returns `false`

<br>

#### `"onMoneyTrans"` - Player Money Transfer Event

- Listener function prototype 
  `function(from,to,money)`
- Parameters: 
  - from : `String`  
    The Xuid of the player initating the transfer.
  - to : `String`  
    The Xuid of the player accepting the transfer.
  - money : `Integer`  
    The amount of money being transferred.

<br>

#### `"beforeMoneySet"` - Pre-Player Money Setting Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being set.
- Intercept events: Function returns `false`

<br>

#### `"onMoneySet"` - Player Money Setting Event

- Listener function prototype 
  `function(xuid,money)`
- Parameters: 
  - xuid : `String`  
    The Xuid of the player whose amount of money changed.
  - money : `Integer`  
    The amount of money being set.

<br>