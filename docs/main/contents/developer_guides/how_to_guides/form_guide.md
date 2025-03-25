# Form Guide

LeviLamina provides a minimalist form API that allows developers to implement complex form functionalities with just a
few lines of code.  
The header files for the Form API are stored in `ll/api/form`. Additionally, since Minecraft's form IDs are unique at
runtime, we provide **FormIdManager** to retrieve Minecraft's form IDs, allowing developers to implement their own form
API.

## FormIdManager

The header file for FormIdManager is located at `ll/api/form/FormIdManager.h`, exporting the
`ll::form::FormIdManager::genFormId` method, which is used to obtain a unique form ID.

### Example

```cpp
#include "ll/api/form/FormIdManager.h"

void test() { uint formId = ll::form::FormIdManager::genFormId(); }
```

## SimpleForm

SimpleForm is a basic form that provides a title, content, and buttons.  
The header file for SimpleForm is located at `ll/api/form/SimpleForm.h`.  
Additionally, since methods like `addButton` in SimpleForm return a reference to SimpleForm, they support method
chaining.

### Usage

1. Include the header file `ll/api/form/SimpleForm.h`
2. Construct a SimpleForm object. You can use either a parameterized or parameterless constructor. The parameterized
   constructor requires a title and content, while the parameterless constructor requires manually calling the
   `setTitle` and `setContent` methods to set the title and content.
3. Add buttons using the `appendButton` method and add visual-only elements using `appendHeader`, `appendLabel`, and `appendDivider` methods.
4. Use the `sendTo` method to send the form to a player. This requires passing a reference to a `Player` object and a
   callback function. The callback function parameters include a reference to the `Player` object, the index of the
   button selected by the player, and an enumeration of the cancellation reason. For detailed parameters, refer to the
   `Callback` declaration in the `ll/api/form/SimpleForm.h` header file.

!!! tip
    When the button index is -1, it means the player canceled the form.  
    `FormCancelReason` is essentially `std::optional<ModalFormCancelReason>`, so you need to check whether it has a value
    before using it. You should also use the enumeration values of `ModalFormCancelReason` to determine the cancellation
    reason. The example uses the `magic_enum` library to retrieve the enumeration value name.

### Example

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

CustomForm is an advanced form that provides a title, labels, input fields, toggles, dropdowns, sliders, and step
sliders.

### Usage

1. Include the header file `ll/api/form/CustomForm.h`
2. Construct a CustomForm object. You can use either a parameterized or parameterless constructor. The parameterized
   constructor requires a title, while the parameterless constructor requires manually calling the `setTitle` method to
   set the title.
3. Add custom form elements using `appendInput`, `appendToggle`, `appendDropdown`, `appendSlider`, and
   `appendStepSlider` methods and add visual-only elements using `appendHeader`, `appendLabel`, and `appendDivider` methods.
4. Use the `sendTo` method to send the form to a player. This requires passing a reference to a `Player` object and a
   callback function. The callback function parameters include a reference to the `Player` object, the form result, and
   an enumeration of the cancellation reason. For detailed parameters, refer to the `Callback` declaration in the
   `ll/api/form/CustomForm.h` header file.

!!! tip
    The form result `CustomFormResult` is actually
    `std::optional<std::unordered_map<std::string, CustomFormElementResult>>`, an unordered associative container storing
    element names and results. You can retrieve the corresponding result by element name. The result type is
    `CustomFormElementResult`, which is a variant (`std::variant<std::monostate, uint64, double, std::string>`), so you need
    to check its type using `std::holds_alternative` before retrieving it using `std::get`.

### Example

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

ModalForm is a modal form that provides a title, content, and two buttons, typically used for binary choices.

### Usage

1. Include the header file `ll/api/form/ModalForm.h`
2. Construct a ModalForm object. You can use either a parameterized or parameterless constructor. The parameterized
   constructor requires a title, content, upper button, and lower button, while the parameterless constructor requires
   manually calling `setTitle`, `setContent`, `setUpperButton`, and `setLowerButton` methods.
3. Use the `sendTo` method to send the form to a player. This requires passing a reference to a `Player` object and a
   callback function. The callback function parameters include a reference to the `Player` object, the button selection
   result, and an enumeration of the cancellation reason.

!!! tip
    `ModalFormResult` is actually an alias for `std::optional<ModalFormSelectedButton>`, and `ModalFormSelectedButton` is a
    Bool enumeration with two `Upper = true` and `Lower = false` values, representing the upper and lower buttons,
    respectively.

### Example

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

