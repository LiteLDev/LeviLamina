#include "ll/core/protocol/ServerTransport.h"

#include <utility>

#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ServerEndpoint.h"

namespace ll::protocol::detail {

ServerTransport::ServerTransport(NetworkIdentifierWithSubId recipient, std::uint64_t generation)
: mRecipient(std::move(recipient)),
  mGeneration(generation) {}

bool ServerTransport::isOnEndpointThread() const {
    auto endpoint = getServerEndpoint();
    return endpoint && endpoint->isOnEndpointThread();
}

Expected<> ServerTransport::sendLogical(std::unique_ptr<ll::network::Packet> packet) noexcept {
    try {
        if (!packet) return makeTransportError(TransportErrc::RuntimePacketUnavailable);

        auto endpoint = getServerEndpoint();
        if (!endpoint || !endpoint->isOnEndpointThread()) return makeSessionError(SessionErrc::WrongThread);

        if (!endpoint->findLiveConnection(mRecipient.id, mGeneration)) {
            return makeSessionError(SessionErrc::TransportUnavailable);
        }

        ll::network::RuntimePacket runtime{std::move(packet)};
        if (!runtime.hasPacket() || runtime.getRuntimeId() == 0) {
            return makeTransportError(TransportErrc::RuntimePacketUnavailable, "invalid RuntimePacket envelope");
        }

        try {
            runtime.sendToClient(mRecipient);
        } catch (...) {
            return makeTransportError(TransportErrc::SendFailed, "Minecraft packet sender threw while sending");
        }

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ServerTransport::send(std::unique_ptr<ProtocolEnvelopePacket> packet) noexcept {
    return sendLogical(std::move(packet));
}

Expected<> ServerTransport::sendControl(std::unique_ptr<ControlPacket> packet) noexcept {
    return sendLogical(std::move(packet));
}

} // namespace ll::protocol::detail
