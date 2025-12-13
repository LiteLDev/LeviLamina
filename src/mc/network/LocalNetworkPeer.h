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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::LocalNetworkPeer::IncomingData& operator=(::LocalNetworkPeer::IncomingData&&);

        MCNAPI_C ~IncomingData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendPacket(::std::string const& data, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual bool isLocal() const /*override*/;

    virtual bool isEncrypted() const /*override*/;

    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;

    virtual ~LocalNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C LocalNetworkPeer();

    MCNAPI_C void addIncomingData(::std::string data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability, ::Compressibility);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI bool $isLocal() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
