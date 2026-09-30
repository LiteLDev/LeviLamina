# JsonScreen / OverlayElement 实现计划（方案二）

> 状态：实现计划（未实现）
> 适用范围：client（`--target_type=client`），代码位于 `src-client/ll/api/ui/`
> 前置调研版本：26.51 client（`26.51_client.i64`）
> 约束：**两个基类都不包含任何渲染代码、不预设任何 custom 控件**，布局由子类 JSON 决定、
> 渲染由子类 renderer 决定（兼容 ImGui 等任意绘制方式）。

## 0. 原版机制依据（摘要）

- 模态 = 把 `UIScene` push 进屏幕栈：`SceneFactory::createUIScene(name, controller)` +
  `ISceneStack::pushScreen(scene, flush)`。push 之后输入路由（栈顶独占）、焦点系统
  （`FocusManager`）、手柄虚拟光标（`isGamepadCursorEnabled`）、释放鼠标
  （`should_steal_mouse`）全部自动生效。参照 `LocalPlayer::openInventory`（`0x144765870`）。
- 非模态 = 把控件注入已有场景的控件树（如 `hud.hud_screen` 的 `not_centered_gui_elements`），
  渲染走 `UICustomRenderer`/`MinecraftUICustomRenderer`；可见性/透明度经父树
  `#hud_alpha` → `mPropagatedAlpha` 传播。
- `ScreenController` 有公开构造函数 `ScreenController(bool useTaskGroup)`（MCAPI）、无纯虚函数，
  可直接继承做空壳 controller，无需 model。
- 关键 LL API：`ll::service::bedrock::getClientInstance()`、`ClientInstance::getSceneFactory()`、
  `ClientInstance::getCurrentSceneStack()`、`SceneStack::schedulePopScreen(int)`。

## 1. 建设顺序（依赖关系）

| 步骤 | 内容 | 依赖 |
| --- | --- | --- |
| 1 | `CustomUIRendererRegistry`（hook `UIControlFactory::_createFromResolvedDef`，按 renderer 名补装渲染器） | 无 |
| 2 | `UISceneCreatedEvent`（hook `SceneFactory::createUIScene`，origin 后发布） | 无 |
| 3 | `attachCustomControl` / `detachCustomControl`（运行时控件注入） | 2 |
| 4a | `JsonScreen` | 无（可独立于 1-3 先做） |
| 4b | `OverlayElement` | 1、2、3 |

另有关联任务（已记录在 todolist.md）：`HudVisibilityChangedEvent`（hook
`BaseOptionRegistry::setHideGUI`）。

## 2. JsonScreen（模态基类）

文件：`src-client/ll/api/ui/JsonScreen.{h,cpp}`

```cpp
#pragma once

#include "ll/api/base/Macro.h"
#include <memory>
#include <string>

class AbstractScene;
class UIScene;
class UIPropertyBag;

namespace ll::ui {

/// 模态界面基类：负责界面的"宿主"生命周期（创建场景、压入屏幕栈、弹出），
/// 不包含任何渲染代码，也不预设任何控件。
/// 界面内容完全由子类发布的 JSON UI 定义决定（子类可在自己的 JSON 里放任意
/// 控件，包括自行注册的 custom renderer 控件——例如 ImGui 翻译层）。
class JsonScreen {
public:
    JsonScreen();
    virtual ~JsonScreen();

    /// JSON UI 屏幕定义名（带命名空间，如 "coral_map.world_map"）。
    /// 该定义由子类以资源包形式发布，is_showing_menu / should_steal_mouse /
    /// absorbs_input / button_mappings 等属性全在 JSON 里声明。
    virtual std::string getScreenName() const = 0;
    /// 界面打开后回调（对应 ScreenController::onOpen）。默认空实现。
    virtual void onOpen();
    /// 界面关闭回调（任意退出路径都会触发：Esc、close()、场景被销毁）。默认空实现。
    virtual void onClose();
    /// 每帧 tick（对应 ScreenController::tick）。默认空实现。
    virtual void onTick();
    /// 按钮/控件事件。返回 true 表示已消费（不再走框架默认处理，如
    /// button.menu_exit 的退出行为）。默认返回 false。
    virtual bool onButtonEvent(std::string const& buttonId, UIPropertyBag* propertyBag);
    /// （实现时新增）声明子类关心的按钮名列表：框架的按钮事件按 uint 哈希分发，
    /// 无法反查名字，因此 controller 在构造时按 getHandledButtonIds() 返回的
    /// 名字逐一 registerButtonEventHandler，命中后转发 onButtonEvent。
    virtual std::vector<std::string> getHandledButtonIds() const;

    /// 打开界面：创建场景并压入屏幕栈。已打开时为空操作。
    /// 必须在客户端线程调用（可用 ll::thread::ClientThreadExecutor 切换）。
    LLAPI void open();
    /// 关闭界面（schedulePopScreen）。未打开时为空操作。
    LLAPI void close();
    /// 是否处于打开状态。
    LLNDAPI bool isOpen() const;
    /// 当前场景（未打开时为空）。子类可用它取控件树做后期修改。
    LLNDAPI UIScene* scene() const;

private:
    class Controller; // 内部 controller：ScreenController 子类，事件转发到本类
    std::shared_ptr<Controller>  mController;
    std::weak_ptr<AbstractScene> mScene;
};

} // namespace ll::ui
```

`.cpp` 核心逻辑：

```cpp
class JsonScreen::Controller : public ::ScreenController {
    JsonScreen& mOwner;
public:
    explicit Controller(JsonScreen& owner) : ::ScreenController(false), mOwner(owner) {}

    void onOpen() override { mOwner.onOpen(); }
    void onTerminate() override { mOwner.onClose(); }  // 任意销毁路径都通知
    ::ui::DirtyFlag tick() override { mOwner.onTick(); return ::ScreenController::tick(); }

    ::ui::ViewRequest handleEvent(::ScreenEvent& ev) override {
        // TODO(实现时核对)：从 ScreenEvent 提取按钮名与 propertyBag 的字段名
        if (是按钮事件 && mOwner.onButtonEvent(按钮名, ev的propertyBag)) {
            return ::ui::ViewRequest::ConsumeEvent;
        }
        return ::ScreenController::handleEvent(ev);    // 默认处理 button.menu_exit 等
    }
};

void JsonScreen::open() {
    if (isOpen()) return;
    auto client = ll::service::getClientInstance();
    if (!client) return;
    mController = std::make_shared<Controller>(*this);
    auto scene  = client->getSceneFactory().createUIScene(getScreenName(), mController);
    mScene      = scene;
    client->getCurrentSceneStack()->pushScreen(scene, /*flush=*/false);
}

void JsonScreen::close() {
    if (auto client = ll::service::getClientInstance(); client && isOpen()) {
        client->getCurrentSceneStack()->schedulePopScreen(1);
    }
}
```

要点：

- Esc 关闭：子类 JSON 里 `button.menu_cancel → button.menu_exit`（global）+ 框架默认
  `tryExit()`，基类零代码；
- 子类想要 ImGui：自己注册 renderer、在自己的 JSON 里放 custom 控件，基类不介入；
- `onClose` 由 `Controller::onTerminate` 触发，覆盖 Esc、close()、世界退出销毁场景等所有路径。

## 3. OverlayElement（非模态基类）

文件：`src-client/ll/api/ui/OverlayElement.{h,cpp}`

```cpp
#pragma once

#include "ll/api/base/Macro.h"
#include <memory>
#include <string>
#include <string_view>

class MinecraftUICustomRenderer;
class UIControl;

namespace ll::ui {

/// 非模态叠加元素基类：把一个自定义控件挂到已有场景（默认 HUD）的控件树上，
/// 跟随宿主场景的可见性/透明度/重建生命周期。
/// 不包含任何渲染代码、不预设控件：布局由子类的 JSON 定义决定，渲染由子类的
/// MinecraftUICustomRenderer 实现决定（可为 ImGui 翻译层）。
class OverlayElement {
public:
    OverlayElement();
    virtual ~OverlayElement();

    /// 渲染器名（JSON "renderer" 属性值，如 "coral_minimap_renderer"）。
    virtual std::string getRendererName() const = 0;
    /// 要注入的控件定义名（子类资源包里的 JSON 定义，如 "coral_map.minimap"），
    /// 定义内部引用 getRendererName()。
    virtual std::string getControlDefName() const = 0;
    /// 创建渲染器原型。每个宿主控件实例化时会再 clone() 一份。
    virtual std::shared_ptr<MinecraftUICustomRenderer> createRenderer() = 0;

    /// 宿主场景名。默认 "hud.hud_screen"。
    virtual std::string_view getTargetSceneName() const;
    /// 宿主场景中的父控件名（如 "not_centered_gui_elements"）。
    virtual std::string_view getTargetParentControlName() const = 0;

    /// 控件挂上/摘离控件树时回调（宿主场景重建会重复触发）。默认空实现。
    virtual void onAttach(UIControl& control);
    virtual void onDetach();

    /// 启用：注册渲染器、监听宿主场景创建、注入控件。幂等。
    LLAPI void enable();
    /// 停用：从控件树摘除并注销渲染器。幂等。
    LLAPI void disable();
    LLNDAPI bool isAttached() const;

private:
    struct Impl;
    std::unique_ptr<Impl> mImpl;
};

} // namespace ll::ui
```

`.cpp` 核心逻辑：

```cpp
void OverlayElement::enable() {
    // 1. 注册渲染器名（每个宿主控件都会经工厂拿到独立实例，clone 语义）
    CustomUIRendererRegistry::registerRenderer(getRendererName(), createRenderer());

    // 2. 监听场景创建事件，命中目标场景就注入
    mImpl->listener = EventBus::getInstance().emplaceListener<UISceneCreatedEvent>(
        [this](UISceneCreatedEvent& ev) {
            if (ev.getScreenName() != getTargetSceneName()) return;
            if (auto* s = ev.tryGetUIScene()) attach(*s);
        });

    // 3. 宿主场景可能已存在（mod 后加载）——遍历当前场景栈立即尝试一次
    if (auto client = ll::service::getClientInstance()) { /* 查找并 attach */ }
}

void OverlayElement::attach(UIScene& scene) {
    auto control = attachCustomControl(scene, getTargetParentControlName(), getControlDefName());
    if (control) { mImpl->attached = *control; onAttach(**control); }
}

void OverlayElement::disable() {
    if (mImpl->attached) { /* detachCustomControl(...); onDetach(); */ }
    mImpl->listener.reset();
    CustomUIRendererRegistry::unregisterRenderer(getRendererName());
}
```

生命周期自动正确：宿主场景重建 → 事件再触发 → 重新注入；控件树重建 → 注册表 hook
重新装渲染器；F1 隐藏 HUD / HUD 不透明度 → 父树 `#hud_alpha` 经 `mPropagatedAlpha`
传入子类 renderer（子类绘制时乘上即可）。

## 4. 子类 JSON 约定（各自资源包发布，基类无预设）

模态示例：

```json
{ "namespace": "coral_map",
  "world_map@common.base_screen": {
    "is_showing_menu": true, "should_steal_mouse": true, "absorbs_input": true,
    "$screen_content": "coral_map.world_map_content",
    "button_mappings": [
      { "from_button_id": "button.menu_cancel", "to_button_id": "button.menu_exit", "mapping_type": "global" }
    ] },
  "world_map_content": { "type": "panel", "size": ["100%", "100%"] } }
```

非模态示例：

```json
{ "namespace": "coral_map",
  "minimap": { "type": "custom", "renderer": "coral_minimap_renderer",
               "size": [110, 110], "anchor_from": "top_right", "anchor_to": "top_right",
               "offset": [-10, 10] } }
```

## 5. 实现时验证点

- `ScreenEvent` 提取按钮名的字段名（`type` + 数据成员）需对照二进制核对；
- mod JSON 资源包加载路径（LL 客户端是否直接加载 mod 附带资源包，否则放
  `development_resource_packs`）；
- `createUIScene` 对 mod 命名空间定义的解析（`IUIDefRepository`）真机验证；
- `open()/close()`/`enable()/disable()` 的线程约束（客户端 UI 线程），必要时内部用
  `ClientThreadExecutor` 保护。

## 6. 工程清单（按 AGENTS.md）

- [ ] 公共 API 全部 Doxygen 注释；错误返回 `Expected<>`；不放异常；
- [ ] `CHANGELOG.md` `## [Unreleased]` 加 `Added`；
- [ ] `docs/main/contents` 双语使用文档并注册 `mkdocs.yml`；
- [ ] 提交前 `python scripts/format_all.py`；
- [ ] `xmake f -a x64 -m debug -p windows -y --target_type=client` 构建验证。

---

# 附：CoralMap 迁移示例

现状：CoralMap 通过 hook `MinecraftUIRenderContext::flushText` 初始化 DX11Hook，用自带
D3D11 + ImGui 直接画到交换链，并用 `InputBlocker` 手动拦输入。问题：不响应 F1、不吃
HUD 不透明度/安全区、输入处理与游戏栈冲突。

## 小地图 → OverlayElement

```cpp
// 1. 渲染器（mod 侧，MinecraftUICustomRenderer 子类——渲染方式完全自定，
//    可以保留 ImGui 作为离屏逻辑层，也可以直接 blit）
class MiniMapRenderer : public MinecraftUICustomRenderer {
public:
    std::shared_ptr<UICustomRenderer> clone() const override {
        return std::make_shared<MiniMapRenderer>();
    }
    bool update(IClientInstance& client, UIControl& owner, UIScene const& scene) override {
        return coral_map::MapState::isMiniMapEnabled();   // false 则本帧不渲染
    }
    void frameUpdate(MinecraftUIFrameUpdateContext&, UIControl&) override {}
    void render(MinecraftUIRenderContext& ctx, IClientInstance& client, UIControl& owner, int) override {
        // 用 owner.mCachedPosition/mSize 布局，mPropagatedAlpha 乘进颜色
        // 瓦片纹理：内容变化时经 getTextureGroup()->uploadTexture 更新（低频），
        // 这里直接 ScreenRenderer::singleton().blit(ctx.mScreenContext, tex, ...) 画
    }
};

// 2. OverlayElement 子类
class MiniMapOverlay : public ll::ui::OverlayElement {
public:
    std::string getRendererName() const override   { return "coral_minimap_renderer"; }
    std::string getControlDefName() const override { return "coral_map.minimap"; }
    std::string_view getTargetParentControlName() const override { return "not_centered_gui_elements"; }
    std::shared_ptr<MinecraftUICustomRenderer> createRenderer() override {
        return std::make_shared<MiniMapRenderer>();
    }
};

// 3. mod 初始化时
static MiniMapOverlay gMiniMap;
gMiniMap.enable();
```

配套资源包（`ui/coral_map.json`）：

```json
{ "namespace": "coral_map",
  "minimap": { "type": "custom", "renderer": "coral_minimap_renderer",
               "size": [110, 110], "anchor_from": "top_right", "anchor_to": "top_right",
               "offset": [-10, 10] } }
```

迁移收益：F1 隐藏、HUD 不透明度、安全区、分屏布局全部自动生效；删掉渲染用的
`flushText` hook 和屏幕绘制部分 DX11 代码（DX11 仅保留给瓦片离屏生成，低频）。

## 世界地图 → JsonScreen

```cpp
class WorldMapScreen : public ll::ui::JsonScreen {
public:
    std::string getScreenName() const override { return "coral_map.world_map"; }

    void onOpen() override  { coral_map::MapState::beginFullScreenSession(); }
    void onClose() override { coral_map::MapState::endFullScreenSession(); }

    bool onButtonEvent(std::string const& buttonId, UIPropertyBag*) override {
        if (buttonId == "button.world_map_zoom_in")  { /* ... */ return true; }
        if (buttonId == "button.world_map_zoom_out") { /* ... */ return true; }
        return false; // 其余交框架（含 button.menu_exit → Esc 关闭）
    }
};

// 打开：用 LL 已有的 KeyInputEvent 替换现在的 InputBlocker 方案
static WorldMapScreen gWorldMap;
ll::event::EventBus::getInstance().emplaceListener<ll::event::KeyInputEvent>(
    [](ll::event::KeyInputEvent& ev) {
        if (ev.key == OpenMapKey && ev.pressed) {
            gWorldMap.isOpen() ? gWorldMap.close() : gWorldMap.open();
        }
    });
```

配套资源包：

```json
{ "namespace": "coral_map",
  "world_map@common.base_screen": {
    "is_showing_menu": true, "should_steal_mouse": true, "absorbs_input": true,
    "$screen_content": "coral_map.world_map_content",
    "button_mappings": [
      { "from_button_id": "button.menu_cancel", "to_button_id": "button.menu_exit", "mapping_type": "global" }
    ] },
  "world_map_content": {
    "type": "panel", "size": ["100%", "100%"],
    "controls": [
      { "map_canvas": { "type": "custom", "renderer": "coral_worldmap_renderer",
                        "size": ["100%", "100%"] } }
    ] } }
```

世界地图的渲染器（`coral_worldmap_renderer`）与小地图同理，由 mod 自己注册
（`CustomUIRendererRegistry::registerRenderer`）——`JsonScreen` 基类不代办，符合
"基类零渲染、零预设控件"的约束。

迁移收益：

- 删除 `InputBlocker`：输入路由、鼠标释放、手柄光标由屏幕栈原生提供；
- 删除 ImGui Win32 输入后端：按键走 `onButtonEvent` / JSON `button_mappings`，
  后续要鼠标交互再接 LL 的 `MouseInputEvent`；
- 界面进出动画（`$screen_animations`）、Esc 关闭、界面栈层级（地图之上还能再开
  暂停菜单等）全部免费获得；
- ImGui 如保留，仅作为离屏逻辑/顶点生成器，在 `coral_worldmap_renderer` 的
  `render()` 里翻译成 `blit`/Tessellator 调用（详见此前调研结论）。

## 迁移工作量对照（CoralMap 侧）

| 现有代码 | 迁移后 |
| --- | --- |
| `UIRenderHook.h`（flushText hook 初始化 DX11） | 删除；改由 overlay/modal 生命周期驱动 |
| `DX11Hook` 交换链绘制部分 | 删除；仅保留瓦片离屏纹理生成（低频 uploadTexture） |
| `InputBlocker` | 删除；世界地图按键走 `onButtonEvent`/JSON，打开快捷键走 `KeyInputEvent` |
| ImGui DX11/Win32 后端 | 删除；ImGui（如保留）仅作离屏顶点生成器 |
| 手动位置/缩放计算 | 删大半；布局交给 JSON（anchor/offset/安全区自适应） |
