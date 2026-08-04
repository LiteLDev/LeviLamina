# 常见问题

## 服务端指令和客户端指令的区别

- 服务端指令是指由服务端注册的指令，可以被服务端自己以及其它处于同一服务端的玩家执行。
- 客户端指令完全由客户端自行处理，只能由客户端自身执行，其它玩家和服务端不知道客户端指令的存在。

当LeviLamina运行在**Bedrock Dedicated Server**（下文简称BDS）上时，模组只可注册服务端指令。  
当Minecraft处于**本地世界**时，本质上就是在Minecraft内部运行了一个BDS，这时既可以注册服务端指令也可以注册客户端指令。  
当Minecraft处于**多人游戏**中时，只能模组只能注册客户端指令。  
可以通过
```cpp
ll::command::CommandRegistrar::getInstance(false); // 服务端
ll::command::CommandRegistrar::getInstance(true); // 客户端
```
获取服务端和客户端的CommandRegistrar来注册指令。  

---

## 在Mod的`enable()`方法中注册指令，服务端（BDS）成功客户端失败

因为服务端（BDS）和客户端启用所有模组的时机是有区别的。  
- 服务端会在服务器初始化完成（世界已经加载完成）时启用所有模组
- 客户端会在游戏启动完成（主界面窗口出现）时启用所有模组
所以在客户端上，在enable()方法中注册指令不会成功，无论是客户端指令还是服务端指令，  
解决方案就是监听`ServerCommandRegisterEvent`然后再注册服务端指令，监听`ClientCommandRegisterEvent`然后再注册客户端指令。

---

## 模组调用MCAPI（比如`Player::disconnect()`）时，出现ACCESS VIOLATION异常

请检查调用MCAPI的代码是否运行在`MC_SERVER`线程上，绝大多数服务端侧的MCAPI只能在`MC_SERVER`线程中调用，这是Minecraft的游戏设计限制。
