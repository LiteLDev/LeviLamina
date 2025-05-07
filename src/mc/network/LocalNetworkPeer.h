#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class LocalNetworkPeer : public ::NetworkPeer {
public:
    // LocalNetworkPeer inner types declare
    // clang-format off
    struct IncomingData;
    // clang-format on

    // LocalNetworkPeer inner types define
    struct IncomingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf996fd;
        ::ll::UntypedStorage<8, 8>  mUnkd4dc08;
        // NOLINTEND

    public:
        // prevent constructor by default
        IncomingData& operator=(IncomingData const&);
        IncomingData(IncomingData const&);
        IncomingData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4398dc;
    ::ll::UntypedStorage<8, 8>  mUnk6da0a3;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalNetworkPeer& operator=(LocalNetworkPeer const&);
    LocalNetworkPeer(LocalNetworkPeer const&);
    LocalNetworkPeer();

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

    // vIndex: 6
    virtual bool isLocal() const /*override*/;

    // vIndex: 7
    virtual bool isEncrypted() const /*override*/;

    // vIndex: 0
    virtual ~LocalNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
