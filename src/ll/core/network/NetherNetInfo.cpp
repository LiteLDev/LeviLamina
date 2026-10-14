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
// Modified by LeviMC in 2026.

#include "ll/core/network/NetherNetInfo.h"

#include <string_view>
#include <variant>

#include "ll/api/base/Containers.h"

namespace ll::network {
struct NetworkIdHash {
    size_t operator()(NetherNet::NetworkID const& id) const {
        using Base = std::variant<std::monostate, NetherNet::P2P::NetworkID, NetherNet::Realms::NetworkID>;
        return std::visit(
            []<class V>(V const& value) -> size_t {
                if constexpr (std::is_same_v<V, std::monostate>) {
                    return 0;
                } else {
                    return std::hash<decltype(value.mValue)>{}(value.mValue);
                }
            },
            static_cast<Base const&>(id)
        );
    }
};

struct NetherNetInfo::Impl {
    std::mutex                                                                    mutex;
    StringMap<NetherNet::NetworkID>                                               byUfrag;
    DenseMap<NetherNet::NetworkID, std::pair<std::string, ushort>, NetworkIdHash> byId;
    std::deque<std::string>                                                       ufragOrder;
    std::deque<NetherNet::NetworkID>                                              idOrder;
};

NetherNetInfo::NetherNetInfo() : impl(std::make_unique<Impl>()) {}
NetherNetInfo::~NetherNetInfo() = default;

NetherNetInfo& NetherNetInfo::getInstance() {
    static NetherNetInfo instance;
    return instance;
}

static constexpr std::string_view UfragAttribute     = "a=ice-ufrag:";
static constexpr std::size_t      MaxPendingSessions = 256;

void NetherNetInfo::addSession(NetherNet::NetworkID const& id, std::string_view const sdp) {
    auto const begin = sdp.find(UfragAttribute);
    if (begin == std::string_view::npos) {
        return;
    }
    auto const value = sdp.substr(begin + UfragAttribute.size());
    auto const ufrag = value.substr(0, value.find_first_of("\r\n"));
    if (ufrag.empty()) {
        return;
    }

    std::lock_guard const lock(impl->mutex);
    if (impl->byUfrag.insert_or_assign(std::string(ufrag), id).second) {
        impl->ufragOrder.emplace_back(ufrag);
    }
    while (impl->ufragOrder.size() > MaxPendingSessions) {
        impl->byUfrag.erase(impl->ufragOrder.front());
        impl->ufragOrder.pop_front();
    }
}

void NetherNetInfo::addAddress(webrtc::Candidate const& candidate, std::pair<std::string, ushort> const& address) {
    std::lock_guard const lock(impl->mutex);
    auto const            it = impl->byUfrag.find(*candidate.username_);
    if (it == impl->byUfrag.end()) {
        return;
    }
    if (impl->byId.insert_or_assign(it->second, address).second) {
        impl->idOrder.emplace_back(it->second);
    }
    while (impl->idOrder.size() > MaxPendingSessions) {
        impl->byId.erase(impl->idOrder.front());
        impl->idOrder.pop_front();
    }
}

std::pair<std::string, ushort> NetherNetInfo::get(NetherNet::NetworkID const& id) {
    std::lock_guard const lock(impl->mutex);
    auto const            it = impl->byId.find(id);
    if (it == impl->byId.end()) {
        return {};
    }
    return it->second;
}

} // namespace ll::network
