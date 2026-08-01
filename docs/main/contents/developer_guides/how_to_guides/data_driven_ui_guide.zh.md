# 数据驱动 UI 操作指南

本指南介绍如何使用 `ll::ui` 构建响应式 Minecraft Bedrock 表单。完整声明、默认值、生命周期规则和底层 API 见[数据驱动 UI API 参考](../../api_reference/data_driven_ui.zh.md)。

LeviLamina API 采用微软[数据驱动 UI 框架简介](https://learn.microsoft.com/zh-cn/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable)中的响应式概念，并将其适配为 C++ callback、`Expected<T>` 和 LeviLamina 协程。

## 开始之前

DDUI 代码应在服务器线程运行。以下示例假设 `Player&` 来自服务器线程上的事件或命令回调，并且当前有效。

主要头文件为：

```cpp
#include "ll/api/ui/form/CustomForm.h"
#include "ll/api/ui/form/MessageBox.h"
```

DDUI 与旧 `ll::form` API 是两套独立接口：

| 旧 `ll::form` | DDUI `ll::ui` |
|---------------|---------------|
| 静态表单 Payload | 响应式数据绑定 |
| 从按下标排列的 Response 读取输入 | 从类型化 Observable 读取输入 |
| 重新发送表单才能更新 | 表单打开时调用 `Observable::setData()` |
| 关闭时返回按钮选择 | 行内按钮 callback 可在表单打开时执行 |

## 构建完整 CustomForm

输入控件必须使用可由客户端写入的 Observable；仅用于显示的状态应保持只读。

```cpp
#include <string>
#include <vector>

#include "ll/api/ui/form/CustomForm.h"

void showSettings(Player& player) {
    using namespace ll::ui;

    ObservableString status{"就绪"};
    ObservableString name{"Steve", {.clientWritable = true}};
    ObservableBoolean pvp{true, {.clientWritable = true}};
    ObservableNumber difficulty{1.0, {.clientWritable = true}};
    ObservableNumber volume{50.0, {.clientWritable = true}};

    auto const nameSubscription = name.subscribe(
        [status](std::string const& value) mutable {
            status.setData("名称：" + value);
        }
    );

    CustomForm form{player, UIRawMessage::translate("example.settings.title")};
    form.header("常规")
        .label(status)
        .divider()
        .textField(
            "玩家名称",
            name,
            {.description = std::string{"本示例中显示的名称"}}
        )
        .toggle(
            "启用 PvP",
            pvp,
            {.description = std::string{"允许玩家战斗"}}
        )
        .dropdown(
            "难度",
            difficulty,
            {
                {"和平", 0.0, std::string{"无敌对生物"}},
                {"简单", 1.0, std::string{"伤害降低"}},
                {"普通", 2.0, std::string{"标准规则"}},
                {"困难", 3.0, std::string{"挑战提高"}},
            }
        )
        .slider(
            "音乐音量",
            volume,
            0.0,
            100.0,
            {
                .description = std::string{"百分比"},
                .step = 5.0,
            }
        )
        .spacer()
        .button(
            "重置",
            [name, pvp, difficulty, volume, status]() mutable {
                name.setData("Steve");
                pvp.setData(true);
                difficulty.setData(1.0);
                volume.setData(50.0);
                status.setData("已恢复默认值");
            },
            {.tooltip = std::string{"恢复默认值"}}
        )
        .closeButton();

    auto started = form.show(
        [name, pvp, difficulty, volume, nameSubscription](CustomForm::Result result) mutable {
            name.unsubscribe(nameSubscription);

            if (!result) {
                // 玩家离开、服务器停止或出现其他运行时错误。
                return;
            }

            auto const closeReason = result.value();
            auto const finalName = name.getData();
            auto const finalPvp = pvp.getData();
            auto const finalDifficulty = difficulty.getData();
            auto const finalVolume = volume.getData();

            // 在这里校验并持久化最终值。
            (void)closeReason;
            (void)finalName;
            (void)finalPvp;
            (void)finalDifficulty;
            (void)finalVolume;
        }
    );

    if (!started) {
        name.unsubscribe(nameSubscription);
        // 处理 started.error()。
    }
}
```

表单会复制 Observable，但所有副本共享状态。因此，即使局部 Form Wrapper 已经离开作用域，完成 callback 仍能读取最终值。

显式 `unsubscribe()` 针对应用自己创建的 `name` 订阅；表单内部的 Observable 桥接会在表单完成时自动断开。

## 由服务端更新 UI

用作文本或 Option 的 Observable 都能在表单打开时改变。延迟更新仍必须回到服务器线程执行。

```cpp
#include <chrono>

#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/ui/form/CustomForm.h"

void showMonitor(Player& player) {
    using namespace std::chrono_literals;

    ll::ui::ObservableString status{"正在收集数据..."};
    ll::ui::ObservableBoolean detailsVisible{true};

    ll::ui::CustomForm form{player, "实时监控"};
    form.label(status, {.visible = detailsVisible})
        .button(
            "隐藏详情",
            [detailsVisible]() mutable {
                detailsVisible.setData(false);
            }
        )
        .closeButton();

    auto started = form.show();
    if (!started) {
        return;
    }

    ll::thread::ServerThreadExecutor::getDefault().executeAfter(
        [status]() mutable {
            status.setData("已收到服务端更新");
        },
        1s
    );
}
```

更新时不需要重建或重新显示表单。`setData()` 会通过现有 Binding 写入新值；再次设置相同值会被 `Observable<T>` 抑制。

## 立即响应玩家输入

另一个 UI 值依赖玩家输入时，订阅可由客户端写入的 Observable：

```cpp
ll::ui::ObservableNumber volume{50.0, {.clientWritable = true}};
ll::ui::ObservableString summary{"音量：50"};

auto const subscription = volume.subscribe(
    [summary](double const& value) mutable {
        summary.setData("音量：" + std::to_string(value));
    }
);
```

保存订阅 ID，并在所属状态结束时调用 `unsubscribe()`。忽略 ID 会让 callback 在共享 Observable 状态存活期间一直有效；该返回值不是 RAII Token。

## 动态组件 Option

Option 值可以是 Observable。这样无需修改表单结构，一个控件就能动态控制另一个控件的显示、隐藏、启用或禁用。

```cpp
ll::ui::ObservableBoolean advanced{false, {.clientWritable = true}};
ll::ui::ObservableBoolean advancedVisible{false};
ll::ui::ObservableBoolean basicDisabled{false};

auto const subscription = advanced.subscribe(
    [advancedVisible, basicDisabled](bool const& enabled) mutable {
        advancedVisible.setData(enabled);
        basicDisabled.setData(enabled);
    }
);

ll::ui::CustomForm form{player, "模式"};
form.toggle("高级模式", advanced)
    .label("高级控件", {.visible = advancedVisible})
    .button("基础操作", [] {}, {.disabled = basicDisabled})
    .closeButton();
```

开始显示后，表单结构不可再修改，但所有绑定值仍可改变。

## 使用协程路径

`showAsync()` 等待最终关闭结果。该任务必须在服务器线程启动或等待。

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/ui/form/CustomForm.h"

ll::coro::CoroTask<> showSettingsAsync(Player& player) {
    ll::ui::ObservableBoolean enabled{false, {.clientWritable = true}};

    ll::ui::CustomForm form{player, "异步设置"};
    form.toggle("已启用", enabled).closeButton();

    auto result = co_await form.showAsync();
    if (!result) {
        // 处理 result.error()。
        co_return;
    }

    auto const closeReason = result.value();
    auto const finalValue = enabled.getData();
    (void)closeReason;
    (void)finalValue;
}

void launchSettings(Player& player) {
    showSettingsAsync(player).launch(
        ll::thread::ServerThreadExecutor::getDefault()
    );
}
```

不要对同一个表单同时调用 `show()` 与 `showAsync()`；每个表单或 Session 只能显示一次。

## 显示 MessageBox

`MessageBox` 是双按钮对话框。与 `CustomForm` 的操作按钮不同，它的结果会说明选择了哪个按钮。

```cpp
#include "ll/api/ui/form/MessageBox.h"

void confirmReset(Player& player) {
    ll::ui::MessageBox box{
        player,
        ll::ui::UIRawMessage::translate("example.reset.title")
    };

    box.body("是否重置全部已保存设置？")
        .button1(
            ll::ui::UIRawMessage::translate("gui.yes"),
            std::string{"此操作无法撤销"}
        )
        .button2(ll::ui::UIRawMessage::translate("gui.no"));

    auto started = box.show([](ll::ui::MessageBox::Result result) {
        if (!result || !result->selection) {
            return;
        }

        if (*result->selection == 1) {
            // 选择 button1：执行重置。
        } else if (*result->selection == 2) {
            // 选择 button2：保持数据不变。
        }
    });

    if (!started) {
        // 处理 started.error()。
    }
}
```

按钮编号从 1 开始：`button1` 产生 `1`，`button2` 产生 `2`。玩家 Busy、程序关闭或其他未选择按钮的关闭结果中，`selection` 为空。

## 关闭表单

应选择范围最小、符合意图的关闭操作：

```cpp
auto targeted = form.close(); // 只关闭这个 CustomForm。

ll::ui::closeScreen(player);  // 关闭该玩家的全部 DDUI Screen。
```

`form.close()` 返回 `Expected<>`，并要求表单正在显示。`closeScreen(player)` 返回 `void`；各活动 Session 稍后分别收到自己的 `ProgrammaticCloseAll` 完成结果。

## 打开资源包自定义 Screen

只有资源包定义了 Screen 及其数据协议时才直接使用 `ScreenSession`。结构化数据应优先使用 `cereal::DynamicValue`，而不是兼容 JSON 重载。

```cpp
#include "ll/api/ui/base/ScreenSession.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

void showCustomScreen(Player& player) {
    auto data = cereal::DynamicValue::object({
        {"title", "运行状态"},
        {"count", 0.0},
    });

    ll::ui::ScreenSession session{player, "example:runtime_status"};
    auto property = session.createProperty("example", "runtime_status", data);
    if (!property) {
        return;
    }

    auto count = property->bind<double>("count");
    if (!count) {
        return;
    }

    auto shown = session.show();
    if (!shown) {
        return;
    }

    count->set(1.0);
}
```

`ScreenSession` 必须保持存活，其 `Property` 和 `Binding<T>` 句柄才能继续使用。生产环境中的自定义 Screen Owner 应保留 Session，直到完成 callback 执行。

## 常见错误

| 现象 | 原因和修正 |
|------|------------|
| 构造输入控件时抛异常 | 值 Observable 是只读的；构造时传 `{.clientWritable = true}` |
| `show()` 成功但拿不到关闭原因 | `show()` 只报告启动结果；传 callback 或使用 `showAsync()` |
| Binding 订阅立即失效 | 丢弃了 `Binding::listen()` 返回的 RAII `Subscription`；需要保留它 |
| Observable callback 一直不停止 | Observable 使用显式 ID；调用 `unsubscribe(id)` |
| 尝试显示后，结构方法抛异常 | 第一次 Show Attempt 就会锁定结构；创建新表单 |
| 修改普通变量后 UI 不更新 | 绑定 Observable，并调用其 `setData()` |
| `close()` 报告表单未显示 | 只在成功启动后、完成前调用 |
| NaN 或无穷大被拒绝 | DDUI 数值必须为有限数 |
| 只想关闭一个界面 | 使用该表单的 `close()`，不要使用全局 `closeScreen(player)` |

## 延伸阅读

- [数据驱动 UI API 参考](../../api_reference/data_driven_ui.zh.md)
- [Data API：`Observable<T>`](../../api_reference/data.zh.md#observable)
- [Expected 错误处理](../../api_reference/expected.zh.md)
- [Coroutine API](../../api_reference/coro.zh.md)
- [Microsoft 数据驱动 UI 简介](https://learn.microsoft.com/zh-cn/minecraft/creator/documents/scripting/intro-to-ddui?view=minecraft-bedrock-stable)
- [Microsoft `@minecraft/server-ui` 2.1.0 参考](https://learn.microsoft.com/zh-cn/minecraft/creator/scriptapi/minecraft/server-ui/minecraft-server-ui?view=minecraft-bedrock-stable)
