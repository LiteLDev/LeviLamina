#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class HMAC; }
namespace Crypto::Symmetric { class Symmetric; }
// clang-format on

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Symmetric::Symmetric>> mDecryption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::HMAC>>           mEncryptionMAC;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Symmetric::Symmetric>> mEncryption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::HMAC>>           mDecryptionMAC;
    ::ll::TypedStorage<8, 8, uint64>                                            mSendCounter;
    ::ll::TypedStorage<8, 8, uint64>                                            mReceiveCounter;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSendEncryptedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSendSignedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvEncryptedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvSignedDataBuffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mRecvDecryptedDataBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncryptedNetworkPeer() /*override*/;

    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual bool isEncrypted() const /*override*/;

    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;
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

    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI bool $isEncrypted() const;

    MCAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
