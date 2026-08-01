#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/ui/base/Observable.h"
#include "ll/api/ui/base/ScreenSession.h"

#include "mc/platform/brstd/move_only_function.h"

class Player;

namespace ll::ui {

struct ButtonOptions {
    std::optional<BooleanValue> disabled;
    std::optional<TextValue>    tooltip;
    std::optional<BooleanValue> visible;
};

struct DividerOptions {
    std::optional<BooleanValue> visible;
};

struct DropdownItemData {
    TextValue                label;
    double                   value;
    std::optional<TextValue> description;
};

struct DropdownOptions {
    std::optional<TextValue>    description;
    std::optional<BooleanValue> disabled;
    std::optional<BooleanValue> visible;
};

struct SliderOptions {
    std::optional<TextValue>    description;
    std::optional<BooleanValue> disabled;
    std::optional<NumberValue>  step;
    std::optional<BooleanValue> visible;
};

struct SpacingOptions {
    std::optional<BooleanValue> visible;
};

struct TextFieldOptions {
    std::optional<TextValue>    description;
    std::optional<BooleanValue> disabled;
    std::optional<BooleanValue> visible;
};

struct TextOptions {
    std::optional<BooleanValue> visible;
};

struct ToggleOptions {
    std::optional<TextValue>    description;
    std::optional<BooleanValue> disabled;
    std::optional<BooleanValue> visible;
};

class CustomForm {
    struct Impl;
    std::shared_ptr<Impl> impl;

public:
    using Result         = ScreenSession::Result;
    using Callback       = ScreenSession::Callback;
    using ButtonCallback = brstd::move_only_function<void()>;

    LLNDAPI CustomForm(Player& player, TextValue title);
    LLAPI ~CustomForm();

    CustomForm(CustomForm const&)                  = delete;
    CustomForm&       operator=(CustomForm const&) = delete;
    LLAPI             CustomForm(CustomForm&&) noexcept;
    LLAPI CustomForm& operator=(CustomForm&&) noexcept;

    LLAPI CustomForm& button(TextValue label, ButtonCallback callback, ButtonOptions options = {});
    LLAPI CustomForm& closeButton();
    LLAPI CustomForm& divider(DividerOptions options = {});
    LLAPI CustomForm& dropdown(
        TextValue                     label,
        ObservableNumber              value,
        std::vector<DropdownItemData> items,
        DropdownOptions               options = {}
    );
    LLAPI CustomForm& header(TextValue text, TextOptions options = {});
    LLAPI CustomForm& label(TextValue text, TextOptions options = {});
    LLAPI CustomForm&
    slider(TextValue label, ObservableNumber value, NumberValue min, NumberValue max, SliderOptions options = {});
    LLAPI CustomForm& spacer(SpacingOptions options = {});
    LLAPI CustomForm& textField(TextValue label, ObservableString text, TextFieldOptions options = {});
    LLAPI CustomForm& toggle(TextValue label, ObservableBoolean toggled, ToggleOptions options = {});

    LLNDAPI Expected<> show(Callback callback = {});
    LLNDAPI coro::CoroTask<Result> showAsync();

    LLNDAPI Expected<> close();
    LLNDAPI bool       isShowing() const noexcept;
};

} // namespace ll::ui
