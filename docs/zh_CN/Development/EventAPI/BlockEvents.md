## 📦 方块相关事件

#### `"onBlockInteracted"` - 方块接受玩家互动

- 监听函数原型
  `function(player,block)`
- 参数：
  - player : `Player`  
    与方块互动的玩家对象

  - block : `Block`  
    被互动的方块对象

- 拦截事件：函数返回`false`

只有可以被互动的方块才会触发此事件，如木桶、信标、制图台、磨石等  
拦截事件对箱子、潜影盒、工作台无效

<br>

#### `"onBlockChanged"` - 方块改变

- 监听函数原型
  `function(beforeBlock,afterBlock)`
- 参数：
  - beforeBlock : `Block`  
    改变前的方块对象

  - afterBlock : `Block`  
    改变后的方块对象

- 拦截事件：函数返回`false`
  <details>
    <summary>拦截此事件需要注意以下问题</summary>

        1.部分事件导致的方块变化无法拦截, 比如玩家挖掘，放置  
        2.对于方块与方块之间关系导致的变化，部分不可拦截，比如爆炸摧毁周围方块  
        （实际上，客户端看起来那边还是存在方块的，但是已经是假方块了）  
        3.但是对于火把这种需要附着在其他方块上的方块，如果因为附着方块被摧毁，那么火把不会随之被破坏  
        4.具体某些特性可以自行测试
  </details>

<br>

#### "onBlockExplode"` - 发生由方块引起的爆炸

- 监听函数原型
  `function(source,pos,radius,maxResistance,isDestroy,isFire)`
- 参数：
  - source : `Block`  
    爆炸来源的方块对象
  - pos : `FloatPos`  
    爆炸发生的坐标
  - radius : `Float`    
    爆炸波及的半径
  - maxResistance : `Float`  
    爆炸可破坏的方块爆炸抗性上限
  - isDestroy : `Boolean`  
    爆炸是否破坏方块
  - isFire : `Boolean`  
    爆炸是否产生火焰

- 拦截事件：函数返回`false`

<br>

#### `"onRespawnAnchorExplode"` - 发生由重生锚引起的爆炸

- 监听函数原型
  `function(pos,player)`
- 参数：
  - pos : `IntPos`  
    爆炸发生的重生锚的坐标
  - player : `Player`  
    试图使用重生锚的玩家
- 拦截事件：函数返回`false`

<br>

#### `"onBlockExploded"` - 方块被爆炸破坏

- 监听函数原型
  `function(block,source)`
- 参数：
  - block : `Block`  
    被爆炸破坏的方块对象
  - source : `Entity`  
    爆炸来源的实体对象
- 拦截事件：不可以拦截

<br>

#### `"onFireSpread"` - 火焰蔓延

- 监听函数原型
  `function(pos)`
- 参数：
  - pos : `IntPos`  
    火焰蔓延到的方块坐标
- 拦截事件：函数返回`false`

<br>

#### `"onCmdBlockExecute"` - 命令方块执行命令

- 监听函数原型
  `function(cmd,pos,isMinecart)`
- 参数：
  - cmd : `String`  
    执行的命令
  - pos : `IntPos`  
    执行命令的命令方块坐标
  - isMinecart : `bool`  
    命令是否由命令方块矿车执行
  
- 拦截事件：函数返回`false`

<br>

#### `"onContainerChange"` - 容器内容改变

- 监听函数原型
  `function(player,container,slotNum,oldItem,newItem)`
- 参数：
  - player : `Player`  
    操作容器的玩家对象
  - container : `Block`  
    被操作的容器的方块对象
  - slotNum : `Integer`  
    操作容器的格子位置（第slotNum个格子）
  - oldItem : `Item`  
    格子中的原来旧物品对象
  - newItem : `Item`  
    格子中新的物品对象
- 拦截事件：不可以拦截

此处的 **容器** 为宽泛容器的概念，包括箱子、桶等多种可以储存物品的容器都可以触发此事件

对回调参数的解释：  
旧物品对象与新物品对象有多种不同的组合情况，表示格子内不同的变化情况

- 放入物品：旧物品对象为空，新物品对象不为空
- 取出物品：旧物品对象不为空，新物品对象不为空
- 物品增加堆叠：旧物品对象的`type` == 新物品对象的`type`，且旧物品对象的`count` < 新物品对象的`count`
- 物品减少堆叠：旧物品对象的`type` == 新物品对象的`type`，且旧物品对象的`count` > 新物品对象的`count`
- 替换物品：旧物品对象的`type` 不等于 新物品对象的`type`，且两物品对象均不为空

<br>

#### `"onProjectileHitBlock"` - 方块被弹射物击中

- 监听函数原型
  `function(block,source)`
- 参数：
  - block : `Block`  
    被击中的方块对象
  - source : `Entity`  
    发射的弹射物实体（如箭）
- 拦截事件：不可以拦截

<br>

#### `"onRedStoneUpdate"` - 发生红石更新

- 监听函数原型
  `function(block,level,isActive)`
- 参数：
  - block : `Block`  
    发生红石更新的方块对象
  - level : `Integer`  
    更新的红石能量等级（0-15）
  - isActive : `Boolean`  
    表示红石更新是激活还是熄灭  
    - 为`true`表示红石变为激活状态
    - 为`false`表示红石变为熄灭状态
- 拦截事件：函数返回`false`

目前可以监测红石更新的方块种类有：红石线、红石火把、红石中继器、红石比较器

<br>

#### `"onHopperSearchItem"` - 漏斗（漏斗矿车）检测可否吸取物品

- 监听函数原型
  `function(pos,isMinecart)`
- 参数：
  - pos : `FloatPos`  
    漏斗（漏斗矿车）所在的位置
  - isMinecart : `bool`  
    是否为漏斗矿车
- 拦截事件：函数返回`false`

注：在放置漏斗之后，会在服务端反复不断触发这个事件  
当你拦截事件之后，漏斗就会无法吸取这个物品

<br>

#### `"onHopperPushOut"` - 漏斗输出物品

- 监听函数原型
  `function(pos)`
- 参数：
  - pos : `FloatPos`  
    漏斗所在的位置
- 拦截事件：函数返回`false`

<br>

#### `"onPistonTryPush"` - 活塞尝试推动

- 监听函数原型
  `function(pistonPos,block)`
- 参数：
  - pistonPos : `IntPos`  
    正在工作的活塞坐标
  - block : `Block`  
    尝试被推动的方块对象
- 拦截事件：函数返回`false`

若活塞被方块阻挡无法推动，此事件将会不停地循环触发

<br>

#### `"onPistonPush"` - 活塞推动

- 监听函数原型
  `function(pistonPos,block)`
- 参数：
  - pistonPos : `IntPos`  
    正在工作的活塞坐标
  - block : `Block`  
    被推动的方块对象
- 拦截事件：无法拦截

注：此事件与上事件不同，上一个Try事件在活塞推动前尝试时触发，此事件在推动完毕后触发

<br>

#### `"onFarmLandDecay"` - 耕地退化

- 监听函数原型
  `function(pos,entity)`
- 参数：
  - pos : `IntPos`  
    退化的耕地的坐标
  - entity : `Entity`  
    造成耕地退化的实体
- 拦截事件：函数返回`false`

<br>

#### `"onUseFrameBlock"` - 操作物品展示框

- 监听函数原型
  `function(player,block)`
- 参数：
  - player : `Player`  
    操作物品展示框的玩家对象
  - block : `Block`  
    被操作的物品展示框方块对象
- 拦截事件：函数返回`false`

注：操作包括放置物品、取下物品、旋转物品。

<br>

#### `"onLiquidFlow"` - 液体方块流动

- 监听函数原型
  `function(from,to)`
- 参数：
  - from : `Block`  
    水源方块对象
  - to : `IntPos`  
    即将流经的方块位置
- 拦截事件：函数返回`false`

