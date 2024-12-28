#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class LatencyNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7d0116;
    ::ll::UntypedStorage<8, 96> mUnka37b88;
    ::ll::UntypedStorage<8, 8>  mUnk9e18c2;
    // NOLINTEND

public:
    // prevent constructor by default
    LatencyNetworkPeer& operator=(LatencyNetworkPeer const&);
    LatencyNetworkPeer(LatencyNetworkPeer const&);
    LatencyNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LatencyNetworkPeer() /*override*/;

    // vIndex: 1
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility);

    MCAPI ::NetworkPeer::DataStatus
    $receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&);

    MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
    // NOLINTEND
};
