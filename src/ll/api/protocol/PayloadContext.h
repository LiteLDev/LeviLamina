#pragma once

#include <utility>

#include "ll/api/protocol/Session.h"

namespace ll::protocol {

class PayloadContext {
    Session     mSession;
    SessionView mView;

    PayloadContext(Session session, SessionView view) noexcept : mSession(std::move(session)), mView(std::move(view)) {}

    friend struct detail::SessionAccess;

public:
    [[nodiscard]] Session const&     session() const noexcept { return mSession; }
    [[nodiscard]] SessionView const& view() const noexcept { return mView; }
    [[nodiscard]] EndpointRole       role() const noexcept { return mView.role(); }
    [[nodiscard]] PeerIdentityView   peer() const noexcept { return mView.peer(); }
};

} // namespace ll::protocol
