## 🎈 实体对象 API

在LLSE中，使用「实体对象」来操作和获取某一个实体的相关信息。

### 获取一个实体对象

#### 从事件或API获取

通过注册**事件监听**函数，或者调用某些**返回实体对象**的函数，来获取到BDS给出的实体对象    
详见 [事件监听文档 - EventAPI](zh_CN/Development/EventAPI/Listen.md)      

#### 获取当前所有已加载的实体

此函数会返回一个实体对象的数组，其中每个对象都对应了一个已加载的实体

`mc.getAllEntities()`

- 返回值：在线的玩家对象列表
- 返回值类型：`Array<Entity,Entity,...>`

#### 生成新生物并获取

通过此函数，在指定的位置生成一个新生物，并获取它对应的实体对象

`mc.spawnMob(name,pos)`  
`mc.spawnMob(name,x,y,z,dimid)`

- 参数：
  - name : `String`  
    生物的命名空间名称，如 `minectaft:creeper`
  - pos : `IntPos `/ `FloatPos`  
    生成生物的位置的坐标对象（或者使用x, y, z, dimid来确定生成位置）
- 返回值：生成的实体对象
- 返回值类型：`Entity`
  - 如返回值为 `Null` 则表示生成失败

> 注意：不要**长期保存**一个实体对象  
> 当实体对象对应的实体被销毁时，对应的实体对象将变得无效。因此，如果有长期操作某个实体的需要，请通过上述途径获取实时的实体对象

<br>


### 实体对象 - 属性

每一个实体对象都包含一些固定的对象属性。对于某个特定的实体对象`en`，有以下这些属性

| 属性         | 含义               | 类型             |
| ------------ | ------------------ | ---------------- |
| en.name      | 实体名称           | `String`         |
| en.type      | 实体标准类型名     | `String`         |
| en.id        | 实体的游戏内id     | `Integer`        |
| en.pos       | 实体所在坐标       | `FloatPos`       |
| en.blockPos  | 实体所在的方块坐标 | `IntPos`         |
| en.maxHealth | 实体最大生命值     | `Integer`        |
| en.health    | 实体当前生命值     | `Integer`        |
| en.inAir     | 实体当前是否悬空   | `Boolean`        |
| en.inWater   | 实体当前是否在水中 | `Boolean`        |
| en.speed     | 实体当前速度       | `Float`          |
| en.direction | 实体当前朝向       | `DirectionAngle` |
| en.uniqueId  | 实体唯一标识符     | `String`         |

这些对象属性都是只读的，无法被修改

**实体当前朝向** 属性的详细解释见  [基础游戏接口文档](zh_CN/Development/GameAPI/Basic.md)

<br>

### 实体对象 - 函数

每一个实体对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的实体对象`en`，可以通过以下这些函数对这个实体进行一些操作

#### 传送实体至指定位置

`en.teleport(pos)`  
`en.teleport(x,y,z,dimid)`

- 参数：
  - pos :`IntPos `/ `FloatPos`  
    目标位置坐标（或者使用x, y, z, dimid来确定实体位置）
- 返回值：是否成功传送
- 返回值类型：`Boolean`

<br>

#### 杀死指定实体  

`en.kill()`

- 返回值：是否成功执行
- 返回值类型：`Boolean`

<br>

#### 对实体造成伤害

`en.hurt(damage)`

- 参数：
  - damage : `Integer`  
    对实体造成的伤害数值
- 返回值：是否造成伤害
- 返回值类型：`Boolean`

注意，此处造成的伤害为真实伤害，无法被盔甲等保护装备减免

<br>

#### 使指定实体着火

`en.setOnFire(time)`

- 参数：
  - time : `Integer`  
    着火时长，单位秒
- 返回值：是否成功着火
- 返回值类型：`Boolean`

<br>

#### 判断一个实体对象是不是玩家

`en.isPlayer()`

- 返回值：当前实体对象是不是玩家
- 返回值类型：`Boolean`

<br>

#### 将实体对象转换玩家对象

`en.toPlayer()`

- 返回值：转换成的玩家对象
- 返回值类型：`Player`
  - 如果此实体对象指向的不是某个玩家，或者转换失败，则返回 `Null`

如果当前实体对象指向的是一个玩家，可以使用此函数将实体对象转换为玩家对象，以使用更多的玩家相关 API

<br>

#### 判断一个实体对象是不是掉落物实体

`en.isItemEntity()`

- 返回值：当前实体对象是不是掉落物实体
- 返回值类型：`Boolean`

<br>

#### 获取掉落物实体中的物品对象

`en.toItem()`

- 返回值：获取到的物品对象
- 返回值类型：`Item`
  - 如果此实体对象不是掉落物实体，或者获取失败，则返回 `Null`

如果当前实体对象是一个掉落物实体，可以使用此函数获取掉落物实体中的物品对象，以使用更多的物品相关 API

<br>

#### 获取实体当前站立所在的方块

`en.getBlockStandingOn()`

- 返回值：当前站立在的方块对象
- 返回值类型：`Block`

<br>

#### 获取生物盔甲栏的容器对象  

`en.getArmor()`

- 返回值：此实体盔甲栏对应的容器对象
- 返回值类型：`Container`

关于容器对象的更多使用，请参考 [容器对象 API文档](zh_CN/Development/GameAPI/Container.md)

<br>

#### 判断生物是否拥有容器（盔甲栏除外）

`en.hasContainer()`

- 返回值：这个生物实体是否拥有容器
- 返回值类型：`Boolean`

如羊驼身上的箱子等，他们各自拥有一个属于自己的容器对象

<br>

#### 获取生物所拥有的容器对象（盔甲栏除外）

`en.getContainer()`

- 返回值：这个生物实体所拥有的容器对象
- 返回值类型：`Container`

关于容器对象的更多使用，请参考 [容器对象 API文档](zh_CN/Development/GameAPI/Container.md)

<br>

#### 刷新生物物品栏、盔甲栏

`en.refreshItems()`

- 返回值：是否成功刷新
- 返回值类型：`Boolean`

在修改生物物品之后，为了促使客户端生效，需要刷新生物所有的物品

<br>

#### 为实体增加一个Tag

`en.addTag(tag)`

- 参数：
  - tag: `String`  
    要增加的tag字符串
- 返回值：是否设置成功
- 返回值类型：`Boolean`

<br>

#### 为实体移除一个Tag

`en.removeTag(tag)`

- 参数：
  - tag: `String`  
    要移除的tag字符串
- 返回值：是否移除成功
- 返回值类型：`Boolean`

<br>

#### 检查实体是否拥有某个Tag

`en.hasTag(tag)`

- 参数：
  - tag: `String`  
    要检查的tag字符串
- 返回值：是否拥有这个Tag
- 返回值类型：`Boolean`

<br>

#### 返回实体拥有的所有Tag列表

`en.getAllTags()`

- 返回值：实体所有的 tag 字符串列表
- 返回值类型：`Array<String,String,...>`

<br>

#### 获取实体对应的NBT对象

`en.getNbt()`

- 返回值：实体的NBT对象
- 返回值类型：`NbtCompound`

<br>

#### 写入实体对应的NBT对象

`en.setNbt(nbt)`

- 参数：
  - nbt : `NbtCompound`  
    NBT对象
- 返回值：是否成功写入
- 返回值类型：`Boolean`

关于NBT对象的更多使用，请参考 [NBT接口文档](zh_CN/Development/NbtAPI/NBT.md)

<br>

### 其他实体函数 API

下面这些API提供了与游戏中指定位置实体互动的API

#### 在指定位置制造一次爆炸

`mc.explode(pos,source,power,range,isDestroy,isFire)`  
`mc.explode(x,y,z,dimid,source,power,range,isDestroy,isFire)`

- 参数：
  - pos : `IntPos `/ `FloatPos`  
    引发爆炸的位置坐标（或者使用x, y, z, dimid来确定实体位置）
  - source : `Entity`  
    设置爆炸来源的实体对象，可以为`Null`
  - power : `Float`  
    爆炸的威力值，影响爆炸的伤害大小和破坏范围
  - range : `Float`  
    爆炸的范围半径，影响爆炸的波及范围
  - isDestroy : `Boolean`  
    爆炸是否破坏方块
  - isFire : `Boolean`  
    爆炸结束后是否留下燃烧的火焰
- 返回值：是否成功制造爆炸
- 返回值类型：`Boolean`

<br>