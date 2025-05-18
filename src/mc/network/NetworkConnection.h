#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/network/BatchedNetworkPeer.h"
#include "mc/network/CompressedNetworkPeer.h"
#include "mc/network/EncryptedNetworkPeer.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
class BatchedNetworkPeer;
class CompressedNetworkPeer;
class EncryptedNetworkPeer;
class IPacketObserver;
class IPacketSecurityController;
class LatencyNetworkPeer;
class NetworkPacketRecorder;
class NetworkPeer;
class Scheduler;
struct NetworkSettingOptions;
// clang-format on

class NetworkConnection {
public:
    // NetworkConnection inner types declare
    // clang-format off
    struct PausedPacket;
    // clang-format on

    // NetworkConnection inner types define
    enum class Type : int {
        Remote = 0,
        Local  = 1,
    };

    struct PausedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          mData;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimepoint;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PausedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::NetworkIdentifier>                     mId;
    ::ll::TypedStorage<4, 4, ::NetworkConnection::Type>                 mType;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::NetworkPacketRecorder>> mNetworkPacketRecorder;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::EncryptedNetworkPeer>>  mEncryptedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CompressedNetworkPeer>> mCompressedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::BatchedNetworkPeer>>    mBatchedPeer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LatencyNetworkPeer>>    mLatencyPeer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkPeer>>         mPeer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>   mLastPacketTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>   mClosedTime;
    ::ll::TypedStorage<4, 4, ::std::bitset<2>>                          mPausedChannels;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<::NetworkConnection::PausedPacket, ::std::deque<::NetworkConnection::PausedPacket>>>
                                                                                                 mResumedPackets;
    ::ll::TypedStorage<8, 48, ::std::array<::std::vector<::NetworkConnection::PausedPacket>, 2>> mPausedPackets;
    ::ll::TypedStorage<1, 1, bool>                                                               mDisconnected;
    ::ll::TypedStorage<1, 1, bool>                                                               mShouldCloseConnection;
    ::ll::TypedStorage<1, 1, bool>                                                               mEncryptionDisabled;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IPacketSecurityController>> mPacketSecurityController;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkConnection(
        ::NetworkIdentifier const&                     id,
        ::std::shared_ptr<::NetworkPeer>               peer,
        bool                                           isSafeAndFast,
        ::Bedrock::NonOwnerPointer<::IPacketObserver>  packetObserver,
        ::Scheduler&                                   mainThread,
        bool                                           settings,
        ::NetworkSettingOptions const&                 packetSecurityController,
        ::std::shared_ptr<::IPacketSecurityController> isRawRecordingEnabled
    );

    MCNAPI ::NetworkPeer::DataStatus receivePacket(
        ::std::string&                                                    receiveBuffer,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );

    MCNAPI ~NetworkConnection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::NetworkIdentifier const&                     id,
        ::std::shared_ptr<::NetworkPeer>               peer,
        bool                                           isSafeAndFast,
        ::Bedrock::NonOwnerPointer<::IPacketObserver>  packetObserver,
        ::Scheduler&                                   mainThread,
        bool                                           settings,
        ::NetworkSettingOptions const&                 packetSecurityController,
        ::std::shared_ptr<::IPacketSecurityController> isRawRecordingEnabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
