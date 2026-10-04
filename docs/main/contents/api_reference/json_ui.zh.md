# JSON UI（客户端）

`src-client/ll/api/ui/` · **仅客户端**

## 概述

JSON UI 模块让 mod 基于游戏自带的 JSON UI 引擎构建界面：

- **`JsonScreen`**——把 JSON UI 定义的界面上屏（模态菜单、全屏界面、非模态 HUD 碎片）；
- **`OverlayElement`**——把控件注入已有场景（通常是 HUD）的控件树；
- **`CustomUIRendererRegistry`**——给 JSON `"type": "custom"` 控件绑定自定义渲染器；
- **`UISceneCreatedEvent`**——每个 UI 场景创建时发布的事件。

基类不含任何渲染代码、不预设任何控件：布局由子类发布的 JSON UI 定义决定，渲染由子类自己的 `MinecraftUICustomRenderer` 实现决定。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/ui/JsonScreen.h` | JSON UI 界面基类 |
| `ll/api/ui/OverlayElement.h` | 注入已有场景的非模态叠加元素基类 |
| `ll/api/ui/CustomUIRendererRegistry.h` | 渲染器名到 mod 渲染器工厂的注册表 |
| `ll/api/event/render/UISceneCreatedEvent.h` | UI 场景创建事件 |

注册供界面 JSON（`button_mappings`）消费的自定义输入按钮见 [Input（输入系统）](input.zh.md)（`ll/api/input/ScreenButtonRegistry.h`）。

## 核心类

### JsonScreen

JSON UI 界面基类：负责界面的宿主生命周期（创建场景并压入屏幕栈）。

```cpp
namespace ll::ui {
class JsonScreen {
public:
    // JSON UI 界面定义名（带命名空间，如 "mymod_screen.my_screen"），
    // 由子类以资源包形式发布。
    virtual std::string getScreenName() const = 0;

    // 子类希望通过 onButtonEvent() 接收的按钮名（JSON "to_button_id"）。
    // 默认：无。
    virtual std::vector<std::string> getHandledButtonIds() const;

    virtual void onOpen();                                              // 打开后
    virtual void onClose();                                             // 任意退出路径
    virtual void onTick();                                              // 打开期间每 tick
    virtual bool onButtonEvent(std::string const& buttonId, UIPropertyBag* propertyBag);

    void      open();       // 创建场景并入栈（已打开时为空操作）
    void      close();      // 弹出场景（未打开时为空操作）
    bool      isOpen() const;
    UIScene*  scene() const;
};
}
```

行为说明：

- **本类与模态性无关**——行为由界面 JSON 属性决定。模态容器类界面用 `is_modal` / `is_showing_menu` / `absorbs_input`；聊天栏式非模态界面不写它们；HUD 类常驻场景再加 `render_game_behind`。输入路由（栈顶独占）、焦点系统、手柄虚拟光标、鼠标抓取/释放全部随这些属性自动生效。
- **退出路径**：controller 重写了 `ScreenController::tryExit()`——框架把 `button.menu_exit` 汇入这个虚函数——弹出本屏并消费事件，因此原版惯例的 `menu_cancel -> button.menu_exit` JSON 映射可以直接使用。`button.menu_cancel` 自映射同样由默认 handler 处理。需要完全接管 Esc 时，把 `"button.menu_cancel"` 列入 `getHandledButtonIds()` 并在 `onButtonEvent()` 里处理。
- `open()` / `close()` 必须在客户端线程调用（可用 `ll::thread::ClientThreadExecutor` 切换）。

```cpp
class MyScreen : public ll::ui::JsonScreen {
public:
    std::string getScreenName() const override { return "mymod_screen.my_screen"; }

    std::vector<std::string> getHandledButtonIds() const override {
        return {"button.mymod_screen_zoom_in", "button.mymod_screen_zoom_out"};
    }

    void onOpen() override  { /* ... */ }
    void onClose() override { /* ... */ }

    bool onButtonEvent(std::string const& name, UIPropertyBag*) override {
        if (name == "button.mymod_screen_zoom_in")  { /* ... */ return true; }
        if (name == "button.mymod_screen_zoom_out") { /* ... */ return true; }
        return false;
    }
};

static MyScreen gMyScreen;
// 打开：gMyScreen.open();  关闭：gMyScreen.close();
```

### OverlayElement

非模态叠加元素基类：把一个自定义控件挂到已有场景（默认 HUD）的控件树上，跟随宿主场景的可见性/透明度传播（含 F1 隐藏 HUD）与重建生命周期——宿主场景（重）创建时控件自动（重）注入。

```cpp
namespace ll::ui {
class OverlayElement {
public:
    // 渲染器名（JSON "renderer" 属性值，如 "mymod_hud_renderer"）。
    virtual std::string getRendererName() const = 0;
    // 要注入的控件定义名（如 "mymod_hud.example"），定义内部引用 getRendererName()。
    virtual std::string getControlDefName() const = 0;
    // 创建渲染器实例。每个宿主控件获得独立实例。
    virtual std::shared_ptr<MinecraftUICustomRenderer> createRenderer() = 0;

    // 宿主场景名。默认："hud.hud_screen"。
    virtual std::string_view getTargetSceneName() const;
    // 宿主场景中的父控件名（如 "not_centered_gui_elements"）。
    virtual std::string_view getTargetParentControlName() const = 0;

    virtual void onAttach(UIControl& control); // 默认：空实现
    virtual void onDetach();                   // 默认：空实现

    void enable();          // 注册渲染器、监听宿主场景创建、注入控件
    void disable();         // 摘除并注销
    bool isAttached() const;
};
}
```

```cpp
class MyHudOverlay : public ll::ui::OverlayElement {
public:
    std::string      getRendererName() const override   { return "mymod_hud_renderer"; }
    std::string      getControlDefName() const override { return "mymod_hud.example"; }
    std::string_view getTargetParentControlName() const override {
        return "not_centered_gui_elements";
    }
    std::shared_ptr<MinecraftUICustomRenderer> createRenderer() override {
        return std::make_shared<MyHudRenderer>();
    }
};

static MyHudOverlay gMyHud;
// mod 启用：gMyHud.enable();  mod 停用：gMyHud.disable();
```

底层原语 `attachCustomControl`（`ll/api/ui/CustomControlInjection.h`）仍然可用，供需要手动操作控件树的场景；常规用途由 `OverlayElement` 覆盖。

### CustomUIRendererRegistry

把渲染器名（JSON `"renderer"` 属性值）绑定到 mod 的渲染器工厂。游戏硬编码了自己的渲染器名（`heart_renderer`、`hotbar_renderer` 等），注册同名会失败。每个使用该名字的控件都会获得独立的渲染器实例（clone 语义）。

```cpp
namespace ll::ui {
class CustomUIRendererRegistry {
public:
    static Expected<> registerRenderer(std::string name, Factory factory);
    static Expected<> registerRenderer(std::string name, std::shared_ptr<UICustomRenderer> prototype);
    static bool       unregisterRenderer(std::string_view name);
    static bool       isRegistered(std::string_view name);
};
}
```

渲染器继承 `MinecraftUICustomRenderer` 并重写 `clone()`、`update()`、`frameUpdate()`、`render()`。`OverlayElement` 会在 `enable()` 时自动注册；独立界面（`JsonScreen`）在 `open()` 前自行注册。


### UISceneCreatedEvent

任何 JSON UI 场景创建后发布（HUD、背包、自定义界面都会经过）。来自缓存的场景不会重复发布，但场景重建（资源包重载、分辨率变化、跨维度）会重新创建并再次发布。

```cpp
namespace ll::event {
class UISceneCreatedEvent : public RenderEvent {
public:
    std::string const&          getScreenName() const; // 如 "hud.hud_screen"
    std::shared_ptr<UIScene> const& scene() const;
    UIScene*                    tryGetUIScene() const;
};
}
```

## JSON 定义键

界面与叠加控件都是普通的 JSON UI 定义，随 mod 资源包发布。下面列出 mod 最常用的定义类型中游戏实际解析的键。

### `"type": "screen"`——屏幕设置

| 键 | 默认值 | 作用 |
|----|--------|------|
| `is_showing_menu` | `true` | 把场景标记为菜单；栈上有菜单时，游戏每 tick 的鼠标抓取被抑制（菜单期间光标保持释放的关键）。HUD 类屏幕显式声明 `false` |
| `absorbs_input` | `true` | 场景吸收输入，不再传给下层场景/游戏 |
| `render_game_behind` | `true` | 渲染本场景身后的游戏画面/下层场景。全屏菜单设 `false` |
| `is_modal` | `false` | 在焦点/输入系统中划出模态边界 |
| `should_steal_mouse` | `false` | **为玩法抢占鼠标**（不是"为 UI 释放光标"）。菜单绝不声明；只有准星这类游戏态屏幕为 `true` |
| `load_screen_immediately` | `false` | 场景创建时同步加载 JSON（默认异步）。要求打开即完整的屏幕用 `true` |
| `render_only_when_topmost` | `true` | 仅在栈顶时渲染 |
| `low_frequency_rendering` | `false` | 低频渲染（HUD 用 `true` 省电） |
| `send_telemetry` | `true` | 界面遥测上报。mod 屏幕建议 `false` |
| `cache_screen` | `false` | 缓存场景，重复打开不重建 |
| `screen_not_flushable` | `false` | 场景不参与 flush（资源重载时保留） |
| `screen_draws_last` | `false` | 强制置顶于其他场景绘制 |
| `force_render_below` | `false` | 强制在下层渲染 |
| `close_on_player_hurt` | `false` | 玩家受伤时自动关闭 |
| `gamepad_cursor` | `false` | 启用手柄虚拟光标 |
| `always_accepts_input` | `false` | 不论焦点/栈位置始终接收输入 |
| `vertical_scroll_delta` | `20.0` | 垂直滚动步长（浮点） |
| `controls` | — | 屏幕内容控件树（通常单个 `content@namespace.def`） |
| `button_mappings` | — | 屏幕级按钮映射（见[输入系统](input.zh.md)） |

### `"type": "input_panel"`——输入面板

| 键 | 作用 |
|----|------|
| `button_mappings` | 按钮映射数组（`from_button_id` / `to_button_id` / `mapping_type` / `scope` / `consume_event` / `button_up_right_of_first_refusal` / `input_mode_condition` 等） |
| `gesture_tracking_button` | 手势跟踪按钮：按住期间指针位移写入控件属性包（`#gesture_mouse_delta_x/y`），由渲染器每帧消费——拖拽平移的基础 |
| `always_handle_controller_direction` | 把手柄摇杆方向转成 `ControllerDirectionEvent`（摇杆拖拽） |
| `always_handle_pointer` | 指针不在控件范围内也处理指针事件 |
| `always_listen_to_input` | 无焦点也接收输入 |
| `hover_enabled` | 启用悬停事件 |
| `consume_hover_events` | 消费悬停事件（不再传给下层控件） |
| `prevent_touch_input` | 禁止触屏输入 |
| `focus_enabled` / `focus_identifier` | 参与焦点系统 |

### `"type": "custom"`——自定义渲染控件

| 键 | 作用 |
|----|------|
| `renderer` | 渲染器名——原版硬编码名，或经 `CustomUIRendererRegistry::registerRenderer` 注册的 mod 名 |

### 通用控件属性

所有控件类型可用：`size`（绝对值、`"100%"`、`"fill"`、`"cm"`）、`offset`、`anchor_from` / `anchor_to`（九宫格锚点）、`layer`（同级绘制层序）、`alpha`（沿控件树传播——F1 隐藏 HUD 经此生效）、`controls`、`bindings`（数据绑定，驱动可见性/文本）、`animations`、`ignored`、`variables` / `$xxx`、`inherits`（`"name@namespace.base"`）。

## 编写资源包

JSON UI 定义随 mod 的 `resource_packs/` 目录发布。LeviLamina 启动时会自动把每个 mod 的 `resource_packs/` 注册为资源包来源——**无需也不应**在游戏里手动导入：相同 UUID 的包会被游戏判定为"重复的资源包"而拒绝，导致包静默缺失。

目录结构：

```text
MyMod/                                  （mod 包）
├── manifest.json                       mod 清单
└── resource_packs/
    └── MyModUI/                        一个 mod 可含多个包
        ├── manifest.json               资源包清单
        ├── textures/                   可选的自定义纹理
        └── ui/
            ├── _ui_defs.json           登记本包的 UI 定义文件
            └── my_mod.json             定义本体
```

### 资源包 `manifest.json`

标准的资源包清单，每个包使用全新生成的 UUID：

```json
{
    "format_version": 2,
    "header": {
        "name": "MyMod UI",
        "description": "MyMod HUD overlay controls",
        "uuid": "7f3a2c10-9b6e-4c4a-9d21-3c2c7a5f8101",
        "version": [1, 0, 0],
        "min_engine_version": [1, 21, 0]
    },
    "modules": [
        {
            "type": "resources",
            "uuid": "5c1e9a20-4f7b-4e2c-8a3d-9b0c6d1e2f42",
            "version": [1, 0, 0]
        }
    ]
}
```

### `ui/_ui_defs.json`

登记本包的 UI 定义文件——每个自定义 UI JSON 都必须列在这里，否则游戏不会解析它：

```json
{
    "ui_defs": [
        "ui/my_mod.json"
    ]
}
```

### `ui/my_mod.json`

一个文件携带一个 `"namespace"` 和任意数量的定义；定义在 C++ 与其他 JSON（`inherits`、`controls` 条目）中以 `namespace.name` 引用：

```json
{
    "namespace": "my_mod",

    "example": {
        "type": "custom",
        "renderer": "my_mod_hud_renderer",
        "size": ["100%", "100%"]
    },

    "my_screen": {
        "type": "screen",
        "is_showing_menu": true,
        "render_game_behind": false,
        "send_telemetry": false,
        "load_screen_immediately": true,
        "controls": [
            { "content@my_mod.my_screen_content": {} }
        ],
        "button_mappings": [
            {
                "from_button_id": "button.menu_cancel",
                "to_button_id": "button.menu_exit",
                "mapping_type": "global"
            }
        ]
    },

    "my_screen_content": {
        "type": "input_panel",
        "size": ["100%", "100%"],
        "gesture_tracking_button": "button.my_mod_drag",
        "button_mappings": [
            {
                "from_button_id": "button.menu_select",
                "to_button_id": "button.my_mod_drag",
                "mapping_type": "pressed",
                "button_up_right_of_first_refusal": true
            }
        ]
    }
}
```

### 在 C++ 中对接

- `JsonScreen::getScreenName()` 返回 `"my_mod.my_screen"`；
- `OverlayElement::getControlDefName()` 返回 `"my_mod.example"`，`getRendererName()` 返回 `"my_mod_hud_renderer"`；
- `button_mappings` 里的自定义按钮名（如 `button.my_mod_drag`）经 `ScreenButtonRegistry` 注册（见[输入系统](input.zh.md)），在 `JsonScreen::onButtonEvent()` 中处理；
- 自定义纹理放在包的 `textures/` 目录下，JSON 中以 `textures/...` 路径引用（`"texture": "textures/ui/my_icon"`）。

### 注意事项

- 所有名字都带命名空间（`my_mod.*`、`my_mod_*_renderer`、`button.my_mod_*`），避免与原版及其他 mod 冲突；
- 内容日志中的属性白名单警告（如裸 screen 定义上的 `load_screen_immediately`）仅为提示性校验，解析照常生效；
- 场景重建（资源包重载、分辨率变化）会重新解析这些定义并再次发布 `UISceneCreatedEvent`；`OverlayElement` 自动重挂。

## 平台说明

- 此模块**仅限客户端**，在服务端构建中不可用；
- 场景生命周期由引擎管理：世界退出时销毁，资源包重载/分辨率变化时重建；`OverlayElement` 自动重挂，`JsonScreen` 场景由 mod 重新打开；
- 内容日志里的属性白名单警告（如裸 screen 定义上的 `load_screen_immediately`）仅为提示性校验，解析照常生效。

## 相关模块

- [Input（输入系统）](input.zh.md) — 注册自定义按钮（`ScreenButtonRegistry`）与 `button_mappings` 语义
- [Event（事件系统）](event.zh.md) — `UISceneCreatedEvent` 是事件系统的一部分
