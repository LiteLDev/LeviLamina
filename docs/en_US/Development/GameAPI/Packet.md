##  🎓 Packet API

The following objects and APIs provide the basic BDS packet interface for scripts. 

(Please refer to Nukkit, PokcetMine, BDS Reverse to know the packet structure) If the client crashes, it is a packet structure error, not a bug.   

The documentation does not list the packet ID and its structure, please check it yourself.


## 目录
- 🔉 [Packet Object API](#🔉-Packet-Object-api)
- 🔌 [Binary stream object API](#🔌-Binary-stream-object-api)

<br>

## 🔉 Packet Object API

In LLSE, 「Packet Object」 is used to get information about packets.

### Get a packet object

#### Get from API

Call some **return packet object** function to get to the packet object given by BDS    
See [Binary Stream Objects](#🔌-binary-stream-object-api) for details 

<br>

### Packet Objects - Functions

Every packet object contains some member functions (member methods) that can be executed. For a particular entity object `pkt`, some operations can be performed on this packet by these functions

#### Get packet name

`pkt.getName()`

- Return value：packet name
-  Return value type： `String`

<br>

#### Get packet ID

`pkt.getId()`

- Return value：packet id
- Return value type： `Integer`

<br>

## 🔌 Binary Stream Object API

### Create a binary stream object

[Js] ```new BinaryStream()```

[Lua] ```BinaryStream()```

- Return value: Binary stream object
- Return value type： `BinaryStream`

### Binary Stream Object - Functions

Every binary stream object contains some member functions (member methods) that can be executed. For a particular entity object `bs`, some operations can be performed on this binary stream by these functions

#### Resetting binary streams

`bs.reset()`

- Return value: success or not
- Return value type： `Boolean`

<br>

#### Write to binary stream

`bs.writexxxx(value)`    

- Parameters：
  - value : `NULL`  
    Refer to the table below

- Return value：success or not
- Return value type： `Boolean`

| Available functions     |  Parameter Type                 |
| -------- | ------------------------ |
| writeBool | `Boolean`                 | 
| writeByte  |  `Integer`          | 
| writeDouble    |`Number`    | 
| writeFloat | `Float`     | 
| writeSignedBigEndianInt   |  `Number` | 
| writeSignedInt   |  `Number` | 
| writeSignedInt64   |  `Number` | 
| writeSignedShort   | `Integer` | 
| writeString   | `String`  | 
| writeUnsignedChar   |  `Integer` | 
| writeUnsignedInt   |  `Number` | 
| writeUnsignedInt64   |  `Number` | 
| writeUnsignedShort   |  `Integer` | 
| writeUnsignedVarInt   |  `Number` | 
| writeUnsignedVarInt64   |  `Number` |
| writeVarInt   |  `Number` |
| writeVarInt64   |  `Number`  |
| writeVec3   |  `FloatPos`  |
| writeCompountTag   |  `NbtCompound`  |

<br>

#### Building packet from binary stream

`bs.createPacket(pktid)`    

- Parameters：
  - pktid : `Integer`  
    Packet ID

- Return value：Packet object
- Return value type： `Packet`

<br>

### Dome Code

Send TextPacket packets to a player
```JavaScript
mc.listen("onChat",function(pl,msg){
    const bs = new BinaryStream()
    var text = "LLSE Packet Test"
    bs.reserve(text.length + 8)
    bs.writeUnsignedChar(0)
    bs.writeBool(true)
    bs.writeString(text)
    bs.writeString("")
    bs.writeString("")
    var pkt = bs.createPacket(9)
    pl.sendPacket(pkt)
})
```