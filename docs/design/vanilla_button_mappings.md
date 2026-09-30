# 原版 button_mappings 全解

> 调研版本：26.51 client（`26.51_client.i64`）+ vanilla_base 资源包（1.26.40，布局未变）
> 关键代码：`UIControlFactory::_populateInputComponent`（解析 JSON）、
> `InputComponent::handleButtonEvent` / `_shouldHandlePressedMapping` /
> `_sendButtonScreenEvent`（运行时匹配与派发）

## 1. 是什么

`button_mappings` 把一个**物理/抽象输入按钮**（`from_button_id`，如鼠标左键
`button.menu_select`、Esc `button.menu_cancel`）转换成**命名按钮事件**
（`to_button_id`），以 `ScreenEvent{ButtonEvent}` 的形式派发给控件组件与
ScreenController。它出现在两个层级：

- **控件级**：写在带 `InputComponent` 的控件上（`input_panel`、按钮、文本框等），
  由 `InputComponent::handleButtonEvent` 逐条匹配。
- **屏幕级**：写在 `"type": "screen"` 的定义上，事件最终由 ScreenController 的命名
  按钮处理器消费（`registerButtonEventHandler`，即 `ll::ui::JsonScreen::onButtonEvent`
  的入口）。屏幕级映射（如 `menu_cancel` → `menu_exit`）不接管的会落回游戏自带的
  返回导航。

## 2. mapping_type（4 种）

`ButtonMappingType : uint { Global=0, DoublePressed=1, Pressed=2, Focused=3 }`

| 值 | 语义 | 原版用例 |
|---|---|---|
| `"global"` | 无条件触发：只要按钮事件到达该控件就转换，不看焦点/悬停 | 屏幕级 `menu_cancel`→`menu_exit`；HUD 快捷键 |
| `"pressed"` | 按下/抬起边沿都触发，且要经过**悬停/作用域检查**（`_shouldHandlePressedMapping`：指针在控件范围内、或手柄模式、或忽略作用域）。**按钮 Up 事件也会派发**，是拖拽/长按跟踪的基础 | 按钮控件按下态、`gesture_tracking_button` 手势跟踪（皮肤预览旋转、全景图拖动）、滑块方向键微调 |
| `"focused"` | 仅当控件持有焦点（owner 标志位 `& 0x82`）时触发 | 文本框选中时的 `menu_ok`、聊天框选中时的历史翻阅 |
| `"double_pressed"` | 短时间内对同一按钮连按两次才触发（`_detectDoubleClick` 判定） | 容器界面双击合并堆叠（`button.anvil_coalesce_stack` 等） |

省略 `mapping_type` 或写无法识别的值时按 `global` 行为处理（分发 switch 的 default 分支）。

## 3. 全部属性

`ScreenButtonMapping` 结构体字段 ↔ JSON 键一一对应（解析见 `_populateInputComponent`）：

| JSON 键 | 类型 / 默认 | 作用 |
|---|---|---|
| `from_button_id` | string，必填 | 源按钮（见 §6 清单）。运行时按 StringHash 匹配 |
| `to_button_id` | string，必填 | 目标命名按钮，随 `ButtonEvent` 派发；ScreenController 按此名分发 |
| `mapping_type` | string，默认按 global | 见 §2 |
| `scope` | string，默认 controller | 事件传播范围，见 §4 |
| `button_up_right_of_first_refusal` | bool，默认 false | 见 §5 |
| `consume_event` | bool，默认 true | 转换后是否消费原始按钮事件。`false` 时同一按钮可继续被后续控件/映射处理（原版 11 处显式关闭） |
| `input_mode_condition` | string，默认 none | 输入设备条件，见 §7 |
| `handle_select` | bool | 控件获得焦点（被选中）时也触发该映射的按钮事件 |
| `handle_deselect` | bool | 控件失去焦点时也触发 |
| `ignore_input_scope` | bool，默认 false | 跳过悬停/范围检查：控件处于可交互状态（owner 标志 `& 0x20`）即触发。原版用于滑块的方向键微调（不要求指针悬停在滑块上） |
| `alternate_input_scope` | bool，默认 false | 用"内容面板悬停"（`_getContentPanelHover`）替代常规范围检查 |

相关但**不属于映射**的控件级属性（同由 `_populateInputComponent` 解析）：
`consume_hover_events`（是否消费悬停事件）、`always_handle_pointer`、
`always_handle_controller_direction`（摇杆方向转 `ControllerDirectionEvent`，
GestureComponent 的摇杆拖拽靠它）、`gesture_tracking_button`（见 §5）、
`always_listen_to_input` 等。

## 4. scope（事件传播范围）

`ScreenEventScope : schar { Controller=0, View=1, Global=2 }`

| 值 | 语义 |
|---|---|
| `"controller"` | 事件只发给 ScreenController（命名按钮处理器/路由逻辑）。**缺省值**——不写 `scope` 或写无法识别的值都是它。屏幕级 `menu_exit` 这类纯逻辑按钮用它 |
| `"view"` | 事件发给控件树（按钮控件的按下动画、焦点移动等可视反馈） |
| `"global"` | 两者都发 |

对照 vanilla_base：`"scope": "view"` 出现 150 次（如 `menu_up`→`menu_up` 透传给控件树做焦点导航），`"scope": "controller"` 仅 7 次且都是显式声明。

## 5. button_up_right_of_first_refusal（按钮抬起的优先送达权）

精确语义（`_shouldHandlePressedMapping` 末尾分支 + `handleButtonEvent` 的
`requestButtonUpRightOfFirstRefusal` 调用）：

- 按钮**按下**时若映射带此标志，控件向 `ScreenInputContext` 登记"该按钮的 Up 事件我优先"；
- 按钮**抬起**时，即使指针已移出控件范围（常规悬停检查失败），只要该映射的上一次状态是
  Down（`lastButtonState == Down`），Up 事件仍然派发给这个控件。

用途：**按下后拖出控件再松开也能收到抬起事件**，是拖拽手势（`GestureComponent`
的 `mButtonDown` 清理）和按钮按下态复位的必需品。原版 24 处显式开启，包括
`gesture_tracking_button` 指向的映射（皮肤预览、全景图）。

**配套机制**：`gesture_tracking_button`（控件级属性，非映射属性）指定哪个按钮是
手势跟踪按钮。该按钮 Down/Up 期间，`GestureComponent` 把 PointerMoveEvent 的位移与
ControllerDirectionEvent 的方向写入宿主控件属性包的 `#gesture_mouse_delta_x/y` +
`#gesture_delta_source`，由渲染器（如 `PanoramaRenderer`）每帧读取并清零。

## 6. 常见 from_button_id（vanilla_base 实测出现频次）

| 按钮 | 物理来源 | 频次 |
|---|---|---|
| `button.menu_select` | 鼠标左键 / 手柄A | 238 |
| `button.menu_ok` | 回车 / 确认 | 196 |
| `button.menu_cancel` | Esc / 手柄B | 147 |
| `button.controller_select` / `controller_secondary_select` | 手柄 A / X | 52/53 |
| `button.controller_back` | 手柄 B/返回 | 44 |
| `button.menu_secondary_select` | 鼠标右键 | 43 |
| `button.menu_up/down/left/right` | 方向键 / 十字键（焦点导航） | 29-38 |
| `button.menu_tab_left/right` | 手柄 LB/RB / PageUp/PageDown | 37 |
| `button.menu_inventory_drop(_all)` | 丢弃（Q / Ctrl+Q） | 20 |
| `button.menu_auto_place` | 自动整理 | 20 |
| `button.slot0`-`slot9` | 快捷栏数字键 1-9/0 | ~8 each |
| `button.menu_exit` | 界面退出（路由返回） | 6 |
| `button.menu_clear` | 清除（如文本框清空） | 8 |
| `button.menu_textedit_up/down` | 文本编辑态上下键 | 聊天历史 |

命名按钮（`to_button_id`）是自由字符串（StringHash），mod 可自定义
（如 `button.world_map_zoom_in`），由自己的 ScreenController 处理器消费。

## 7. input_mode_condition（输入设备条件）

`ButtonMappingInputModeCondition : uint { None=0, NotGamepad=1, Gamepad=2 }`

| 值 | 语义 |
|---|---|
| 不写 / `"none"` | 不限设备 |
| `"gamepad"` | 仅手柄输入时触发 |
| `"not_gamepad"` | 仅键鼠/触屏时触发 |
| `"gamepad_and_not_gaze"` | vanilla JSON 中出现（4 次），按 Gamepad 条件处理 |

## 8. 事件流（一次按键的完整路径）

```
键盘/手柄/鼠标 → InputHandler（ButtonRepeater 处理按住重复）
  → 抽象按钮 button.menu_xxx（ButtonEvent, Down/Up）
  → UIScene::handleButtonEvent 遍历 ScreenView 的输入控件
  → InputComponent::handleButtonEvent 逐条匹配 button_mappings
      （类型过滤 → input_mode_condition → 悬停/作用域检查 → double-click 检测）
  → _sendButtonScreenEvent 生成 ScreenEvent{ButtonEvent, to_button_id, scope}
  → 控件组件 receive（GestureComponent/ButtonComponent/...，按 scope）
  → ScreenController::handleButtonEvent（命名按钮处理器；未消费则落回路由/返回导航）
```

**长按连续输入不在此体系内**：命名按钮事件只在按下边沿派发一次（键盘不重复派发）。
原版菜单的"按住方向键连续滚动"由焦点/滚动组件内部状态机完成；摇杆持续方向走
`ControllerDirectionEvent`（DirectionId 通道，非按钮事件）。

## 9. 参考示例（CoralMap 大地图，已实测）

```jsonc
"world_map_content": {
    "type": "input_panel",
    "always_handle_pointer": true,
    "always_handle_controller_direction": true,       // 摇杆 → ControllerDirectionEvent
    "gesture_tracking_button": "button.world_map_drag", // 拖拽手势跟踪按钮
    "button_mappings": [
        { "from_button_id": "button.menu_select",       // 左键按下 → 开始手势跟踪
          "to_button_id": "button.world_map_drag",
          "mapping_type": "pressed",
          "button_up_right_of_first_refusal": true },    // 拖出控件再松开也能收到 Up
        { "from_button_id": "button.menu_tab_right",    // RB/PageDown → 放大
          "to_button_id": "button.world_map_zoom_in",
          "mapping_type": "global" },
        { "from_button_id": "button.menu_up",           // 方向键 → 点按平移
          "to_button_id": "button.world_map_pan_up",
          "mapping_type": "global" }
    ]
},
"world_map_screen": {
    "type": "screen",
    "button_mappings": [
        { "from_button_id": "button.menu_cancel",       // Esc → 游戏路由返回（默认关闭路径）
          "to_button_id": "button.menu_exit",
          "mapping_type": "global" }                     // 屏幕级，scope 缺省 = controller
    ]
}
```
