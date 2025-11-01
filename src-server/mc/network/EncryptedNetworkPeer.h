#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc8cc56;
    ::ll::UntypedStorage<8, 8> mUnk99faeb;
    ::ll::UntypedStorage<8, 8> mUnkec58b2;
    ::ll::UntypedStorage<8, 8> mUnkbe3a4f;
    ::ll::UntypedStorage<8, 8> mUnk6783be;
    ::ll::UntypedStorage<8, 8> mUnk6732e8;
    ::ll::UntypedStorage<8, 32> mUnk2d4ea0;
    ::ll::UntypedStorage<8, 32> mUnkfcfda9;
    ::ll::UntypedStorage<8, 32> mUnk741ffc;
    ::ll::UntypedStorage<8, 32> mUnk38b2f6;
    ::ll::UntypedStorage<8, 32> mUnk83826f;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedNetworkPeer& operator=(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncryptedNetworkPeer() /*override*/;

    // vIndex: 1
    virtual void sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 6
    virtual bool isEncrypted() const /*override*/;

    // vIndex: 7
    virtual ::NetworkPeer::DataStatus _receivePacket(::std::string& outData, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EncryptedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer);

    MCNAPI void enableEncryption(::std::string const& symmetricKey);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    MCNAPI ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCNAPI bool $isEncrypted() const;

    MCNAPI ::NetworkPeer::DataStatus $_receivePacket(::std::string& outData, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
