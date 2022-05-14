## 📜 Get System Information API

The following APIs provide interfaces to obtain necessary system information:

### Get Current Time String  

`system.getTimeStr()`

- Return value: The current time string, using the local time zone and 24-hour clock.
  For example: `2021-04-03 19:15:01`
- Return value type: `String`

<br>

### Get the Current Time Object

`system.getTimeObj()`

- Return value: The current time object `Object`)

- Return value type:  `Object<Integer,Integer,Integer,Integer,Integer,Integer,Integer>`

  -     For the returned time object tm, there are the following members:

  | Field | Meaning              | Data Type |
  | ----- | -------------------- | --------- |
  | tm.Y  | Year value (4 digits)| `Integer` |
  | tm.M  | Month value          | `Integer` |
  | tm.D  | Day value            | `Integer` |
  | tm.h  | Hour value (24-hour clock)|`Integer` |
  | tm.m  | Minute value         | `Integer` |
  | tm.s  | Seconds value        | `Integer` |
  | tm.ms | Millisecond value    | `Integer` |

<br>

### Randomly Generate a Guid String

`system.randomGuid()` 

- Return value: A randomly generated unique identifier GUID.
- Return value type:  `String`

<br>