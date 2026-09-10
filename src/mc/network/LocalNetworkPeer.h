#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
class LocalConnector;
// clang-format on

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
        ::ll::UntypedStorage<8, 32> mUnk1c1620;
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
    ::ll::UntypedStorage<8, 16> mUnk6cf7f4;
    ::ll::UntypedStorage<8, 16> mUnk4398dc;
    ::ll::UntypedStorage<8, 8>  mUnk1898c5;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalNetworkPeer& operator=(LocalNetworkPeer const&);
    LocalNetworkPeer(LocalNetworkPeer const&);
    LocalNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalNetworkPeer() /*override*/ = default;

    virtual void sendPacket(::std::string const& data, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual bool isLocal() const /*override*/;

    virtual bool isEncrypted() const /*override*/;

    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit LocalNetworkPeer(::LocalConnector& connector);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::LocalConnector& connector);
#endif
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
};
