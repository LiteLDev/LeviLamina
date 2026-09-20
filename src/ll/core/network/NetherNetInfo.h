#pragma once
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/external/webrtc/Candidate.h"

namespace ll::network {
class NetherNetInfo {
    struct Impl;

    std::unique_ptr<Impl> impl;

    NetherNetInfo();
    ~NetherNetInfo();

public:
    static NetherNetInfo& getInstance();

    void addSession(NetherNet::NetworkID const& id, std::string_view sdp);
    void addAddress(webrtc::Candidate const& candidate, std::pair<std::string, ushort> const& address);
    [[nodiscard]] std::pair<std::string, ushort> get(NetherNet::NetworkID const& id);
};
} // namespace ll::network
