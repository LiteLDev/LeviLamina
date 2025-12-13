#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class LatencyNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7d0116;
    ::ll::UntypedStorage<8, 96> mUnk7c2d2e;
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
    virtual ~LatencyNetworkPeer() /*override*/ = default;

    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
