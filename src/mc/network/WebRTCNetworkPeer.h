#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/nether_net/NetworkID.h"
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
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID const>                              mPeerId;
    ::ll::TypedStorage<8, 8, uint64 const>                                               mSessionId;
    ::ll::TypedStorage<8, 56, ::NetworkPeer::NetworkStatus>                              mNetherNetNetworkStatus;
    ::ll::TypedStorage<4, 4, uint>                                                       mNumNetworkStatusUpdates;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mPartialData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebRTCNetworkPeer() /*override*/;

    virtual void
    sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual void update() /*override*/;

    virtual bool isLocal() const /*override*/;

    virtual bool isEncrypted() const /*override*/;

    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI void $update();

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
