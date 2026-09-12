#include "ll/core/protocol/ServerSessionSource.h"

#include <mutex>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Server.h"
#include "ll/api/service/Bedrock.h"

#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerPlayer.h"
#include "mc/world/actor/player/Player.h"

namespace ll::protocol::detail {

std::mutex                           ServerSessionSourceMutex;
std::shared_ptr<ServerSessionSource> CurrentServerSessionSource;

Expected<> setServerSessionSource(std::shared_ptr<ServerSessionSource> source) {
    if (!source) return makeProtocolError(ProtocolErrc::InternalFailure, "null server session source");

    std::scoped_lock lock{ServerSessionSourceMutex};
    if (CurrentServerSessionSource && CurrentServerSessionSource != source) {
        return makeProtocolError(ProtocolErrc::InvalidState, "server session source already installed");
    }

    CurrentServerSessionSource = std::move(source);
    return {};
}

void clearServerSessionSource(ServerSessionSource const& source) {
    std::scoped_lock lock{ServerSessionSourceMutex};
    if (CurrentServerSessionSource.get() == &source) CurrentServerSessionSource.reset();
}

} // namespace ll::protocol::detail

namespace ll::protocol::detail {

Expected<Session> ServerAccess::resolve(NetworkIdentifierWithSubId const& recipient) {
    std::shared_ptr<ServerSessionSource> source;
    {
        std::scoped_lock lock{ServerSessionSourceMutex};
        source = CurrentServerSessionSource;
    }
    if (!source) return makeSessionError(SessionErrc::TransportUnavailable);
    return source->resolve(recipient);
}

Expected<std::vector<Session>> ServerAccess::snapshot() {
    std::shared_ptr<ServerSessionSource> source;
    {
        std::scoped_lock lock{ServerSessionSourceMutex};
        source = CurrentServerSessionSource;
    }
    if (!source) return makeSessionError(SessionErrc::TransportUnavailable);
    return source->snapshotActive();
}

Expected<> ServerAccess::validateThread() {
    std::shared_ptr<ServerSessionSource> source;
    {
        std::scoped_lock lock{ServerSessionSourceMutex};
        source = CurrentServerSessionSource;
    }
    if (!source) return makeSessionError(SessionErrc::TransportUnavailable);

    if (!source->isOnEndpointThread()) return makeSessionError(SessionErrc::WrongThread);
    return {};
}

} // namespace ll::protocol::detail

namespace ll::protocol::server {

Expected<Session> getSession(NetworkIdentifierWithSubId const& recipient) {
    return ll::protocol::detail::ServerAccess::resolve(recipient);
}

Expected<Session> getSession(Player const& recipient) {
    return getSession(NetworkIdentifierWithSubId{recipient.getNetworkIdentifier(), recipient.getClientSubId()});
}

optional_ref<ServerPlayer> getPlayer(SessionView const& session) {
    if (!session || session.role() != EndpointRole::Server || session.state() != SessionState::Active) {
        return std::nullopt;
    }

    auto const peer = session.peer();
    auto const current =
        getSession(NetworkIdentifierWithSubId{peer.networkIdentifier, static_cast<SubClientId>(peer.subClientId)});
    if (!current) return std::nullopt;

    auto const currentView = current->view();
    auto const currentPeer = currentView.peer();
    if (currentPeer.endpointInstanceId != peer.endpointInstanceId
        || currentPeer.connectionGeneration != peer.connectionGeneration) {
        return std::nullopt;
    }

    auto handler = service::getServerNetworkHandler();
    if (!handler) return std::nullopt;

    return handler->_getServerPlayer(peer.networkIdentifier, static_cast<SubClientId>(peer.subClientId));
}

} // namespace ll::protocol::server
