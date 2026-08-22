#include "ll/core/protocol/ServerSessionSource.h"

#include <mutex>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Server.h"

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

} // namespace ll::protocol::server
