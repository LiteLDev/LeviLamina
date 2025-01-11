#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
struct NetherNetConnector;
// clang-format on

class WebRTCNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector> const> mNetherNetConnector;
    ::ll::TypedStorage<8, 8, uint64 const>                                               mPeerId;
    ::ll::TypedStorage<8, 8, uint64 const>                                               mSessionId;
    ::ll::TypedStorage<8, 56, ::NetworkPeer::NetworkStatus>                              mNetherNetNetworkStatus;
    ::ll::TypedStorage<4, 4, uint>                                                       mNumNetworkStatusUpdates;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mPartialData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebRTCNetworkPeer() /*override*/;

    // vIndex: 1
    virtual void
    sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 4
    virtual void update() /*override*/;

    // vIndex: 6
    virtual bool isLocal() const /*override*/;

    // vIndex: 7
    virtual bool isEncrypted() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    WebRTCNetworkPeer(::Bedrock::NonOwnerPointer<::NetherNetConnector>&& connector, uint64 peerId, uint64 sessionId);

    MCAPI void _updateConnectionStatus();

    MCFOLD uint64 getPeerId() const;

    MCFOLD uint64 getSessionId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::NetherNetConnector>&& connector, uint64 peerId, uint64 sessionId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

    MCAPI ::NetworkPeer::DataStatus $receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );

    MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI void $update();

    MCFOLD bool $isLocal() const;

    MCFOLD bool $isEncrypted() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
