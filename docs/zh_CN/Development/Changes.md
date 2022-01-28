# 📋 LiteXLoader - 重大更改页面

这里列出了LXL引擎对 **API** 进行的一些可能会造成 **不向下兼容** 的重大更改。  
如果你的插件在更新版本后发生问题，请首先查阅本章节的相关内容，检查是否由API变更导致。  
更改内容按时间顺序由新到旧展示。

注意：此处只会列出造成 **不兼容变化** 的API更改。如果要查看所有更新日志，请前往GitHub提交页面查看相关提交记录

#### Latest (Dev)

- `player.direction`改为`player.rotation`，返回值使用Vec2表示旋转角度

#### 20210829 - v0.5.2

- 将`Text`类改名为`Format`类，内容不变，以避开名字冲突

#### 20210827 - v0.5.1

- 移除了`mc.setOnlinePlayer`接口

#### 20210826 - v0.5.0

- 将`pl.removeScore`更名为`pl.deleteScore`，并新增大量计分板API

#### 20210818 - v0.4.5

- 更改了Dependence的加载机制，现在只有baselib会被自动加载了
- `pl.runcmd`成员方法执行的命令会带上 / 前缀了

#### 20210807 - v0.4.0

- 增加事件：`onSpawnProjectile`, `onBedExplode`,` onRespawnAnchorExplode`
- 删除事件：`onProjectileShoot`，`onSplashPotionHitEffect`,`onFishingHookRetrieve`

#### 20210803 - v0.3.2

- `mc.listAllScoreObjective`更名为`mc.getAllScoreObjective`，接口进行了修复

#### 20210802 - v0.3.1

- `lxl.version`版本对象中的`build`项更名为`revision`

#### 20210801 - v0.3.0

- 将事件 `onContainerChangeSlot` 重命名为 `onContainerChange`，移动到方块事件中，并对回调参数做了修改。详见事件文档
- 事件`onProjectileHit`重命名为`onProjectileHitBlock`，修改了回调参数，新增`onProjectileHitEntity`
- 事件`onDestroyingBlock`修改为`onStartDestroyBlock`

#### 20210730 - v 0.3.0

- 两种表单构建器修改内容的接口返回值都修改为返回原对象，便于连锁操作
- NBT对象通用接口`toJson`改名为`toString`，`toJson`移作他用

#### 20210725 - v0.2.1 hotfix2

- 增加`onPlayerDie`事件
- 跨插件函数调用接口`lxl.import`发生较大变化

#### 20210723 - v0.0.9

- 将`mc.runcmdEx`返回值对象中的`res.result`字段更名为`res.success`

#### 20210720 - v 0.0.9

- 将`onJoin`事件重命名为`onPreJoin`，同时新增好用的真正的`onJoin`事件

#### 20210719 - v 0.0.9

- `mc.newForm`更名为`mc.newCustomForm`，增加 `SimpleForm` 普通表单构建器
- `onUseItem`事件删除 block 参数，如果有需要监听点击方块请使用 `onBlockInteracted` 事件  
  useitem 事件不再会不停的刷了

#### 20210717 - v 0.0.8

- 适配 1.17.10
- 表单函数回调函数的参数内容发生较大变化

#### 20210714 - v 0.0.7

- 将事件`onOpenChest`和`onOpenBarrel`合并为`onOpenContainer`
- 将事件`onCloseChest`和`onCloseBarrel`合并为`onCloseContainer`
- 将事件`onChangeSlot`重命名为`onContainerChangeSlot`
- 将接口`file.read`重命名为`file.readFrom`，将接口`file.write`重命名为`file.writeTo`
- 通用日志接口的 日志输出等级 发生了较大变化
- 将事件`onServerCmd`重命名为`onConsoleCmd`

#### 20210713 - v 0.0.7

- `lxl.getVerion` 返回值类型变为`Object`
- `pl.sendSimpleForm` 函数增加 `images` 参数

#### 20210709 - v 0.0.7

- 删除注册自定义命令回调参数args中的第一个前缀项（即原来的args[0]）。  
  args数组从此只包含所注册的命令分割出的参数  
  具体详见命令系统API相关文档说明
- 将`IntPos`与`FloatPos`类型中的`dim`变量重命名为`dimid`，表意维度ID更加清晰