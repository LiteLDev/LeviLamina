#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkSettingOptions.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    CompressedNetworkPeer& operator=(CompressedNetworkPeer const&);
    CompressedNetworkPeer(CompressedNetworkPeer const&);
    CompressedNetworkPeer();

    std::string           mSendBuffer;         // this+0x18
    std::string           mReceiveBuffer;      // this+0x38
    bool                  mCompressionEnabled; // this+0x58
    NetworkSettingOptions mNetworkSettings;    // this+0x5C

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI struct NetworkPeer::NetworkStatus getNetworkStatus$() const;

    MCAPI ::NetworkPeer::DataStatus
    receivePacket$(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr);

    MCAPI void
    sendPacket$(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // NOLINTEND
};
