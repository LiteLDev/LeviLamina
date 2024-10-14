#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class NetherNetInstance;

class WebRTCNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    WebRTCNetworkPeer& operator=(WebRTCNetworkPeer const&);
    WebRTCNetworkPeer(WebRTCNetworkPeer const&);
    WebRTCNetworkPeer();

    std::string                                           mSendBuffer;              // this+0x18
    std::vector<std::string, std::allocator<std::string>> mReadBuffers;             // this+0x38
    std::shared_ptr<NetherNetInstance>                    mNetherNetInstance;       // this+0x50
    uint64_t                                              mRemoteUserId;            // this+0x60
    bool                                                  mWasConnected;            // this+0x68
    bool                                                  mConnectionLost;          // this+0x69
    NetworkPeer::NetworkStatus                            mNetherNetNetworkStatus;  // this+0x70
    uint                                                  mNumNetworkStatusUpdates; // this+0xA8

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebRTCNetworkPeer();

    // vIndex: 1
    virtual void sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr);

    // vIndex: 3
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 4
    virtual void update();

    // vIndex: 6
    virtual bool isLocal() const;

    // vIndex: 7
    virtual bool isEncrypted() const;

    MCAPI WebRTCNetworkPeer(class Bedrock::NonOwnerPointer<struct NetherNetConnector>&& connector, uint64 peerId);

    MCAPI uint64 getPeerId() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updateConnectionStatus();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI struct NetworkPeer::NetworkStatus getNetworkStatus$() const;

    MCAPI bool isEncrypted$() const;

    MCAPI bool isLocal$() const;

    MCAPI ::NetworkPeer::DataStatus
    receivePacket$(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const& timepointPtr);

    MCAPI void sendPacket$(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

    MCAPI void update$();

    // NOLINTEND
};
