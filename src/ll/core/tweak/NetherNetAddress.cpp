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
    // TODO: remove these as<> after next header generation
    auto&       socketAddress                = candidate.mUnkdd6b1a.as<webrtc::SocketAddress>();
    auto const& ip                           = socketAddress.mUnkd77baf.as<webrtc::IPAddress>();
    char        buffer[INET6_ADDRSTRLEN + 1] = {};
    union IPUnion {
        in_addr  ip4;
        in6_addr ip6;
    };
    auto& un = ip.mUnk286fd5.as<IPUnion>();
    switch (ip.mUnkc3f00a.as<int>()) { // family_
    case AF_INET:
        if (!inet_ntop(AF_INET, &un.ip4, buffer, sizeof(buffer))) {
            return {};
        }
        break;
    case AF_INET6:
        if (!inet_ntop(AF_INET6, &un.ip6, buffer, sizeof(buffer))) {
            return {};
        }
        break;
    default:
        return {};
    }
    return {buffer, socketAddress.mUnk9157d3.as<ushort>()}; // port_
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
