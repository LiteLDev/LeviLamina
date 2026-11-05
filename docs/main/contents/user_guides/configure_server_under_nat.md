# Configure the server behind NAT

!!! warning
    This guide only applies when `transport=nethernet` in `server.properties`. If you are still using `RakNet`, you do not need to read it.

## Background

In `server.properties`, two options configure NetherNet: one for its signaling service and one for the UDP port actually used for client communication. They are `server-port` and `server-udp-ports`.

In short, the server creates an HTTP server on the port specified by `server-port`, so you need to allow TCP on that port in your firewall. It listens for UDP on the port or ports specified by `server-udp-ports`, so you need to allow UDP on that port or those ports in your firewall.

!!! tip
    Since 26.60, `server-udp-ports` accepts either a single port or multiple ports, and defaults to listening on port 19132.  
    26.51 servers support only multiple ports, but LeviLamina also provides single-port support, which is enabled by default and listens on the same port as `server-port`. It can be disabled in LeviLamina's configuration file.

## Configure port forwarding behind NAT with a public IP

Because `server-port` listens on TCP and `server-udp-ports` listens on UDP, you can set them to the same port, as the defaults in `server.properties` do. However, this guide is about configuring a server behind NAT, where the default configuration does not work, so you need to edit the configuration manually:

1. Open `server.properties` in the server directory with a text editor.
2. Find `server-port` and change it to a port your provider allows you to use, for example 11451.
3. Find `server-udp-ports` and change it to a port your provider allows you to use, for example 11451.
4. Configure port forwarding in your provider's control panel, mapping the internal port on the host (for example 11451) to the external port (for example 11451). Remember to forward both TCP and UDP.
5. Open the client and try to connect to the server.

!!! warning
    Normally, a server with LeviLamina installed obtains its public IP through the built-in STUN servers. If that fails, the client may be unable to connect to the server, with error code `Door`.  
    In that case, change `server-udp-ports` to the following format:  
    `server-udp-ports=<server public IP>:<port your provider allows you to use>:<local port>`  
    For example: `server-udp-ports=11.45.1.4:11451:11451`  
    Then disable `netherNetPatch` in `mods/LeviLamina/config/Config.json`:
    ```json
    "netherNetPatch": {
         "enable": false, // change this from true to false
         "stunServers": [
             "stun:stun.l.google.com:19302",
             "stun:stun.miwifi.com:3478"
         ]
     }
    ```

## Configure port forwarding through tunneling software such as frp behind NAT without a public IP

1. Open `server.properties` in the server directory with a text editor.
2. Find `server-port` and change it to a port your tunneling software allows you to use, for example 11451.
3. Find `server-udp-ports` and change it to the following format:  
    `server-udp-ports=<exit node IP>:<port your tunneling software allows you to use>:<local port>`  
    For example: `server-udp-ports=11.45.1.4:11451:11451`
4. Configure port forwarding in your tunneling software's control panel, mapping the internal port on the host (for example 11451) to the external port (for example 11451). Remember to forward both TCP and UDP.
5. Disable `netherNetPatch` in `mods/LeviLamina/config/Config.json`:
    ```json
    "netherNetPatch": {
         "enable": false, // change this from true to false
         "stunServers": [
             "stun:stun.l.google.com:19302",
             "stun:stun.miwifi.com:3478"
         ]
     }
    ```
6. Open the client and try to connect to the server.
