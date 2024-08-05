#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/BatchedNetworkPeer.h"
#include "mc/network/CompressedNetworkPeer.h"
#include "mc/network/EncryptedNetworkPeer.h"
#include "mc/network/NetworkConnectionType.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkPeer.h"

class NetworkConnection {
public:
    // NetworkConnection inner types declare
    // clang-format off
    struct PausedPacket;
    // clang-format on

    // NetworkConnection inner types define
    struct PausedPacket {
    public:
        // prevent constructor by default
        PausedPacket& operator=(PausedPacket const&);
        PausedPacket(PausedPacket const&);
        PausedPacket();

        std::string                           mData;
        std::chrono::steady_clock::time_point mTimepoint;

    public:
        // NOLINTBEGIN
        MCAPI ~PausedPacket();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkConnection& operator=(NetworkConnection const&);
    NetworkConnection(NetworkConnection const&);
    NetworkConnection();

    NetworkIdentifier                        mId;                    // this+0x0
    NetworkConnectionType                    mType;                  // this+0xA0
    std::weak_ptr<NetworkPeer>               mUnknown;               // this+0xA8
    std::weak_ptr<EncryptedNetworkPeer>      mEncryptedPeer;         // this+0xB8
    std::weak_ptr<CompressedNetworkPeer>     mCompressedPeer;        // this+0xC8
    std::weak_ptr<BatchedNetworkPeer>        mBatchedPeer;           // this+0xD8
    std::shared_ptr<NetworkPeer>             mPeer;                  // this+0xE8
    std::chrono::steady_clock::time_point    mLastPacketTime;        // this+0xF8
    std::chrono::steady_clock::time_point    mClosedTime;            // this+0x100
    bool                                     mShouldCloseConnection; // this+0x108
    bool                                     mDisconnected;          // this+0x109
    std::bitset<2>                           mPausedChannels;        // this+0x10C
    std::queue<PausedPacket>                 mResumedPackets;        // this+0x110
    std::array<std::vector<PausedPacket>, 2> mPausedPackets;         // this+0x138

public:
    // NOLINTBEGIN
    MCAPI NetworkConnection(
        class NetworkIdentifier const&,
        std::shared_ptr<class NetworkPeer>,
        std::chrono::steady_clock::time_point,
        bool,
        class Bedrock::NonOwnerPointer<class IPacketObserver>,
        class Scheduler&,
        bool,
        bool
    );

    MCAPI ::NetworkPeer::DataStatus
    receivePacket(std::string&, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    MCAPI ~NetworkConnection();

    // NOLINTEND
};
