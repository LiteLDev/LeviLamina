#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc8cc56;
    ::ll::UntypedStorage<8, 8>  mUnk99faeb;
    ::ll::UntypedStorage<8, 8>  mUnkec58b2;
    ::ll::UntypedStorage<8, 8>  mUnkbe3a4f;
    ::ll::UntypedStorage<8, 8>  mUnk6783be;
    ::ll::UntypedStorage<8, 8>  mUnk6732e8;
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

    // vIndex: 7
    virtual bool isEncrypted() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EncryptedNetworkPeer(::std::shared_ptr<::NetworkPeer> peer);

    MCAPI void enableEncryption(::std::string const& symmetricKey);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI bool $isEncrypted() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
