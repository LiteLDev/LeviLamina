##  📱 Device Information Object API

In LLSE, the "device information object" is used to manipulate and obtain information about the game device used by a player.

### Get a Device Info Object

#### Acquired by the Player

Get the **device information object** corresponding to a player through the `.getDevice` member function of the player object
See [Player Object API](/en_US/Development/GameAPI/Player.md)      

> Note: Do not save a device information object **long-term.**
> When the player corresponding to the device exits the game, the corresponding object will become invalid. Therefore, if there is a need to operate an object for a long time, please obtain the real-time device information object through the above methods.

<br>


### Device Information Object - Properties

Each device information object contains some fixed object properties. for a specific entity object `dv`, has the following properties:

| Attributes       | Meaning                      | Data Types |
| ---------------- | ---------------------------- | --------- |
| dv.ip            | The IP address of the player's device | `String`  |
| dv.avgPing       | Average network latency for players (ms) | `Integer` |
| dv.avgPacketLoss | Player's average network packet loss rate (%) | `Float`   |
| dv.os            | The OS type of the player's device | `String`  |
| dv.clientId      | ID of the player client | `String`  |

These object properties are read-only and cannot be modified 

Among them, the operating system type attribute returns a string that records the operating system of the player's device. The possible return values ​​are as follows:

| dv.os           | Device Operating System|
| --------------- | --------------------- |
| `Android`       | Android (Mobile phone)       |
| `iOS`           | Apple iOS (Mobile phone)          |
| `OSX`           | Apple OSX (Computer)          |
| `Amazon`        | Amazon                |
| `GearVR`        | GearVR                |
| `Hololens`      | Hololens              |
| `Windows10`     | Windows 10 (Computer)         |
| `Win32`         | Win32 (Education Edition?) (Computer)  |
| `TVOS`          | TVOS                  |
| `PlayStation`   | PlayStation Host       |
| `Nintendo`      | Nintendo Host         |
| `Xbox`          | Xbox Host             |
| `WindowsPhone`  | Windows Phone     |
| `Unknown`       | Unknown System              |

