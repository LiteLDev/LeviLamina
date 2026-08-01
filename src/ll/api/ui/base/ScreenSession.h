#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/ui/base/DataStore.h"

#include "mc/platform/brstd/move_only_function.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

class Player;

namespace ll::ui {

// ScreenSession operations and final handle release must run on the server thread.

using ScreenCloseReason = ::DataDrivenScreenClosedReason;

enum class ScreenSessionState : std::uint8_t {
    Ready   = 0,
    Showing = 1,
    Closed  = 2,
};

struct NoInstanceIdTag {
    explicit constexpr NoInstanceIdTag() = default;
};

inline constexpr NoInstanceIdTag NoInstanceId{};

namespace detail {
class ScreenSessionImpl;
}

class ScreenSession {
    std::shared_ptr<detail::ScreenSessionImpl> impl;

public:
    using Result   = Expected<ScreenCloseReason>;
    using Callback = brstd::move_only_function<void(Result)>;

    LLAPI   ScreenSession() noexcept;
    LLNDAPI ScreenSession(Player& player, std::string screenId);
    LLNDAPI ScreenSession(Player& player, std::string screenId, uint instanceId);
    LLNDAPI ScreenSession(Player& player, std::string screenId, NoInstanceIdTag);
    LLAPI ~ScreenSession();

    LLAPI                ScreenSession(ScreenSession const&);
    LLAPI ScreenSession& operator=(ScreenSession const&);
    LLAPI                ScreenSession(ScreenSession&&) noexcept;
    LLAPI ScreenSession& operator=(ScreenSession&&) noexcept;

    LLNDAPI ScreenSessionState getState() const noexcept;
    LLNDAPI std::optional<uint> getInstanceId() const noexcept;
    LLNDAPI std::optional<uint> getFormId() const noexcept;

    LLNDAPI Expected<Property>
            createProperty(std::string datastore, std::string property, cereal::DynamicValue const& value) const;
    LLNDAPI Expected<Property>
            createProperty(std::string datastore, std::string property, std::string const& json) const;

    LLNDAPI Expected<Property> borrowProperty(std::string datastore, std::string property) const;

    // Direct path: no coroutine frame or executor hop is created.
    LLNDAPI Expected<> show(Callback callback = {}) const;

    // The caller must launch/await this task on the server thread.
    LLNDAPI coro::CoroTask<Result> showAsync() const;

    LLNDAPI Expected<> close() const;

    [[nodiscard]] LLAPI explicit operator bool() const noexcept;
};

LLAPI void closeScreen(Player& player);

} // namespace ll::ui
