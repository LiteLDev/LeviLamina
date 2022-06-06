## 🏃‍♂️ 玩家对象 API

在LLSE中，使用「玩家对象」来操作和获取某一个玩家的相关信息。

### 获取一个玩家对象

#### 从事件或API获取

通过注册**事件监听**函数，获取到BDS给出的与相关事件有关的玩家对象  
详见 [事件监听文档 - EventAPI](zh_CN/Development/EventAPI/Listen.md)

#### 从现有玩家获取

通过**玩家名**或者**xuid**手动生成玩家对象  
通过此函数来手动生成对象，注意，你要获取的玩家必须是在线状态，否则会生成失败

`mc.getPlayer(info)`

- 参数：
  - info : `String`  
    玩家的名字或者Xuid
- 返回值：生成的玩家对象 
- 返回值类型：`Player`
  - 如返回值为 `Null` 则表示获取玩家失败

#### 获取所有在线玩家

此函数会返回一个玩家对象的数组，其中每个对象都对应了一个服务器中的玩家

`mc.getOnlinePlayers()`

- 返回值：在线的玩家对象列表
- 返回值类型：`Array<Player,Player,...>`

> 注意：不要**长期保存**一个玩家对象  
> 当玩家退出服务器时，对应的玩家对象将变得无效。因此，如果有长期操作某个玩家的需要，请通过上述途径获取实时的玩家对象

<br>

### 玩家对象 - 属性

每一个玩家对象都包含一些固定的对象属性。对于某个特定的玩家对象`pl`，有以下这些属性

| 属性         | 含义                        | 类型             |
| ------------ | --------------------------- | ---------------- |
| pl.name      | 玩家名                      | `String`         |
| pl.pos       | 玩家所在坐标                | `FloatPos`       |
| pl.blockPos  | 玩家所在的方块坐标          | `IntPos`         |
| pl.realName  | 玩家的真实名字              | `String`         |
| pl.xuid      | 玩家Xuid字符串              | `String`         |
| pl.uuid      | 玩家Uuid字符串              | `String`         |
| pl.permLevel | 玩家的操作权限等级（0 - 4） | `Integer`        |
| pl.gameMode  | 玩家的游戏模式（0 - 3）     | `Integer`        |
| pl.maxHealth | 玩家最大生命值              | `Integer`        |
| pl.health    | 玩家当前生命值              | `Integer`        |
| pl.inAir     | 玩家当前是否悬空            | `Boolean`        |
| pl.inWater   | 玩家当前是否在水中          | `Boolean`        |
| pl.sneaking  | 玩家当前是否正在潜行        | `Boolean`        |
| pl.speed     | 玩家当前速度                | `Float`          |
| pl.direction | 玩家当前朝向                | `DirectionAngle` |
| pl.uniqueId  | 玩家（实体的）唯一标识符    | `String`         |
| pl.langCode  | 玩家设置的语言的标识符(形如zh_CN) | `String`    |

这些对象属性都是只读的，无法被修改。其中：

- **玩家游戏模式** 属性的取值为：`0` 代表生存模式，`1` 代表创造模式，`2` 代表冒险模式，`3` 代表旁观者模式 
- **玩家真实名字** 属性储存的字符串可以被认为是可靠的，他们不会被改名而变动  
- **玩家设备IP地址** 属性储存了玩家的设备IP以及端口号，格式类似`12.34.567.89:1111`  
- **玩家当前朝向** 属性的详细解释见  [基础游戏接口文档](zh_CN/Development/GameAPI/Basic.md)
- **操作权限等级** 属性的对照表如下：

| 操作权限等级 | 对应操作权限    |
| ------------ | --------------- |
| 0            | 普通成员权限    |
| 1            | OP权限          |
| 4            | OP + 控制台权限 |

<br>

### 玩家对象 - 函数

每一个玩家对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的玩家对象`pl`，可以通过以下这些函数对这个玩家进行一些操作

#### 判断玩家是否为OP  

`pl.isOP()`

- 返回值：玩家是否为OP
- 返回值类型：`Boolean`  

```clike
[Js]
//对于一个玩家对象pl
var open = pl.isOP();
[Lua]

```

#### 断开玩家连接  

`pl.kick([msg])`  
`pl.disconnect([msg])`

- 参数：
  - msg : `String`  
    （可选参数）被踢出玩家出显示的断开原因。  
    如果不传入，默认为“正在从服务器断开连接”  
- 返回值：是否成功断开连接
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.kick();
[Lua]
pl:kick()
```

#### 发送一个文本消息给玩家  

`pl.tell(msg[,type])`  
`pl.sendText(msg[,type])`

- 参数：

  - msg : `String`  
    待发送的文本  

  - type : `Integer`  
    （可选参数）发送的文本消息类型，默认为0  

    | type参数 | 消息类型                |
    | -------- | ----------------------- |
    | 0        | 普通消息（Raw）         |
    | 1        | 聊天消息（Chat）        |
    | 4        | 音乐盒消息（Popup）     |
    | 5        | 物品栏上方的消息（Tip） |
    | 9        | Json格式消息（Json）    |

- 返回值：是否成功发送

- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.tell("Welcome back ~ ",5);
[Lua]

```

#### 广播一个文本消息给所有玩家  

`mc.broadcast(msg[,type])`

- 参数：

  - msg : `String`  
    待发送的文本  

  - type : `Integer`  
    （可选参数）发送的文本消息类型，默认为0  

    | type参数 | 消息类型                |
    | -------- | ----------------------- |
    | 0        | 普通消息（Raw）         |
    | 1        | 聊天消息（Chat）        |
    | 5        | 物品栏上方的消息（Tip） |
    | 9        | Json格式消息（Json）    |

- 返回值：是否成功发送

- 返回值类型：`Boolean`

```clike
[Js]
mc.broadcast("Hello everyone ~ ");
[Lua]

```

#### 以某个玩家身份执行一条命令 

`pl.runcmd(cmd)`

- 参数：
  - cmd : `String`  
    待执行的命令  
- 返回值：是否执行成功
- 返回值类型： `Boolean`   

```clike
[Js]
//对于一个玩家对象pl
var open = pl.runcmd("tp ~ ~+50 ~");
[Lua]

```

#### 以某个玩家身份说话

`pl.talkAs(text)`

- 参数：
  - text : `String`  
    模拟说话内容 
- 返回值：是否执行成功
- 返回值类型： `Boolean`   


#### 以某个玩家身份向某玩家说话

`pl.talkAs(target,text)`

- 参数：
  - target : `Player`  
    模拟说话对象 
  - text : `String`  
    模拟说话内容 
- 返回值：是否执行成功
- 返回值类型： `Boolean`   

<br>

#### 传送玩家至指定位置  

`pl.teleport(pos)`  
`pl.teleport(x,y,z,dimid)`

- 参数：
  - pos :`IntPos `/ `FloatPos`  
    目标位置坐标 （或者使用x, y, z, dimid来确定玩家位置）
- 返回值：是否成功传送
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl，一个坐标对象pos
pl.teleport(pos);
[Lua]

```

#### 杀死玩家  

`pl.kill()`

- 返回值：是否成功执行
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.kill();
[Lua]

```

#### 对玩家造成伤害

`pl.hurt(damage)`

- 参数：
  - damage : `Integer`  
    对玩家造成的伤害数值
- 返回值：是否造成伤害
- 返回值类型：`Boolean`

注意，此处造成的伤害为真实伤害，无法被盔甲等保护装备减免

<br>

#### 使指定玩家着火

`pl.setOnFire(time)`

- 参数：
  - time : `Integer`  
    着火时长，单位秒
- 返回值：是否成功着火
- 返回值类型：`Boolean`

<br>

#### 重命名玩家  

`pl.rename(newname)`

- 参数：
  - newname : `String`  
    玩家的新名字  
- 返回值：是否重命名成功
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.rename("newname");
[Lua]

```

#### 获取玩家当前站立所在的方块

`pl.getBlockStandingOn()`

- 返回值：当前站立在的方块对象
- 返回值类型：`Block`

<br>

#### 获取玩家对应的设备信息对象

`pl.getDevice()`

- 返回值：玩家对应的设备信息对象
- 返回值类型：`Device`

设备信息对象储存了与玩家设备有关的某些信息，如设备IP地址、设备类型、网络延迟等信息。  
关于设备信息对象的其他信息请参考 [设备信息对象 API](zh_CN/Development/GameAPI/Device.md)

<br>

#### 获取玩家主手中的物品对象

`pl.getHand()`

- 返回值：玩家主手中的物品对象
- 返回值类型：`Item`

此处获取的物品对象为引用。也就是说，修改此处返回的物品对象，或使用其API，就相当于直接操作玩家主手中对应的物品

<br>

#### 获取玩家副手的物品对象

`pl.getOffHand()`

- 返回值：玩家副手中的物品对象
- 返回值类型：`Item`

此处获取的物品对象为引用。也就是说，修改此处返回的物品对象，或使用其API，就相当于直接操作玩家副手中对应的物品

<br>

#### 获取玩家物品栏的容器对象  

`pl.getInventory()`

- 返回值：玩家物品栏对应的容器对象
- 返回值类型：`Container`

关于容器对象的更多使用，请参考 [容器对象 API文档](zh_CN/Development/GameAPI/Container.md)

<br>

#### 获取玩家盔甲栏的容器对象  

`pl.getArmor()`

- 返回值：玩家盔甲栏对应的容器对象
- 返回值类型：`Container`

关于容器对象的更多使用，请参考 [容器对象 API文档](zh_CN/Development/GameAPI/Container.md)

<br>

#### 获取玩家末影箱的容器对象  

`pl.getEnderChest()`

- 返回值：玩家末影箱对应的容器对象
- 返回值类型：`Container`

关于容器对象的更多使用，请参考 [容器对象 API文档](zh_CN/Development/GameAPI/Container.md)

<br>

#### 获取玩家的重生坐标  

`pl.getRespawnPosition()`

- 返回值：重生点坐标
- 返回值类型：`IntPos`

<br>

#### 修改玩家的重生坐标  

`mc.setRespawnPosition(pos)`  
`mc.setRespawnPosition(x,y,z,dimid)`

- 参数：
  - pos : `IntPos`  
    重生坐标（或者使用x, y, z, dimid来确定重生位置）
- 返回值：是否成功修改
- 返回值类型：`Boolean`

<br>

#### 给予玩家一个物品

`pl.giveItem(item)`

- 参数：
  - iten : `Item`  
    给予的物品对象
- 返回值：是否成功给予
- 返回值类型：`Boolean`

如果玩家物品栏已满，将返回失败

<br>

#### 清除玩家背包中所有指定类型的物品

`pl.clearItem(type)`

- 参数：
  - type : `String`  
    要清除的物品对象类型名
- 返回值：清除的物品个数
- 返回值类型：`Integer`

将玩家物品栏、主手、副手、盔甲栏中所有物品的type属性与此字符串进行比较  
如果相等，则清除此物品

<br>

#### 刷新玩家物品栏、盔甲栏

`pl.refreshItems()`

- 返回值：是否成功刷新
- 返回值类型：`Boolean`

在修改玩家物品之后，为了促使客户端生效，需要刷新玩家所有的物品

<br>

#### 刷新玩家加载的所有区块

`pl.refreshChunks()`

- 返回值：是否成功刷新
- 返回值类型：`Boolean`

<br>

#### 修改玩家操作权限  

`pl.setPermLevel(level)`

- 参数：

  - level : `Integer`  
    目标操作权限等级  

    | 操作权限等级 | 对应操作权限    |
    | ------------ | --------------- |
    | 0            | 普通成员权限    |
    | 1            | OP权限          |
    | 4            | OP + 控制台权限 |

- 返回值：是否成功修改

- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.setPermLevel(1);
[Lua]

```

#### 修改玩家游戏模式

`pl.setGameMode(mode)`

- 参数：

  - mode : `Integer`  
    目标游戏模式，0为生存模式，1为创造模式，2为极限模式

- 返回值：是否成功修改

- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.setGameMode(1);
[Lua]

```

#### 提高玩家经验等级 

`pl.addLevel(count)`

- 参数：
  - count : `Integer`  
    要提升的经验等级
- 返回值：是否设置成功
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.addLevel(6);
[Lua]

```

#### 获取玩家经验等级

`pl.getLevel()`

- 返回值：玩家的经验等级
- 返回值类型：`Integer`

```clike
[Js]
//对于一个玩家对象pl
pl.getLevel();
[Lua]
--对于一个玩家对象pl
pl.getLevel()
```

#### 重置玩家经验

`pl.resetLevel()`

- 返回值：是否设置成功
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.resetLevel();
[Lua]
--对于一个玩家对象pl
pl:resetLevel()
```

#### 获取玩家升级所需的经验值

`pl.getXpNeededForNextLevel()`

- 返回值：玩家升级所需的经验值
- 返回值类型：`Integer`

注意，此方法在计算时会忽略超出等级的经验值

```clike
[Js]
//对于一个玩家对象pl
pl.getXpNeededForNextLevel();
[Lua]
--对于一个玩家对象pl
pl.getXpNeededForNextLevel()
```

#### 提高玩家经验值

`pl.addExperience(count)`

- 参数：
  - count : `Integer`
    要提升的经验值
- 返回值：是否设置成功
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.addExperience(6);
[Lua]
--对于一个玩家对象pl
pl:addExperience(6)
```

#### 传送玩家至指定服务器  

`pl.transServer(server,port)`

- 参数：
  - server : `String`  
    目标服务器IP / 域名

  - port : `Integer`  
    目标服务器端口  
- 返回值：是否成功传送
- 返回值类型：`Boolean` 

```clike
[Js]
//对于一个玩家对象pl
pl.transServer("123.45.67.89",23333);
[Lua]

```

#### 使玩家客户端崩溃

`pl.crash()`

- 返回值：是否成功执行
- 返回值类型：`Boolean` 

```clike
//对于一个玩家对象pl
[Js]
pl.crash();
[Lua]
pl:crash()

```

#### 设置玩家自定义侧边栏

`pl.setSidebar(title,data[,sortOrder])`

- 参数：

  - title : `String`  
    侧边栏标题  
  - data : `Object<String-Integer>`  
    侧边栏对象内容对象  
    对象中的每个键 - 值对将被设置为侧边栏内容的一行
  - sortOrder : `Number`  
    （可选参数）侧边栏内容的排序顺序。`0`为按分数升序，`1`为按分数降序。默认值为`1`

- 返回值：是否成功设置

- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.setSidebar("title",{"aaaa":3,"bbb":12,"cc":7});
[Lua]

```

#### 移除玩家自定义侧边栏

`pl.removeSidebar()`

- 返回值：是否成功移除
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.removeSidebar();
[Lua]

```

#### 设置玩家看到的自定义Boss血条  

`pl.setBossBar(uid,title,percent,colour)`

- 参数：
  - uid : `Number`   
    唯一标识符，不可冲突重复！一个uid对于一行bar
  - title : `String`  
    自定义血条标题  
  - percent : `Integer`  
    血条中的血量百分比，有效范围为0~100。0为空血条，100为满
  - colour : `Integer`  
    血条颜色(默认值为2(RED))
- 返回值：是否成功设置
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.setBossBar(1145141919,"Hello ~ ",80,0);
[Lua]

```

#### 移除玩家的自定义的指定Boss血条  

`pl.removeBossBar(uid)`
- 参数：
  - uid : `Number`   
    标识符，与setBossBar对应！

- 返回值：是否成功移除
- 返回值类型：`Boolean`

```clike
[Js]
//对于一个玩家对象pl
pl.removeBossBar(1145141919);
[Lua]

```

#### 获取玩家对应的NBT对象

`pl.getNbt()`

- 返回值：玩家的NBT对象
- 返回值类型：`NbtCompound`

<br>

#### 写入玩家对应的NBT对象

`pl.setNbt(nbt)`

- 参数：
  - nbt : `NbtCompound`  
    NBT对象
- 返回值：是否成功写入
- 返回值类型：`Boolean`

关于NBT对象的更多使用，请参考 [NBT接口文档](zh_CN/Development/NbtAPI/NBT.md)

<br>

#### 为玩家增加一个Tag

`pl.addTag(tag)`

- 参数：
  - tag: `String`  
    要增加的tag字符串
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

#### 为玩家移除一个Tag

`pl.removeTag(tag)`

- 参数：
  - tag: `String`  
    要移除的tag字符串
- 返回值：是否移除成功
- 返回值类型：`Boolean`

<br>

#### 检查玩家是否拥有某个Tag

`pl.hasTag(tag)`

- 参数：
  - tag: `String`  
    要检查的tag字符串
- 返回值：是否拥有这个Tag
- 返回值类型：`Boolean`

<br>

#### 获取玩家拥有的所有Tag列表

`pl.getAllTags()`

- 返回值：玩家所有的 tag 字符串列表
- 返回值类型：`Array<String,String,...>`

<br>

#### 获取玩家的Abilities能力列表（来自玩家NBT）

`pl.getAbilities()`

- 返回值：玩家所有能力信息的键 - 值对列表对象
- 返回值类型：`object<String-任意类型>`

键 - 值对列表中的每一项形如：`"mayfly": 1`  等等

<br>

#### 获取玩家的Attributes属性列表（来自玩家NBT）

`pl.getAttributes()`

- 返回值：玩家所有属性对象的数组
- 返回值类型：`Array<Object,Object,...>`

数组中的每一项为一个键 - 值对列表对象`Object`，Attributes对象默认含有`Base` `Current` `DefaultMax` `DefaultMin` `Max` `Min` `Name` 等几种内容 。其内容形如：

```
{
        "Base": 0, 
        "Current": 0, 
        "DefaultMax": 1024, 
        "DefaultMin": -1024, 
        "Max": 1024, 
        "Min": -1024, 
        "Name": "minecraft:luck"
}, 
```

（此处使用Json格式直观地展示）

<br>

#### 获取玩家疾跑状态

`pl.isSprinting()`

- 返回值：玩家疾跑状态
- 返回值类型：`Boolean`

<br>

#### 设置玩家疾跑状态 

`pl.setSprinting(sprinting)`

- 参数：
  - sprinting : `Boolean`  
    是否为疾跑状态
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

#### 获取视线方向实体

`pl.getEntityFromViewVector([maxDistance])`  

- 参数：
  - maxDistance : `Float`  
    查找最大距离  
- 返回值：视线方向实体，如果获取失败，返回 `Null`  
- 返回值类型：`Entity?`

<br>

#### 获取视线方向方块

`pl.getBlockFromViewVector([includeLiquid,solidOnly,maxDistance,fullOnly])`  

- 参数：
  - includeLiquid : `Boolean`  
    是否包含液态方块
  - solidOnly : `Boolean`  
    是否仅允许 `Solid` 类型的方块
  - maxDistance : `Float`  
    查找最大距离
  - fullOnly : `Boolean`  
    是否仅允许完整方块  
- 返回值：视线方向方块，如果获取失败，返回 `Null`  
- 返回值类型：`Block?`

<br>

#### 判断是否为模拟玩家

`pl.isSimulatedPlayer()`

- 返回值：是否为模拟玩家
- 返回值类型：`Boolean`

<br>

## 模拟玩家（由于与玩家API重合过多，未生成新的模拟玩家类）

### 创建一个模拟玩家

`mc.spawnSimulatedPlayer(name,pos)`  
`mc.spawnSimulatedPlayer(name,x,y,z,dimid)`

- 参数：
  - name : `String`  
    模拟玩家名称
  - pos : `IntPos `/ `FloatPos`  
    生成生物的位置的坐标对象（或者使用x, y, z, dimid来确定生成位置）
- 返回值：生成的（模拟）玩家对象
- 返回值类型：`Player`
  - 如返回值为 `Null` 则表示生成失败

### 模拟玩家 - 函数
每一个模拟玩家对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的模拟玩家对象`sp`，可以通过以下这些函数对这个模拟玩家进行一些操作


#### 模拟攻击

`sp.simulateAttack([target])`

- 参数：

  - target : `Entity`  
    （可选参数）攻击目标，默认为视线方向上的实体  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#attack)


#### 模拟破坏

`sp.simulateDestory([pos,face])`
`sp.simulateDestory([block,face])`
- 参数：

  - pos :`IntPos`  
    （可选参数）要破坏的方块的坐标，默认为视线方向上的方块  
  - block :`Block`  
    （可选参数）要破坏的方块，默认为视线方向上的方块  
  - face :`Integer`  
    （可选参数）从哪面破坏，

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#breakblock)


#### 模拟断开连接

`sp.simulateDisconnect()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

#### 模拟交互
`sp.simulateInteract([target])`
`sp.simulateInteract([pos,face])`
`sp.simulateInteract([block,face])`

- 参数：

  - target : `Entity`  
    （可选参数）模拟交互目标，默认为视线方向上的方块或实体  
  - pos :`IntPos`  
    （可选参数）模拟交互目标，默认为视线方向上的方块或实体  
  - block :`Block`  
    （可选参数）模拟交互目标，默认为视线方向上的方块或实体  
  - face :`Number`  
    （可选参数）模拟交互目标方块的面  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#interact)


#### 模拟跳跃

`sp.simulateJump()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#jump)


#### 模拟看向某方块或实体

`sp.simulateLookAt(pos)`
`sp.simulateLookAt(entity)`
`sp.simulateLookAt(block)`

- 参数：

  - target : `Entity`  
    要看向的实体  
  - pos :`IntPos` / `FloatPos`  
    要看向的坐标  
  - block :`Block`  
    要看向的方块  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#lookatblock)


#### 模拟设置身体角度

`sp.simulateSetBodyRotation(rot)`

- 参数：

  - rot : `Number`  
    要设置的角度  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#lookatblock)


#### 模拟导航移动

`sp.simulateNavigateTo(entity[,speed)`
`sp.simulateNavigateTo(pos[,speed])`

- 参数：

  - entity : `Entity`  
    导航目标  
  - pos : `IntPos` / `FloatPos`  
    导航目标  
  - speed : `Number`  
    （可选参数）移动速度，默认为1  

- 返回值：是否能到达指定位置以及导航路径，结构：{isFullPath:`Boolean`,path:`Number[3][]`}
- 返回值类型：`Object`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#navigatetoblock)
返回值示例：{isFullPath:false,path:[[-8,0,-3],[-7,0,-2],[-6,0,-2],[-5,0,-2],[-4,0,-1],[-3,0,-1],[-2,0,-1],[-1,0,0]]}，
此数据的目标坐标为(0,2,0)，路径终点为(-1,0,0)，所以isFullPath为false，但由于路径不为空，所以模拟玩家将会移动至(-1,0,0)坐标


#### 模拟导航移动（多目标）

`sp.simulateNavigateTo(posArray[,speed])`

- 参数：

  - posArray : `IntPos[]` / `FloatPos[]`  
    导航目标  
  - speed : `Number`  
    （可选参数）移动速度，默认为1  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#navigatetolocations)


#### 模拟使用物品

`sp.simulateUseItem([slot,pos,face,relative])`
`sp.simulateUseItem([item,pos,face,relative])`

- 参数：

  - item : `Item`  
    （可选参数）要使用的物品，默认为选中物品  
  - slot : `Number`  
    （可选参数）要使用的物品所在的槽，默认为选中物品  
  - pos : `IntPos`  
    （可选参数）目标坐标，默认为朝向方块坐标  
  - face : `Number`  
    （可选参数）目标方块的面，默认为0  
  - relative : `FloatPos`  
    （可选参数）相对方块偏移坐标，默认为{0.5,0.5,0.5}  

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#useitem)


#### 模拟停止破坏方块

`sp.simulateStopDestroyingBlock()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#stopbreakingblock)


#### 模拟停止交互

`sp.simulateStopInteracting()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#stopinteracting)


#### 模拟停止移动

`sp.simulateStopMoving()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#stopmoving)


#### 模拟停止使用物品

`sp.simulateStopUsingItem()`

- 返回值：是否成功模拟操作
- 返回值类型：`Boolean`

参考：[mojang-gametest docs](https://docs.microsoft.com/zh-cn/minecraft/creator/scriptapi/mojang-gametest/simulatedplayer#stopusingitem)

`sp.simulateLocalMove()`

