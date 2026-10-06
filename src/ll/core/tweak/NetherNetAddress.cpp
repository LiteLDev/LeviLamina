#include "ll/api/memory/Hook.h"
#include "ll/core/network/NetherNetInfo.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/nether_net/SimpleNetworkInterfaceImpl.h"
#include "mc/external/webrtc/CandidatePairInterface.h"
#include "mc/external/webrtc/IPAddress.h"
#include "mc/external/webrtc/P2PTransportChannel.h"
#include "mc/external/webrtc/SocketAddress.h"

#include <ws2tcpip.h>

namespace ll::network {

std::pair<std::string, ushort> CandidateToAddress(webrtc::Candidate const& candidate) {
    auto& socketAddress                = candidate.address_.get();
    char  buffer[INET6_ADDRSTRLEN + 1] = {};
    switch (socketAddress.ip_->family_) { // family_
    case AF_INET:
        if (!inet_ntop(AF_INET, &socketAddress.ip_->u_.mUnk9f400a.as<in_addr>(), buffer, sizeof(buffer))) {
            return {};
        }
        break;
    case AF_INET6:
        if (!inet_ntop(AF_INET6, &socketAddress.ip_->u_.mUnkeb8c53.as<in6_addr>(), buffer, sizeof(buffer))) {
            return {};
        }
        break;
    default:
        return {};
    }
    return {buffer, socketAddress.port_};
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    SwitchConnectionHook,
    HookPriority::High,
    webrtc::P2PTransportChannel,
    &webrtc::P2PTransportChannel::SwitchSelectedConnectionInternal,
    void,
    webrtc::Connection*     conn,
    webrtc::IceSwitchReason reason
) {
    // Read conn's live remote_candidate; the CandidatePairChangeEvent built below is a ToSanitizedCopy.
    if (conn != nullptr) {
        auto const& remote = reinterpret_cast<webrtc::CandidatePairInterface const*>(conn)->remote_candidate();
        NetherNetInfo::getInstance().addAddress(remote, CandidateToAddress(remote));
    }
    origin(conn, reason);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    ReceiveFromSignalingChannelHook,
    HookPriority::High,
    NetherNet::SimpleNetworkInterfaceImpl,
    &NetherNet::SimpleNetworkInterfaceImpl::ReceiveFromSignalingChannel,
    void,
    NetherNet::NetworkID          from,
    std::string_view              message,
    NetherNet::SignalingChannelId sourceChannel
) {
    NetherNetInfo::getInstance().addSession(from, message);
    origin(from, message, sourceChannel);
}
} // namespace ll::network
