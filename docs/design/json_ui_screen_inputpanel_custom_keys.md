# JSON UI 三类定义有效键全解（screen / input_panel / custom）

> 调研版本：26.51 client（`26.51_client.i64`）
> 解析代码：`UIControlFactory::_createFromResolvedDef`（屏幕设置块 0x14458f1a4–0x14458fb00）、
> `UIControlFactory::_populateInputComponent`、`_populateGestureComponent`、
> `_populateFocusComponent`
> 说明：本文只列**游戏实际解析**的键（"有效键"）。屏幕属性按解析顺序写入
> ScreenSettings 标志位（byte+0x18 / +0x19 / +0x1A 的位与 float +0x1C），默认值以
> "属性缺失或类型非法时的回退常量"为准（已逐个在反汇编中核对，未核对的以 vanilla
> 实际用法推断并标注）。

## 1. `"type": "screen"`（屏幕定义）

屏幕内容在 `controls` 里声明；以下为屏幕级设置键（ScreenSettings）：

| 键 | 默认值 | 作用 |
|---|---|---|
| `is_showing_menu` | **true** | 把场景标记为"菜单"。`ClientInstance::isShowingMenu()` 扫描栈上所有场景的此标志；为 true 时 `InGamePlayScreen::tick` 的每 tick `grabMouse` 被抑制（菜单打开期间光标保持释放的关键）。HUD 类屏幕（hud_screen 等）显式声明 false |
| `absorbs_input` | **true** | 场景吸收输入、不再传给下层场景/游戏。菜单无需声明；HUD 类屏幕显式 false |
| `render_game_behind` | **true** | 渲染本场景身后的游戏画面/下层场景。全屏菜单（背包、我们的大地图）设 false |
| `is_modal` | false | 在焦点/输入系统中划出模态边界（FocusManager `mCurrentModalRoot`、控件 `mModalAncestor` 依据） |
| `should_steal_mouse` | false | **为玩法抢占鼠标**（不是"为 UI 释放光标"）。入栈决策 `shouldStealMouse() && isInGameInputEnabled() → grabMouse()`；菜单绝不声明（声明了会导致开界面光标消失），只有 hud_crosshair 这类游戏态屏幕为 true |
| `always_accepts_input` | false | 场景始终接收输入（不论焦点/栈位置） |
| `screen_not_flushable` | false | 场景不参与 flush（资源重载时保留） |
| `low_frequency_rendering` | false（推断） | 低频渲染（hud_screen 设 true 省电） |
| `screen_draws_last` | false（推断） | 最后绘制（强制置顶于其他场景） |
| `force_render_below` | false（推断） | 强制在下层渲染 |
| `send_telemetry` | **true**（推断：vanilla 大量显式 false） | 上报界面遥测。mod 屏幕建议 false |
| `close_on_player_hurt` | false（推断） | 玩家受伤时自动关闭（死亡屏等场景使用） |
| `use_custom_pocket_toast` | false（推断） | 使用 pocket 风格 toast |
| `cache_screen` | false（推断） | 缓存场景，重复打开不重建 |
| `gamepad_cursor` | false（推断） | 启用手柄虚拟光标 |
| `gamepad_cursor_deflection_mode` | false（推断） | 手柄光标偏转（吸附）模式 |
| `vertical_scroll_delta` | **20.0**（float，写入 +0x1C） | 垂直滚动步长 |
| `load_screen_immediately` | false | 场景创建时**同步加载** JSON（默认异步）。死亡屏同款用法；要求打开即完整的屏幕用 true |
| `render_only_when_topmost` | **true**（推断：HUD 类显式 false） | 仅在栈顶时渲染 |
| `should_be_skipped_during_automation` | false（推断） | 自动化（截图/测试）时跳过本场景 |

屏幕级结构键：

| 键 | 作用 |
|---|---|
| `controls` | 屏幕内容控件树（通常单个 `content@namespace.def`） |
| `button_mappings` | 屏幕级按钮映射（详见 `vanilla_button_mappings.md`）。标准退出路径：`menu_cancel → menu_exit (global)`，落回游戏路由返回 |
| `$xxx` / `variables` | 模板变量与继承覆盖（`"def@namespace.base": {...}`） |

CoralMap 当前配置及评价：

```jsonc
"world_map_screen": {
    "type": "screen",
    "is_modal": true,               // 模态边界（可省，默认 false；保留用于焦点隔离）
    "is_showing_menu": true,        // 与默认值相同，可省；保留可读性好
    "always_accepts_input": true,   // 非默认，有效
    "render_game_behind": false,    // 全屏地图必要
    "render_only_when_topmost": true,
    "low_frequency_rendering": false,
    "send_telemetry": false,
    "load_screen_immediately": true // 打开即完整，推荐保留
    // absorbs_input / should_steal_mouse 已删：前者同默认值，后者语义相反（会抢鼠标）
}
```

## 2. `"type": "input_panel"`（输入面板）

由 `_populateInputComponent`（及联动的 `_populateGestureComponent` /
`_populateFocusComponent`）解析：

| 键 | 作用 |
|---|---|
| `button_mappings` | 按钮映射数组（`from_button_id`/`to_button_id`/`mapping_type`/`scope`/`input_mode_condition`/`button_up_right_of_first_refusal`/`consume_event`/`handle_select`/`handle_deselect`/`ignore_input_scope`/`alternate_input_scope`，完整语义见 `vanilla_button_mappings.md`） |
| `gesture_tracking_button` | **手势跟踪按钮**（GestureComponent 的 `mTrackpadButtonId`，不写则恒不匹配）。该按钮按住期间：PointerMoveEvent 位移与 ControllerDirectionEvent 方向写入宿主控件属性包 `#gesture_mouse_delta_x/y` + `#gesture_delta_source`，供渲染器每帧读取清零（PanoramaRenderer 模式）。拖拽/摇杆平移的核心 |
| `always_handle_controller_direction` | 把方向输入（摇杆）转成 ControllerDirectionEvent 交给组件（手势摇杆拖拽必需；即 UIScene::handleDirection 的 DirectionId==0 通道） |
| `always_handle_pointer` | 始终处理指针（鼠标/触摸）事件，即使指针不在控件范围内 |
| `always_listen_to_input` | 控件进入 `mAlwaysListeningInputControls` 列表，无焦点也接收输入 |
| `hover_enabled` | 启用悬停事件 |
| `consume_hover_events` | 消费悬停事件（不再传给下层控件） |
| `prevent_touch_input` | 禁止触屏输入 |
| `focus_enabled` | 控件可获得焦点（FocusComponent） |
| `focus_identifier` | 焦点标识名（焦点系统寻址/恢复用） |

CoralMap 当前配置：`always_handle_pointer` + `always_handle_controller_direction` +
`gesture_tracking_button` + `focus_enabled`/`focus_identifier` + button_mappings，
覆盖了鼠标拖拽（GestureComponent）、摇杆平移（ControllerDirectionEvent）、
按钮缩放/点按平移（命名按钮）三条输入路径。

## 3. `"type": "custom"`（自定义渲染控件）

| 键 | 作用 |
|---|---|
| `renderer` | 渲染器名。原版硬编码 33 个（`heart_renderer`、`hotbar_renderer`、`panorama_renderer` 等，完整名单见 `CustomUIRendererRegistry.cpp` 的拒绝表）；mod 名字经 `ll::ui::CustomUIRendererRegistry::registerRenderer` 注册后可用。每个使用该名字的控件经工厂获得独立渲染器实例（clone 语义） |

除 `renderer` 外没有其他 custom 专属键；布局与行为全部走通用控件属性。

## 4. 通用控件属性（三种 type 均可用）

| 键 | 作用 |
|---|---|
| `type` | 控件类型（screen/input_panel/custom/panel/label/button/...） |
| `size` | 尺寸，支持绝对值、百分比 `"100%"`、`"fill"`、`"cm"` 等 |
| `offset` | 相对锚点的偏移 |
| `anchor_from` / `anchor_to` | 锚点（九宫格定位） |
| `layer` | 同级绘制层序 |
| `alpha` | 透明度（沿控件树传播为 `mPropagatedAlpha`，F1 隐藏 HUD 经此生效） |
| `controls` | 子控件数组 |
| `bindings` | 数据绑定（`binding_name`/`binding_condition` 等，驱动可见性/文本） |
| `animations` | 动画引用 |
| `ignored` | 条件性忽略该控件（`"$xxx"` 表达式） |
| `variables` / `$xxx` | 模板变量 |
| `inherits`（`"name@namespace.base"`） | 继承另一个定义并覆盖属性 |

## 附：属性校验警告

裸 `"type": "screen"` 定义的属性白名单不含 `absorbs_input` /
`load_screen_immediately`（vanilla 只在继承 `common.base_screen` 的屏幕上用它们），
游戏会打 "不允许属性" 的内容日志——**仅为提示性校验，解析照常生效**。想消除警告：
`absorbs_input` 直接删（同默认值 true）；`load_screen_immediately` 保留（功能需要，
警告无害）。
