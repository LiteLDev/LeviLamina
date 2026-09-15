#pragma once

#include <optional>
#include <utility>

#include "ll/api/event/Event.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Session.h"

namespace ll::protocol {

enum class ProtocolCloseReason : std::uint8_t {
    ConnectionClosed,
    ProtocolError,
    Timeout,
    RegistryChanged,
    RuntimeStopping,
};

class ProtocolEstablishedEvent final : public ll::event::Event {
    Session mSession;

public:
    explicit ProtocolEstablishedEvent(Session session) : mSession(std::move(session)) {}
    [[nodiscard]] Session const& session() const noexcept { return mSession; }
};

class ProtocolClosedEvent final : public ll::event::Event {
    SessionView         mSession;
    ProtocolCloseReason mReason;

public:
    ProtocolClosedEvent(SessionView session, ProtocolCloseReason reason)
    : mSession(std::move(session)),
      mReason(reason) {}

    [[nodiscard]] SessionView const&  session() const noexcept { return mSession; }
    [[nodiscard]] ProtocolCloseReason reason() const noexcept { return mReason; }
};

class ProtocolErrorEvent final : public ll::event::Event {
    std::optional<SessionView> mSession;
    ProtocolErrc               mError;

public:
    ProtocolErrorEvent(std::optional<SessionView> session, ProtocolErrc error)
    : mSession(std::move(session)),
      mError(error) {}

    [[nodiscard]] std::optional<SessionView> const& session() const noexcept { return mSession; }
    [[nodiscard]] ProtocolErrc                      error() const noexcept { return mError; }
};

} // namespace ll::protocol
