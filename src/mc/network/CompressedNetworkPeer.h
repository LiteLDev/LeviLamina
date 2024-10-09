#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    CompressedNetworkPeer& operator=(CompressedNetworkPeer const&);
    CompressedNetworkPeer(CompressedNetworkPeer const&);
    CompressedNetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompressedNetworkPeer() = default;

    // vIndex: 1
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr);

    // vIndex: 3
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    MCAPI explicit CompressedNetworkPeer(std::shared_ptr<class NetworkPeer> peer);

    MCAPI void setCompressionEnabled(bool val, struct NetworkSettingOptions options);

    // NOLINTEND
};
