#pragma once

#include <cstdint>
#include <memory>
#include <optional>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/ui/form/CustomForm.h"

#include "mc/platform/brstd/move_only_function.h"

class Player;

namespace ll::ui {

struct MessageBoxResult {
    ScreenCloseReason            closeReason;
    std::optional<std::uint32_t> selection;
};

class MessageBox {
    struct Impl;
    std::shared_ptr<Impl> impl;

public:
    using Result   = Expected<MessageBoxResult>;
    using Callback = brstd::move_only_function<void(Result)>;

    LLNDAPI MessageBox(Player& player, TextValue title);
    LLAPI ~MessageBox();

    MessageBox(MessageBox const&)                  = delete;
    MessageBox&       operator=(MessageBox const&) = delete;
    LLAPI             MessageBox(MessageBox&&) noexcept;
    LLAPI MessageBox& operator=(MessageBox&&) noexcept;

    LLAPI MessageBox& body(TextValue value);
    LLAPI MessageBox& button1(TextValue label, std::optional<TextValue> tooltip = {});
    LLAPI MessageBox& button2(TextValue label, std::optional<TextValue> tooltip = {});

    LLNDAPI Expected<> show(Callback callback = {});
    LLNDAPI coro::CoroTask<Result> showAsync();

    LLNDAPI Expected<> close();
    LLNDAPI bool       isShowing() const noexcept;
};

} // namespace ll::ui
