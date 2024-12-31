#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkSettingOptions.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
struct NetworkSettingOptions;
// clang-format on

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mSendBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>           mReceiveBuffer;
    ::ll::TypedStorage<1, 1, bool>                     mCompressionEnabled;
    ::ll::TypedStorage<1, 1, bool>                     mHybridCompressionEnabled;
    ::ll::TypedStorage<4, 24, ::NetworkSettingOptions> mNetworkSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedNetworkPeer& operator=(CompressedNetworkPeer const&);
    CompressedNetworkPeer(CompressedNetworkPeer const&);
    CompressedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompressedNetworkPeer() /*override*/ = default;

    // vIndex: 1
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::DataStatus receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;

    // vIndex: 3
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CompressedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer);

    MCAPI void setCompressionEnabled(bool val, ::NetworkSettingOptions options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    MCAPI ::NetworkPeer::DataStatus $receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );

    MCAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
