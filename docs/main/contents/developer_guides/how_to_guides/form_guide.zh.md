# 表单指南

LeviLamina提供了一套极简的表单API，允许开发者用几行代码实现复杂的表单功能。  
表单API的头文件被存放于`ll/api/form`中，此外由于Minecraft的表单ID在运行时是唯一的，所以我们提供了**FormIdManager**
用于获取Minecraft的表单ID，允许开发者自己实现一套表单API。

## FormIdManager

FormIdManager的头文件位于`ll/api/form/FormIdManager.h`，导出了`ll::form::FormIdManager::genFormId`方法，用于获取一个唯一的表单ID。

### 示例

```cpp
#include "ll/api/form/FormIdManager.h"

void test() { uint formId = ll::form::FormIdManager::genFormId(); }
```

## SimpleForm

SimpleForm是一个简单的表单，提供了标题、内容和按钮。   
SimpleForm的头文件位于`ll/api/form/SimpleForm.h`。  
此外，由于SimpleForm的方法例如`appendButton`返回SimpleForm的引用，所以可以链式调用。

### 用法

1. 引用头文件`ll/api/form/SimpleForm.h`
2. 构造一个SimpleForm对象，可以使用带参数和不带参数的构造函数，使用带参数的构造函数需要传入标题和内容，使用不带参数的构造函数需要手动调用
   `setTitle`和`setContent`方法来设置标题和内容
3. 通过`appendButton`方法添加按钮，通过`appendHeader`、`appendLabel`和`appendDivider`方法添加仅视觉效果元素。
4. 使用`sendTo`方法将表单发送给玩家，需要传入`Player`对象的引用和一个回调函数，回调函数的参数为`Player`
   对象的引用、玩家选择的按钮索引和取消原因的枚举。具体参数可以参考头文件`ll/api/form/SimpleForm.h`中`Callback`的声明。

!!! tip
    当按钮的索引为-1时代表玩家取消的表单。  
    `FormCancelReason`的本质是`std::optional<ModalFormCancelReason>`，所以你需要先判断其是否有值才能使用，并且你需要使用
    `ModalFormCancelReason`的枚举值来判断取消的原因。示例中使用了`magic_enum`库来获取枚举值的名称。

### 示例

```cpp
#include "ll/api/form/SimpleForm.h"
#include "magic_enum/magic_enum.hpp"

void sendSimpleFormToPlayer(Player& player) {
    ll::form::SimpleForm form("I'm title", "I'm content");
    // Or
    //    ll::form::SimpleForm form;
    //    form.setTitle("I'm title").setContent("I'm content");
    form.appendHeader("header")
        .appendButton("Button1")
        .appendDivider()
        .appendHeader("header")
        .appendLabel("label")
        .appendButton("Button2")
        .sendTo(player, [](Player& player, int selected, ll::form::FormCancelReason reason) {
            switch (selected) {
            case 0: {
                player.sendMessage("You clicked Button1");
                break;
            }
            case 1: {
                player.sendMessage("You clicked Button2");
                break;
            }
            case -1: {
                player.sendMessage("You closed the form");
                player.sendMessage(
                    reason.transform(magic_enum::enum_name<ModalFormCancelReason>).value_or("Unknown Reason")
                );
                break;
            }
            }
        });
}
```

## CustomForm

CustomForm是一个复杂的表单，提供了标题、标签(Label)、输入框(Input)、开关(Toggle)、下拉框(Dropdown)、滚动条(Slider)
和分段滚动条(StepSlider)。

### 用法

1. 引用头文件`ll/api/form/CustomForm.h`
2. 构造一个CustomForm对象，可以使用带参数和不带参数的构造函数，使用带参数的构造函数需要传入标题，使用不带参数的构造函数需要手动调用
   `setTitle`方法来设置标题
3. 通过`appendInput`、`appendToggle`、`appendDropdown`、`appendSlider`和`appendStepSlider`方法添加各种自定义表单元素，通过`appendHeader`、`appendLabel`、`appendDivider`方法添加各种仅视觉效果元素
4. 使用`sendTo`方法将表单发送给玩家，需要传入`Player`对象的引用和一个回调函数，回调函数的参数为`Player`
   对象的引用、表单的结果和取消原因的枚举。具体参数可以参考头文件`ll/api/form/CustomForm.h`中`Callback`的声明。

!!! tip
    表单的结果`CustomFormResult`实际上是`std::optional<std::unordered_map<std::string, CustomFormElementResult>>`
    ，一个存储了元素名称和结果的无序关联容器。你可以通过元素名称来获取对应的结果，结果的类型是`CustomFormElementResult`
    ，是一个联合体(`std::variant<std::monostate, uint64, double, std::string>`)，所以你需要先使用`std::holds_alternative`
    判断其类型通过`std::get`获取。

### 示例

```cpp
#include "ll/api/form/CustomForm.h"
#include "magic_enum/magic_enum.hpp"

void sendCustomFormToPlayer(Player& player) {
    ll::form::CustomForm     form;
    std::vector<std::string> names;
    form.setTitle("CustomForm")
        .appendHeader("header")
        .appendLabel("label")
        .appendInput("input1", "input")
        .appendToggle("toggle", "toggle")
        .appendSlider("slider", "slider", 0, 100, 1)
        .appendDivider()
        .appendStepSlider("stepSlider", "stepSlider", {"a", "b", "c"})
        .appendDropdown("dropdown", "dropdown", {"a", "b", "c"})
        .appendLabel("label")
        .appendDropdown("emptydropdown", "empty dropdown", names)
        .setSubmitButton("Apply")
        .sendTo(
            player,
            [](Player& player, ll::form::CustomFormResult const& data, ll::form::FormCancelReason reason) {
                if (!data) {
                    player.sendMessage("CustomForm callback canceled");
                    player.sendMessage(reason.transform(magic_enum::enum_name<ModalFormCancelReason>)
                                            .value_or("Unknown Reason"));
                    return;
                }
                for (auto [name, result] : *data) {
                    if (std::holds_alternative<uint64_t>(result)) {
                        player.sendMessage(
                            fmt::format("CustomForm callback {} = {}", name, std::get<uint64_t>(result))
                        );
                    } else if (std::holds_alternative<double>(result)) {
                        player.sendMessage(
                            fmt::format("CustomForm callback {} = {}", name, std::get<double>(result))
                        );
                    } else if (std::holds_alternative<std::string>(result)) {
                        player.sendMessage(
                            fmt::format("CustomForm callback {} = {}", name, std::get<std::string>(result))
                        );
                    }
                }
            }
        );
}
```

## ModalForm

ModalForm是一个模态表单，提供了标题、内容和两个按钮，通常用于实现双项选择。

### 用法

1. 引用头文件`ll/api/form/ModalForm.h`
2. 构造一个ModalForm对象，可以使用带参数和不带参数的构造函数，使用带参数的构造函数需要传入标题、内容、上按钮和下按钮，使用不带参数的构造函数需要手动调用
   `setTitle`和`setContent`方法来设置标题和内容，`setUpperButton`和`setLowerButton`方法来设置上按钮和下按钮。
3. 使用`sendTo`方法将表单发送给玩家，需要传入`Player`对象的引用和一个回调函数，回调函数的参数为`Player`
   对象的引用、玩家选择的按钮结果和取消原因的枚举。具体参数可以参考头文件`ll/api/form/ModalForm.h`中`Callback`的声明。

!!! tip
    `ModalFormResult`实际上是`std::optional<ModalFormSelectedButton>`的别名，而`ModalFormSelectedButton`是一个Bool枚举，有`Upper = true`和
    `Lower = false`两个值，分别代表上按钮和下按钮。

### 示例

```cpp
#include "ll/api/form/ModalForm.h"
#include "magic_enum/magic_enum.hpp"

void sendModalFormToPlayer(Player& player) {
    ll::form::ModalForm form;
    form.setTitle("ModalForm")
        .setUpperButton("Upper")
        .setLowerButton("Lower")
        .sendTo(
            player,
            [](Player& player, ll::form::ModalFormResult selected, ll::form::FormCancelReason reason) {
                if (!selected) {
                    player.sendMessage("ModalForm callback canceled");
                    player.sendMessage(reason.transform(magic_enum::enum_name<ModalFormCancelReason>)
                                            .value_or("Unknown Reason"));
                    return;
                }
                player.sendMessage(fmt::format("ModalForm callback {}", (bool)selected));
            }
        );
}
```

## sendUpdate

玩家处于表单打开状态时使用`SimpleForm::sendUpdate`、`CustomForm::sendUpdate`和`ModalForm::sendUpdate`可以更新表单，且不限制更新的表单内容和类型，参数同`sendTo`。这些方法需要保证玩家处于表单打开中的状态，否则无效果。

### 示例

```cpp
#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "mc/server/ServerLevel.h"
#include <fmt/chrono.h>

std::unique_ptr<ll::form::CustomForm> buildStatusWindow() {
    auto form = std::make_unique<ll::form::CustomForm>("Status");
    auto now  = std::chrono::system_clock::now();
    auto ticks =
        ll::service::getLevel().transform([](auto& level) { return level.getCurrentServerTick().tickID; }).value_or(-1);
    form->appendHeader("System Info")
        .appendLabel(fmt::format("Time: {}", now))
        .appendLabel(fmt::format("Ticks: {}", ticks))
        .appendDivider()
        .setSubmitButton("Close");
    return std::move(form);
}

void openStatusWindow(Player& player) {
    ll::coro::keepThis([uid = player.getOrCreateUniqueID()]() -> ll::coro::CoroTask<void> {
        auto closed   = std::make_shared<bool>(false);
        auto callback = [closed](auto const&...) { *closed = true; };

        auto player = ll::service::getLevel().transform([uid](auto& level) { return level.getPlayer(uid); });
        if (!player || *closed) co_return;
        buildStatusWindow()->sendTo(*player, callback);

        while (true) {
            co_await ll::chrono::ticks{20};

            player = ll::service::getLevel().transform([uid](Level& level) { return level.getPlayer(uid); });
            if (!player || *closed) co_return;
            buildStatusWindow()->sendUpdate(*player, callback);
        }
    }).launch(ll::thread::ServerThreadExecutor::getDefault());
}
```
