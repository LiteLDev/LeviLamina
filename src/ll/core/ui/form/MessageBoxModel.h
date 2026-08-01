#pragma once

#include <cstdint>
#include <optional>

#include "ll/api/Expected.h"
#include "ll/api/ui/base/Observable.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui::detail {

class FormRuntime;

class MessageBoxModel {
    TextValue                    title;
    TextValue                    bodyValue{std::string{}};
    TextValue                    button1Label{std::string{}};
    TextValue                    button2Label{std::string{}};
    std::optional<TextValue>     button1Tooltip;
    std::optional<TextValue>     button2Tooltip;
    std::optional<std::uint32_t> selected;

public:
    explicit MessageBoxModel(TextValue title);

    void body(TextValue value);
    void button1(TextValue label, std::optional<TextValue> tooltip);
    void button2(TextValue label, std::optional<TextValue> tooltip);

    [[nodiscard]] std::optional<std::uint32_t> selection() const noexcept;
    [[nodiscard]] cereal::DynamicValue         serialize() const;
    Expected<>                                 bind(FormRuntime&);
};

} // namespace ll::ui::detail
