# Form（表单 UI）

`ll/api/form/` · **通用**

## 概述

Form 模块提供了三种可发送给玩家的交互式 UI 表单：SimpleForm（按钮列表）、ModalForm（双按钮对话框）和 CustomForm（多字段输入表单）。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/form/SimpleForm.h` | 按钮列表表单 |
| `ll/api/form/ModalForm.h` | 双按钮确认对话框 |
| `ll/api/form/CustomForm.h` | 多字段输入表单 |
| `ll/api/form/FormBase.h` | 表单基类 |

## SimpleForm

具有标题、可选内容文本和按钮列表的表单。

```cpp
namespace ll::form {
class SimpleForm : public Form {
public:
    using Callback       = std::function<void(Player&, int, FormCancelReason)>;
    using ButtonCallback = std::function<void(Player&)>;

    SimpleForm();
    SimpleForm(std::string const& title, std::string const& content = {});

    SimpleForm& setTitle(std::string const& title);
    SimpleForm& setContent(std::string const& content);
    SimpleForm& appendHeader(std::string const& text);
    SimpleForm& appendLabel(std::string const& text);
    SimpleForm& appendDivider();

    SimpleForm& appendButton(std::string const& text, ButtonCallback callback = {});
    SimpleForm& appendButton(std::string const& text, std::string const& imageData,
                             std::string const& imageType, ButtonCallback callback = {});

    SimpleForm& sendTo(Player& player, Callback callback = {});
    SimpleForm& sendUpdate(Player& player, Callback callback = {});
};
}
```

### 示例

```cpp
#include "ll/api/form/SimpleForm.h"
#include "mc/world/actor/player/Player.h"

void showMenu(Player& player) {
    ll::form::SimpleForm form("主菜单", "请选择一个选项：");

    form.appendButton("传送回家", [](Player& p) {
        // 传送玩家回家
    });

    form.appendButton("查看余额", [](Player& p) {
        // 显示余额
    });

    form.appendButton("设置", "textures/ui/settings_glyph_color_2x", "path",
        [](Player& p) {
            // 打开设置
        }
    );

    form.sendTo(player);
}
```

## ModalForm

双按钮确认对话框。

```cpp
namespace ll::form {
enum class ModalFormSelectedButton : bool { Upper = true, Lower = false };
using ModalFormResult = std::optional<ModalFormSelectedButton>;

class ModalForm : public Form {
public:
    using Callback = std::function<void(Player&, ModalFormResult, FormCancelReason)>;

    ModalForm();
    ModalForm(std::string title, std::string content, std::string upperButton, std::string lowerButton);

    ModalForm& setTitle(std::string const& title);
    ModalForm& setContent(std::string const& content);
    ModalForm& setUpperButton(std::string const& upperButton);
    ModalForm& setLowerButton(std::string const& lowerButton);

    bool sendTo(Player& player, Callback callback = {});
    bool sendUpdate(Player& player, Callback callback = {});
};
}
```

### 示例

```cpp
#include "ll/api/form/ModalForm.h"

void confirmAction(Player& player) {
    ll::form::ModalForm form(
        "确认",
        "你确定要重置数据吗？",
        "是，重置",
        "取消"
    );

    form.sendTo(player, [](Player& p, ll::form::ModalFormResult result, ll::form::FormCancelReason) {
        if (result == ll::form::ModalFormSelectedButton::Upper) {
            // 用户点击了"是，重置"
        } else {
            // 用户点击了"取消"或关闭了表单
        }
    });
}
```

## CustomForm

具有多种输入元素的表单：文本输入、开关、下拉菜单、滑块和步进滑块。

```cpp
namespace ll::form {
using CustomFormElementResult = std::variant<std::monostate, uint64, double, std::string>;
using CustomFormResult = std::optional<std::unordered_map<std::string, CustomFormElementResult>>;

class CustomForm : public Form {
public:
    using Callback = std::function<void(Player&, CustomFormResult const&, FormCancelReason)>;

    CustomForm();
    CustomForm(std::string const& title);

    CustomForm& setTitle(std::string const& title);
    CustomForm& setSubmitButton(std::string const& text);
    CustomForm& appendHeader(std::string const& text);
    CustomForm& appendLabel(std::string const& text);
    CustomForm& appendDivider();

    CustomForm& appendInput(name, text, placeholder, defaultVal, tooltip);
    CustomForm& appendToggle(name, text, defaultVal, tooltip);
    CustomForm& appendDropdown(name, text, options, defaultVal, tooltip);
    CustomForm& appendSlider(name, text, min, max, step, defaultVal, tooltip);
    CustomForm& appendStepSlider(name, text, steps, defaultVal, tooltip);

    CustomForm& sendTo(Player& player, Callback callback = {});
    CustomForm& sendUpdate(Player& player, Callback callback = {});
};
}
```

### 示例

```cpp
#include "ll/api/form/CustomForm.h"

void showSettings(Player& player) {
    ll::form::CustomForm form("服务器设置");

    form.appendInput("motd", "服务器 MOTD", "输入 MOTD...", "A Minecraft Server");
    form.appendToggle("pvp", "启用 PvP", true);
    form.appendSlider("renderDistance", "视距", 2, 32, 1, 10);
    form.appendDropdown("difficulty", "难度", {"和平", "简单", "普通", "困难"}, 2);
    form.appendStepSlider("gamemode", "默认游戏模式", {"生存", "创造", "冒险"}, 0);

    form.sendTo(player, [](Player& p, ll::form::CustomFormResult const& result, ll::form::FormCancelReason) {
        if (!result) return; // 表单被取消

        auto& data = *result;
        auto motd = std::get<std::string>(data.at("motd"));
        auto pvp = std::get<uint64>(data.at("pvp"));            // 0 或 1
        auto renderDist = std::get<double>(data.at("renderDistance"));
        auto difficulty = std::get<uint64>(data.at("difficulty")); // 索引
    });
}
```

## 相关模块

- [操作指南：表单](../developer_guides/how_to_guides/form_guide.md) — 分步教程
