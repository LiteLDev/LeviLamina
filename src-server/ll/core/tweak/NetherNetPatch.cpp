// Copyright (c) 2024, The Endstone Project. (https://endstone.dev) All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// Modified by LeviMC in 2026

#include "ll/core/tweak/NetherNetPatch.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "mc/deps/nether_net/INetherNetTransportInterface.h"
#include "mc/deps/nether_net/INetherNetTransportInterfaceCallbacks.h"
#include "mc/deps/nether_net/ServerNegotiator.h"
#include "mc/deps/nether_net/TransportConfiguration.h"
#include "mc/external/webrtc/Port.h"
#include "mc/network/NetherNetConnector.h"
#include "mc/network/ServerNetworkSystem.h"

namespace ll::network::nether_net_patch {

using namespace ll::i18n_literals;

namespace {

std::uint16_t parsePort(std::string_view const value) {
    unsigned int port    = 0;
    auto const [ptr, ec] = std::from_chars(value.data(), value.data() + value.size(), port);
    if (ec != std::errc{} || ptr != value.data() + value.size() || port == 0 || port > 0xffff) {
        return 0;
    }
    return static_cast<std::uint16_t>(port);
}

// Hosting panels run the server behind a bridge and publish one address, which they hand to the
// process in the environment. Advertising it is what lets a client reach a server it can already
// see, without the operator copying an address into server.properties.
bool addPublishedAddress(NetherNet::TransportConfiguration& config, std::uint16_t const local_port) {
    auto address = ll::sys_utils::getEnvironmentVariable("SERVER_IP");
    if (address.empty() || address == "0.0.0.0" || address == "::") {
        auto& addressFromCfg = ll::getLeviConfig().targeted.netherNetPatch.serverIP;
        if (addressFromCfg.empty() || addressFromCfg == "0.0.0.0" || addressFromCfg == "::") {
            return false;
        } else {
            address = addressFromCfg;
        }
    }
    if (config.mKnownMappedAddressRangeCount != 0) {
        return false;
    }

    auto const published = parsePort(ll::sys_utils::getEnvironmentVariable("SERVER_PORT"));
    auto&      range     = config.mKnownMappedAddressRanges[0];
    range->mInternalAddress->reset();
    range->mInternalPortMin              = local_port;
    range->mInternalPortMax              = local_port;
    range->mExternalAddress              = address;
    range->mExternalPortOffset           = (published != 0 ? published : local_port) - local_port;
    config.mKnownMappedAddressRangeCount = 1;

    ll::getLogger().info(
        "Configured {}:{} as the mapped address for NetherNet."_tr(address, published != 0 ? published : local_port)
    );
    return true;
}

} // namespace

LL_TYPE_INSTANCE_HOOK(
    CreateTransportInterfaceHook,
    HookPriority::High,
    NetherNet::INetherNetTransportInterface,
    "?createTransportInterface@TransportFactoryImpl@?A0x30FC2A75@NetherNet@@UEAAPEAVINetherNetTransportInterface@2@"
    "AEBUNetworkID@2@AEBUTransportConfiguration@2@PEAVINetherNetTransportInterfaceCallbacks@2@@Z"_sym,
    NetherNet::INetherNetTransportInterface*,
    NetherNet::NetworkID const&                       local_id,
    NetherNet::TransportConfiguration const&          configuration,
    NetherNet::INetherNetTransportInterfaceCallbacks* callbacks
) {
    auto const* http =
        std::get_if<NetherNet::TransportConfiguration::Http>(&configuration.mDefaultSignalingChannel.get());
    if (http != nullptr) {
        // #blameMojang - BDS runs the same NetherNet code as a player hosting a world from their console.
        // Every player who joins gets their own UDP port. Fine at home, useless on a rented server with
        // one open port, where only the first player can get in.
        // Fix: put every player on the signaling port. Set both bounds, a zero minimum skips the cache.
        auto& config          = const_cast<NetherNet::TransportConfiguration&>(configuration);
        config.mMinUdpPort    = http->mPort;
        config.mMaxUdpPort    = http->mPort;
        config.mGlobalUdpPort = true;
        addPublishedAddress(config, http->mPort);
    }
    return origin(local_id, configuration, callbacks);
}

namespace {
constexpr int                                           StunErrorUnauthorized = 401;
std::vector<webrtc::PeerConnectionInterface::IceServer> StunServers;
} // namespace

LL_TYPE_INSTANCE_HOOK(
    BindingErrorResponseHook,
    HookPriority::High,
    webrtc::Port,
    &webrtc::Port::$SendBindingErrorResponse,
    void,
    ::webrtc::StunMessage*         message,
    ::webrtc::SocketAddress const& addr,
    int                            error_code,
    ::std::string_view             reason
) {
    // #blameMojang - with everyone on one socket, every port sees every request and answers 401 to the
    // ones that are not its own. A 401 carries no message integrity, so the client believes it and gives
    // up on a request that was about to be answered properly.
    // Fix: stay quiet. The port the request belongs to still replies.
    if (error_code == StunErrorUnauthorized) {
        return;
    }
    origin(message, addr, error_code, reason);
}

LL_TYPE_INSTANCE_HOOK(
    CreateAnswerHook,
    HookPriority::High,
    NetherNet::ServerNegotiator,
    &NetherNet::ServerNegotiator::$createAnswer,
    void,
    webrtc::PeerConnectionInterface::RTCConfiguration const& config,
    NetherNet::ConnectRequest const&                         offer,
    brstd::move_only_function<
        void(Bedrock::Result<::webrtc::scoped_refptr<::webrtc::PeerConnectionInterface>, ::NetherNet::ESessionError>)>&&
        onComplete
) {
    auto& cfg = const_cast<webrtc::PeerConnectionInterface::RTCConfiguration&>(config);
    cfg.servers->append_range(StunServers);
    origin(config, offer, std::move(onComplete));
}

void loadStunConfig() {
    auto& servers = ll::getLeviConfig().targeted.netherNetPatch.stunServers;
    for (auto& uri : servers) {
        if (uri.empty()) {
            continue;
        }
        // Bedrock rejects the whole configuration if any URI is malformed, which stops every
        // session from being created, so drop the bad entry instead of passing it on.
        if (!uri.starts_with("stun:") && !uri.starts_with("stuns:")) {
            ll::getLogger().error("Ignoring STUN server '{}': only stun: and stuns: URIs are supported."_tr(uri));
            continue;
        }
        if (uri.find('@') != std::string::npos || uri.find('?') != std::string::npos) {
            ll::getLogger().error("Ignoring STUN server '{}': the URI must not contain '@' or '?'."_tr(uri));
            continue;
        }
        StunServers.push_back(webrtc::PeerConnectionInterface::IceServer{uri});
    }
    ll::getLogger().info("Configured {} STUN server(s) for NetherNet."_tr(StunServers.size()));
}

void enablePatch() {
    auto& config = ll::getLeviConfig().targeted.netherNetPatch;
    if (config.singlePort) {
        static ll::memory::HookRegistrar<CreateTransportInterfaceHook, BindingErrorResponseHook> reg;
    }
    if (!config.stunServers.empty()) {
        loadStunConfig();
        static ll::memory::HookRegistrar<CreateAnswerHook> reg;
    }
}
} // namespace ll::network::nether_net_patch
