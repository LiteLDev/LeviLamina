## 💰 Economic System API

In many servers, the economic system is a very critical part.  
In order to solve various problems of traditional use of the scoreboard economic system, LLSE provides an interface to connect to the LLMoney economic system, which can communicate with other series of plugins. 

In addition to the capabilities of the traditional economic system, LLMoney also has additional capabilities such as querying the history of changes in the amount and operating the economy of offline players.  
LiteLoader is installed with the LLMoney plugin, so you can use this interface directly without additional installation. 

Note: In order to operate the wallets of offline players, the economic system interface uniformly uses Xuid as the player's uniform identifier, rather than the common identifiers used elsewhere. For a player pointer `pl`, you can use `pl.xuid` to get his xuid string and pass it in as a parameter. 

### Set the Player’s Deposit Amount

`money.set(xuid,money)`

- Parameters: 
  - xuid : `String`  
    The Xuid identifier of the player.
  - money : `Integer`  
    Amount of money being set.  
- Return value: Whether the setting is successful.
- Return value type: `Boolean`

<br>

### Get the Player’s Deposit Amount

`money.get(xuid)`

- Parameter: 
  - xuid : `String`  
    The Xuid identifier of the player to read.
- Return value: Player's bank value.
- Return value type: `Integer`

<br>

### Increase Player’s Deposit

`money.add(xuid,money)`

- Parameters: 
  - xuid : `String`  
    The Xuid identifier of the player.
  - money : `Integer`  
    The amount of money to add to the player's bank.  
- Return value: Whether the setting is successful.
- Return value type: `Boolean`

<br>

### Decrease the Player’s Deposit

`money.reduce(xuid,money)`

- Parameters: 
  - xuid : `String`  
    The Xuid identifier of the player.
  - money : `Integer`  
    The amount of money to take from the player.  
- Return value: Whether the setting is successful.
- Return value type: `Boolean`

<br>

### Make a Transfer

`money.trans(xuid1,xuid2,money[,note])`

- Parameters: 
  - xuid1 : `String`  
    The Xuid identifier of the paying player.
  - money : `Integer`  
    The amount of money being transferred.  
  - xuid2 : `String`  
    The Xuid identifier of the player who will receive the payment.
  - note : `String`  
    (Optional) Add some text to this transfer.
- Return value: Whether the transfer is successful.
- Return value type: `Boolean`

<br>

### Query Historical Payments

`money.getHistory(xuid,time)`

- Parameters: 
  - xuid : `String`  
    The Xuid identifier of the player.
  - time : `Integer`  
    Query all records within the last `time` seconds.
- Return value: An array of query result objects.
- Return value type: `Array<Object>`

Where the result is an array of record objects. for each `record` object record, with the following keys and corresponding values:

| Key             | Meaning of Value         | Data Type  |
| -------------- | -------------------------- | --------- |
| `record.from`  | Xuid of money sender   | `String`  |
| `record.to`    | Xuid of money receiver   | `String`  |
| `record.money` | Amount of money             | `Integer` |
| `record.time`  | Time when this transaction occurred | `String`  |
| `record.note`  | Additional notes for this transaction.       | `String`  |

The format of the time string is: YYYY-mm-dd hh:mm:ss

<br>

### Delete Billing History

`money.clearHistory(time)`

- Parameter: 
  - time : `Integer`  
    Delete all records within the last `time` seconds.
- Return value: Whether the deletion is successful.
- Return value type: `Boolean`

<br>