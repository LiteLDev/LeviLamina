## 💻 Server Settings API

The following APIs provide interfaces for customizing some server settings:

### Get the Version Number of the BDS Server

`mc.getBDSVersion()`

- Return value: The server version number string, formatted like this: `v1.17.10`
- Return value type: `String`

<br>

### Get BDS Server Protocol Version 

`mc.getServerProtocolVersion()`

- Return value: Server protocol version 
- Return value type: `Number`

<br>

### Set Server Motd String  

`mc.setMotd(motd)`

- Parameters: 
  - motd : `String`  
    The desired Motd string.  
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>

### Set the Maximum Number of Players on the Server  

`mc.setMaxPlayers(num)`

- Parameters: 
  - num : `Number`  
    The maximum number of players.  
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

<br>
