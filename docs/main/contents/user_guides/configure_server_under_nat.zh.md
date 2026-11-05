# 在NAT网络环境下配置服务器

!!! warning
    此教程仅适用于`server.properties`中`transport=nethernet`的情况，如果你仍然在使用`RakNet`，你就不需要阅读这篇教程

## 前言

在`server.properties`文件中，有两个配置项是分别用于配置NetherNet的Signaling Service和真正用于客户端通信的UDP端口  
它们分别是`server-port`和`server-udp-ports`

简单来说服务端会在`server-port`指定的端口上创建一个http服务器，所以你需要在防火墙中给该端口开放TCP协议  
服务端会以UDP协议监听`server-udp-ports`指定的端口，所以你需要在防火墙中给该端口/这些端口开放UDP协议

!!! tip
    26.60之后，`server-udp-ports`可以是单个端口也可以是多个端口，默认为监听19132端口  
    26.51的服务端仅支持多端口，但LeviLamina也提供了单端口的支持，默认启用，与`server-port`监听同一个端口，可以在LeviLamina的配置文件中关闭

## 在有公网IP的NAT环境下配置端口映射

因为`server-port`和`server-udp-ports`一个监听TCP一个监听UDP，所以你可以把它们设置在同一个端口上，就像`server.properties`里的默认值一样  
但是由于这篇教程讲的是在NAT网络环境下配置服务器，所以默认的配置是不可用的，我们需要手动修改配置：

1. 用文本编辑器打开服务端目录下的`server.properties`文件
2. 找到`server-port`，把它修改成你的服务商允许你使用的端口，例如11451
3. 找到`server-udp-ports`，也把它修改成你的服务商允许你使用的端口，例如11451
4. 在服务商的管理面板中配置端口映射，将主机内部的端口(例如：11451)映射到外部的端口(例如：11451)，记得同时映射TCP和UDP协议
5. 打开客户端，尝试连接服务器

!!! warning
    在一般情况下，安装了LeviLamina的服务端会通过内置的STUN服务器来获取服务端的公网IP，如果获取失败，则可能出现客户端无法正常连接到服务端的情况，错误代码为：`Door`
    这时候，你需要把`server-udp-ports`修改成以下格式：  
    `server-udp-ports=服务器的公网IP:你的服务商允许你使用的端口:本机端口`  
    例如: `server-udp-ports=11.45.1.4:11451:11451`  
    然后在`mods/LeviLamina/config/Config.json`中，把`netherNetPatch`关闭：
    ```json
    "netherNetPatch": {
         "enable": false, // 将此处从true改为false
         "stunServers": [
             "stun:stun.l.google.com:19302",
             "stun:stun.miwifi.com:3478"
         ]
     }
    ```

## 在没有公网IP的NAT环境下通过frp等内网穿透软件配置端口映射

1. 用文本编辑器打开服务端目录下的`server.properties`文件
2. 找到`server-port`，把它修改成你的内网穿透软件允许你使用的端口，例如11451
3. 找到`server-udp-ports`，把它修改成以下格式：  
   `server-udp-ports=出口节点的IP:你的内网穿透软件允许你使用的端口:本机端口`  
   例如: `server-udp-ports=11.45.1.4:11451:11451`
4. 在你的内网穿透软件的管理面板中配置端口映射，将主机内部的端口(例如：11451)映射到外部的端口(例如：11451)，记得同时映射TCP和UDP协议
5. 在`mods/LeviLamina/config/Config.json`中，把`netherNetPatch`关闭：
    ```json
    "netherNetPatch": {
         "enable": false, // 将此处从true改为false
         "stunServers": [
             "stun:stun.l.google.com:19302",
             "stun:stun.miwifi.com:3478"
         ]
     }
    ```
6. 打开客户端，尝试连接服务器
