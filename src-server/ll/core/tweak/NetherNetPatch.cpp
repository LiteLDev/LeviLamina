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
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "mc/deps/nether_net/ServerNegotiator.h"

namespace ll::network::nether_net_patch {

using namespace ll::i18n_literals;

static std::vector<webrtc::PeerConnectionInterface::IceServer> StunServers;

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
    if (!config.stunServers.empty()) {
        loadStunConfig();
        static ll::memory::HookRegistrar<CreateAnswerHook> reg;
    }
}
} // namespace ll::network::nether_net_patch
