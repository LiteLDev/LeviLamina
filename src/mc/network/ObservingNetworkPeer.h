#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class ObservingNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnkb97280;
    ::ll::UntypedStorage<8, 24>  mUnk372c7f;
    // NOLINTEND

public:
    // prevent constructor by default
    ObservingNetworkPeer& operator=(ObservingNetworkPeer const&);
    ObservingNetworkPeer(ObservingNetworkPeer const&);
    ObservingNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus
    receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 0
    virtual ~ObservingNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
