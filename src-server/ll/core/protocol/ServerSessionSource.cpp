#include "ll/core/protocol/ServerSessionSource.h"

#include <mutex>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Server.h"

namespace ll::protocol::detail {

std::mutex                           ServerSessionSourceMutex;
std::shared_ptr<ServerSessionSource> CurrentServerSessionSource;

Expected<> setServerSessionSource(std::shared_ptr<ServerSessionSource> source) noexcept {
    if (!source) return makeProtocolError(ProtocolErrc::InternalFailure, "null server session source");

    std::scoped_lock lock{ServerSessionSourceMutex};
    if (CurrentServerSessionSource && CurrentServerSessionSource != source) {
        return makeProtocolError(ProtocolErrc::InvalidState, "server session source already installed");
    }

    CurrentServerSessionSource = std::move(source);
    return {};
}

void clearServerSessionSource(ServerSessionSource const& source) noexcept {
    std::scoped_lock lock{ServerSessionSourceMutex};
    if (CurrentServerSessionSource.get() == &source) CurrentServerSessionSource.reset();
}

Expected<Session> resolveServerSession(NetworkIdentifierWithSubId const& recipient) noexcept {
    std::shared_ptr<ServerSessionSource> source;
    {
        std::scoped_lock lock{ServerSessionSourceMutex};
        source = CurrentServerSessionSource;
    }
    if (!source) return makeSessionError(SessionErrc::TransportUnavailable);
    return source->resolve(recipient);
}

Expected<std::vector<Session>> snapshotServerSessions() noexcept {
    std::shared_ptr<ServerSessionSource> source;
    {
        std::scoped_lock lock{ServerSessionSourceMutex};
        source = CurrentServerSessionSource;
    }
    if (!source) return makeSessionError(SessionErrc::TransportUnavailable);
    return source->snapshotActive();
}

Expected<> validateServerFanoutThread() noexcept {
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

Expected<Session> getSession(NetworkIdentifierWithSubId const& recipient) noexcept {
    return detail::resolveServerSession(recipient);
}

} // namespace ll::protocol::server
