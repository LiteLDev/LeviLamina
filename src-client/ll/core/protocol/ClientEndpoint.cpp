#include "ll/core/protocol/ClientEndpoint.h"

#include <atomic>
#include <utility>

#include "ll/api/protocol/Error.h"

NetherNet::P2P::NetworkID::NetworkID(NetherNet::P2P::NetworkID const&) = default;

NetherNet::P2P::NetworkID& NetherNet::P2P::NetworkID::operator=(NetherNet::P2P::NetworkID const&) = default;

NetherNet::Realms::NetworkID::NetworkID(NetherNet::Realms::NetworkID const&) = default;

NetherNet::Realms::NetworkID& NetherNet::Realms::NetworkID::operator=(NetherNet::Realms::NetworkID const&) = default;

namespace ll::protocol::detail {

std::mutex                      ClientEndpointMutex;
std::shared_ptr<ClientEndpoint> CurrentClientEndpoint;
std::atomic_uint64_t            NextClientEndpointInstanceId{1};

ClientEndpoint::ClientEndpoint(std::uint64_t endpointInstanceId) noexcept
: mLifecycle(endpointInstanceId, EndpointRole::Client) {}

bool ClientEndpoint::isOnEndpointThread() const noexcept {
    std::scoped_lock lock{mMutex};
    return mEndpointThread != std::thread::id{} && mEndpointThread == std::this_thread::get_id();
}

void ClientEndpoint::observeConnection(NetworkIdentifier const& id) noexcept {
    std::string   key;
    std::uint64_t generationValue{};
    try {
        key = id.toString();

        auto generation = mLifecycle.openConnection(key);
        if (!generation) return;

        generationValue = *generation;

        std::scoped_lock lock{mMutex};
        mEndpointThread = std::this_thread::get_id();

        mConnection.reset();
        mConnection.emplace(ConnectionRecord{id, key, generationValue, 0});
    } catch (...) {
        if (generationValue != 0) {
            mLifecycle.closeConnection(key, generationValue, ProtocolCloseReason::ConnectionClosed);

            std::scoped_lock lock{mMutex};
            if (mConnection && mConnection->key == key) mConnection.reset();
        }
    }
}

std::uint64_t ClientEndpoint::currentGeneration(NetworkIdentifier const& id) const noexcept {
    try {
        std::scoped_lock lock{mMutex};
        return mConnection && mConnection->id == id ? mConnection->generation : 0;
    } catch (...) {
        return 0;
    }
}

Expected<std::shared_ptr<ProtocolSession>> ClientEndpoint::openSession(
    NetworkIdentifier const&                id,
    std::uint8_t                            subClientId,
    std::uint64_t                           generation,
    std::uint64_t                           handshakeId,
    std::shared_ptr<RegistrySnapshot const> registry,
    std::shared_ptr<SessionTransport>       transport,
    TransportLimits                         limits
) noexcept {
    try {
        std::string key;
        {
            std::scoped_lock lock{mMutex};
            if (!mConnection || !(mConnection->id == id) || mConnection->generation != generation) {
                return makeSessionError(SessionErrc::WrongGeneration);
            }

            key = mConnection->key;
        }

        auto session = mLifecycle.openSession(
            key,
            subClientId,
            generation,
            handshakeId,
            std::move(registry),
            std::move(transport),
            limits
        );
        if (!session) return session;

        bool stale{};
        {
            std::scoped_lock lock{mMutex};
            if (!mConnection || !(mConnection->id == id) || mConnection->generation != generation) {
                stale = true;
            } else {
                mConnection->subClientId = subClientId;
            }
        }

        if (stale) {
            mLifecycle.closeSubclient(key, subClientId, generation, ProtocolCloseReason::ConnectionClosed);
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        return session;
    } catch (...) {
        return makeExceptionError();
    }
}

void ClientEndpoint::closeConnection(NetworkIdentifier const& id, ProtocolCloseReason reason) noexcept {
    try {
        std::string   key;
        std::uint64_t generation{};
        {
            std::scoped_lock lock{mMutex};

            if (!mConnection || !(mConnection->id == id)) return;

            key        = mConnection->key;
            generation = mConnection->generation;
            mConnection.reset();
        }

        mLifecycle.closeConnection(key, generation, reason);
    } catch (...) {}
}

void ClientEndpoint::closeAll(ProtocolCloseReason reason) noexcept {
    {
        std::scoped_lock lock{mMutex};
        mConnection.reset();
    }
    mLifecycle.closeAll(reason);
}

Expected<Session> ClientEndpoint::currentSession() noexcept {
    try {
        std::string   key;
        std::uint64_t generation{};
        std::uint8_t  subClientId{};
        {
            std::scoped_lock lock{mMutex};

            if (!mConnection) return makeSessionError(SessionErrc::NotFound);

            key         = mConnection->key;
            generation  = mConnection->generation;
            subClientId = mConnection->subClientId;
        }

        auto session = mLifecycle.findSession(key, subClientId, generation);

        if (!session) return makeSessionError(SessionErrc::NotNegotiated);
        return SessionAccess::makeSession(session);
    } catch (...) {
        return makeExceptionError();
    }
}

std::shared_ptr<ClientEndpoint> getClientEndpoint() noexcept {
    std::scoped_lock lock{ClientEndpointMutex};
    return CurrentClientEndpoint;
}

} // namespace ll::protocol::detail
