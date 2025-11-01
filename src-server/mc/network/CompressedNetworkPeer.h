#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkSettingOptions.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/NetworkSettingOptions.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mSendBuffer;
    ::ll::TypedStorage<8, 32, ::std::string> mReceiveBuffer;
    ::ll::TypedStorage<1, 1, bool> mCompressionEnabled;
    ::ll::TypedStorage<1, 1, bool> mHybridCompressionEnabled;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions> mNetworkSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompressedNetworkPeer() /*override*/ = default;

    // vIndex: 1
    virtual void sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 7
    virtual ::NetworkPeer::DataStatus _receivePacket(::std::string& outData, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CompressedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(::std::string& outData, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
