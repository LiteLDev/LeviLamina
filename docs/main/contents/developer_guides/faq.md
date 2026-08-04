# Frequently Asked Questions

## Difference Between Server Commands and Client Commands

- Server commands are commands registered by the server. They can be executed by the server itself as well as by other players connected to the same server.
- Client commands are handled entirely by the client itself. They can only be executed by the client that registered them; other players and the server are unaware of the existence of client commands.

When LeviLamina runs on **Bedrock Dedicated Server** (hereinafter referred to as BDS), mods can only register server commands.  
When Minecraft is in a **local world**, it is essentially running a BDS instance internally. In this case, mods can register both server commands and client commands.  
When Minecraft is in **multiplayer mode**, mods can only register client commands.  

You can obtain the server-side and client-side `CommandRegistrar` instances for command registration through:

```cpp
ll::command::CommandRegistrar::getInstance(false); // Server
ll::command::CommandRegistrar::getInstance(true);  // Client
```

---

## Commands Registered in the Mod's `enable()` Method Work on the Server (BDS) but Fail on the Client

This happens because the timing of enabling all mods differs between the server (BDS) and the client.

* The server enables all mods after server initialization is complete (when the world has already been loaded).
* The client enables all mods after the game startup process is complete (when the main menu window appears).

Therefore, on the client side, registering commands in the `enable()` method will not succeed, regardless of whether they are client commands or server commands.

The solution is to listen for `ServerCommandRegisterEvent` and register server commands there, and listen for `ClientCommandRegisterEvent` and register client commands there.

---

## ACCESS VIOLATION Exception When a Mod Calls MCAPI (e.g. `Player::disconnect()`)

Please check whether the code calling MCAPI is running on the `MC_SERVER` thread. Most server-side MCAPIs can only be called from the `MC_SERVER` thread. This is a limitation imposed by Minecraft's game design.
