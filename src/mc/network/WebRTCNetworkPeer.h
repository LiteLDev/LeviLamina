#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Compressibility.h"
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
    unsigned int                                          mNumNetworkStatusUpdates; // this+0xA8

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WebRTCNetworkPeer@@UEAA@XZ
    virtual ~WebRTCNetworkPeer();

    // vIndex: 1, symbol:
    // ?sendPacket@WebRTCNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
    virtual void sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

    // vIndex: 2, symbol:
    // ?receivePacket@WebRTCNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3, symbol: ?getNetworkStatus@WebRTCNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 4, symbol: ?update@WebRTCNetworkPeer@@UEAAXXZ
    virtual void update();

    // vIndex: 6, symbol: ?isLocal@WebRTCNetworkPeer@@UEBA_NXZ
    virtual bool isLocal() const;

    // vIndex: 7, symbol: ?isEncrypted@WebRTCNetworkPeer@@UEBA_NXZ
    virtual bool isEncrypted() const;

    // symbol: ??0WebRTCNetworkPeer@@QEAA@$$QEAV?$NonOwnerPointer@UNetherNetConnector@@@Bedrock@@_K@Z
    MCAPI WebRTCNetworkPeer(class Bedrock::NonOwnerPointer<struct NetherNetConnector>&&, uint64);

    // symbol: ?getPeerId@WebRTCNetworkPeer@@QEBA_KXZ
    MCAPI uint64 getPeerId() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateConnectionStatus@WebRTCNetworkPeer@@AEAAXXZ
    MCAPI void _updateConnectionStatus();

    // NOLINTEND
};
