#pragma once

#include <memory>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

namespace ll::ui {

namespace detail {
class UIRawMessageAccess;
}

class UIRawMessage {
    struct Impl;
    std::shared_ptr<Impl const> impl;

    explicit UIRawMessage(std::shared_ptr<Impl const>);
    friend class detail::UIRawMessageAccess;

public:
    LLAPI UIRawMessage();
    LLAPI ~UIRawMessage();

    LLAPI               UIRawMessage(UIRawMessage const&);
    LLAPI UIRawMessage& operator=(UIRawMessage const&);
    LLAPI               UIRawMessage(UIRawMessage&&) noexcept;
    LLAPI UIRawMessage& operator=(UIRawMessage&&) noexcept;

    LLNDAPI static UIRawMessage text(std::string value);
    LLNDAPI static UIRawMessage translate(std::string key);
    LLNDAPI static UIRawMessage translate(std::string key, std::vector<std::string> substitutions);
    LLNDAPI static UIRawMessage translate(std::string key, UIRawMessage substitutions);
    LLNDAPI static UIRawMessage rawText(std::vector<UIRawMessage> messages);

    [[nodiscard]] LLAPI bool operator==(UIRawMessage const&) const noexcept;
};

} // namespace ll::ui
