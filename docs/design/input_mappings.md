# 输入映射（Input Mapping）状态全解

> 调研版本：26.51 client（`26.51_client.i64`）
> 判定代码：`ClientInputHandler::updatePlayerState`（0x144351780，每帧按玩家状态计算
> 当前 gameplay 映射名）、`ClientInputHandler::updateInputMode`（0x144351dc0，
> 实际切换 `mExpectedInGameInputMode`）、`LocalPlayer::normalTick`（emote 特例）、
> `VanillaClientGameplayEventListener::onPlayerStartRiding/StopRiding`（载具特例）
>
> 背景：游戏内按键绑定按"输入映射栈"派发。菜单打开时栈顶切到 `"screen"` 系映射，
> gameplay 映射不激活，gameplay 按键自然失效——这就是"菜单开着时 E 开不了背包"的
> 原生门控。而 gameplay 内部又按玩家状态细分多个映射，按键事件只在当前状态对应的
> 映射激活时产生。自定义 gameplay 按钮（如 CoralMap 开图键）必须绑定进**所有**
> `gamePlay*` 映射才能全状态可用（`ScreenButtonRegistry::registerGameplayKeyboardButton`
> 即按此前缀匹配注入）。

## 映射名 → 玩家状态

> 运行时实测（`mActiveInputMappings` 全量键名，26.51 进世界后）：
> `[gamePlayNormal, gamePlayFlying, gamePlayBoating, gamePlayMinecart, gamePlayRiding,
> gamePlayInScaffolding, gamePlaySwimming, gamePlayInWater, gamePlayEmote,
> gamePlaySpectatorModeName, screenGazeController, screen, screenBed, screenDeath]`

| 映射名 | 玩家状态 | 判定来源 |
|---|---|---|
| `gamePlayNormal` | 默认状态（走路/奔跑/跳跃/鞘翅滑翔等一切不匹配下列状态的情况） | `updatePlayerState` 的最终 else 分支 |
| `gamePlayFlying` | **创造模式飞行**（MovementAbilities 的 flying 能力位，bit0） | `updatePlayerState`: `mIsFlying`（`abilities->mFlagValues[0] & 1`）。注意**鞘翅滑翔不置此位**，鞘翅下仍是 `gamePlayNormal` |
| `gamePlaySwimming` | 游泳中（ActorDataFlag 游泳标志，`Elems[0] & 0x200000000000000`） | `updatePlayerState`: `mIsSwimming` |
| `gamePlayInWater` | 在水中但不满足游泳标志（如站立/漂浮触水） | `updatePlayerState`: `mIsInWater`（由调用方传入的 bool） |
| `gamePlayInScaffolding` | 在脚手架等可攀爬方块内（ActorDataFlag，`Elems[1] & 0x800000000`） | `updatePlayerState`: `mIsInAscendableBlock` |
| `gamePlaySpectatorModeName` | 旁观者模式（GameType == 6） | `updatePlayerState` 最优先分支（spectator 检查后不再评估其他状态） |
| `gamePlayBoating` | 乘船中 | `onPlayerStartRiding`（按载具类型选择）/ `onPlayerStopRiding` 恢复 |
| `gamePlayRiding` | 骑乘非船/非矿车实体（马、猪等） | 同上 |
| `gamePlayMinecart` | 乘矿车中 | 同上 |
| `gamePlayEmote` | 表情轮盘（emote wheel）打开期间 | `LocalPlayer::normalTick` 直接调用 `updateInputMode("gamePlayEmote")` |

## 屏幕系（screen）映射

不走 gameplay 状态评估，由屏幕类型决定推入哪个（`ClientInputHandler::pushInputMapping`）：

| 映射名 | 场景 |
|---|---|
| `"screen"` | 普通 UI 屏幕（背包、暂停、我们的大地図等绝大多数界面） |
| `"screenDeath"` | **死亡界面**（死亡本身不是 gameplay 状态，死亡时切到此栈） |
| `"screenBed"` | 床/睡觉界面 |
| `"screenGazeController"` | 注视点（gaze）控制器激活时（主机/VR 式注视交互；运行时实测存在于常规会话） |
| `"screenEditor"` | 编辑器（Editor）模式专用，常规游戏会话中不激活 |

## 状态判定优先级（`updatePlayerState` 每帧评估）

```
spectator?  → gamePlaySpectatorModeName
riding?     → 保持当前（载具映射由骑乘事件单独维护）
flying?     → gamePlayFlying
swimming?   → gamePlaySwimming
scaffolding?→ gamePlayInScaffolding
inWater?    → gamePlayInWater
else        → gamePlayNormal
```

注意点：

- **创造飞行 ≠ 鞘翅**：创造飞行置 abilities flying 位 → `gamePlayFlying`；鞘翅滑翔不置该位 → 仍是 `gamePlayNormal`。CoralMap 曾因此出现"鞘翅能开图、创造飞行不能开图"（按钮只绑了 `gamePlayNormal`）。
- 旁观者模式优先级最高，覆盖飞行/游泳等所有状态。
- 游泳标志与触水是两个独立状态，映射名不同。
- 载具三态（船/骑乘/矿车）不走每帧评估，由骑乘开始/结束事件直接切映射。

## 相关位置（备查）

- 映射名常量：`GameplayInputMappingNames::NormalName/SwimmingName/InWaterName`（.rdata 0x14e777dc0 / 0x14e8c8d00 / 0x14e8ccad0）；其余名字内嵌在代码立即数里
- 运行时切换：`ClientInputHandler::updateInputMode`（写 `mExpectedInGameInputMode`，推入 `InputHandler::pushInputMapping`）
- 屏幕系映射名（对照）：`"screen"` / `"screenBed"` / `"screenDeath"` / `"screenEditor"` / `"screenGazeController"`（`ClientInputHandler::pushInputMapping`；其中 screenEditor 仅编辑器模式激活）
