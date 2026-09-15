#include "ll/core/protocol/ClientTransport.h"

#include <utility>

#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ClientEndpoint.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"

namespace ll::protocol::detail {

ClientTransport::ClientTransport(NetworkIdentifierWithSubId peer, std::uint64_t generation)
: mPeer(std::move(peer)),
  mGeneration(generation) {}

bool ClientTransport::isOnEndpointThread() const {
    auto endpoint = getClientEndpoint();
    return endpoint && endpoint->isOnEndpointThread();
}

Expected<> ClientTransport::sendLogical(std::unique_ptr<ll::network::Packet> packet) noexcept {
    try {
        if (!packet) return makeTransportError(TransportErrc::RuntimePacketUnavailable);

        auto endpoint = getClientEndpoint();
        if (!endpoint || !endpoint->isOnEndpointThread()) {
            return makeSessionError(SessionErrc::WrongThread);
        }

        if (endpoint->currentGeneration(mPeer.id) != mGeneration) {
            return makeSessionError(SessionErrc::WrongGeneration);
        }

        packet->mSenderSubId = mPeer.subClientId;

        ll::network::RuntimePacket runtime{std::move(packet)};
        if (!runtime.hasPacket() || runtime.getRuntimeId() == 0) {
            return makeTransportError(TransportErrc::RuntimePacketUnavailable, "invalid RuntimePacket envelope");
        }

        try {
            runtime.sendToServer();
        } catch (...) {
            return makeTransportError(TransportErrc::SendFailed, "Minecraft packet sender threw while sending");
        }

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ClientTransport::send(std::unique_ptr<ProtocolEnvelopePacket> packet) noexcept {
    return sendLogical(std::move(packet));
}

Expected<> ClientTransport::sendControl(std::unique_ptr<ControlPacket> packet) noexcept {
    return sendLogical(std::move(packet));
}

} // namespace ll::protocol::detail
