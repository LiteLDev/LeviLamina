##  📱 设备信息对象 API

在LLSE中，使用「设备信息对象」来操作和获取某一个玩家使用的游戏设备的相关信息。

### 获取一个设备信息对象

#### 通过玩家获取

通过玩家对象的`.getDevice`成员函数，来获取一个玩家对应的**设备信息对象**    
详见 [玩家对象 API](zh_CN/Development/GameAPI/Player.md)      

>  注意：不要**长期保存**一个设备信息对象  
> 当设备对应的玩家退出游戏时，对应的对象将变得无效。因此，如果有长期操作某个对象的需要，请通过上述途径获取实时的设备信息对象

<br>


### 设备信息对象 - 属性

每一个设备信息对象都包含一些固定的对象属性。对于某个特定的实体对象`dv`，有以下这些属性

| 属性             | 含义                         | 类型      |
| ---------------- | ---------------------------- | --------- |
| dv.ip            | 玩家设备的IP地址             | `String`  |
| dv.avgPing       | 玩家的平均网络延迟时间（ms） | `Integer` |
| dv.avgPacketLoss | 玩家的平均网络丢包率（%）    | `Float`   |
| dv.os            | 玩家设备的操作系统类型       | `String`  |
| dv.clientId      | 玩家客户端的识别码ID         | `String`  |

这些对象属性都是只读的，无法被修改 

其中，操作系统类型属性返回一个字符串，记录了玩家设备的操作系统。可能返回的值如下表

| dv.os返回字符串 | 玩家设备的操作系统    |
| --------------- | --------------------- |
| `Android`       | 手机安卓Android       |
| `iOS`           | 手机苹果iOS           |
| `OSX`           | 电脑苹果OSX           |
| `Amazon`        | Amazon                |
| `GearVR`        | GearVR                |
| `Hololens`      | Hololens              |
| `Windows10`     | 电脑Windows10         |
| `Win32`         | 电脑Win32（教育版？） |
| `TVOS`          | TVOS                  |
| `PlayStation`   | 主机PlayStation       |
| `Nintendo`      | 主机Nintendo          |
| `Xbox`          | 主机Xbox              |
| `WindowsPhone`  | 手机Windows Phone     |
| `Unknown`       | 未知系统              |

