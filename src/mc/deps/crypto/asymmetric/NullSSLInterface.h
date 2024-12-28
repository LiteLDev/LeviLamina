#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/ISystemInterface.h"
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class NullSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // prevent constructor by default
    NullSSLInterface& operator=(NullSSLInterface const&);
    NullSSLInterface(NullSSLInterface const&);
    NullSSLInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSSLInterface() /*override*/;

    // vIndex: 1
    virtual bool generateKeyPair(::std::string&, ::std::string&) /*override*/;

    // vIndex: 2
    virtual ::std::string encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    ) /*override*/;

    // vIndex: 3
    virtual ::std::string
    decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding) /*override*/;

    // vIndex: 4
    virtual ::std::string signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    ) /*override*/;

    // vIndex: 5
    virtual bool
    verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType) /*override*/;

    // vIndex: 6
    virtual ::std::string computeSharedSecret(::std::string const&, ::std::string const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $generateKeyPair(::std::string&, ::std::string&);

    MCAPI ::std::string $encryptData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    );

    MCAPI ::std::string $decryptData(::std::string const&, ::std::string const&, ::Crypto::Asymmetric::Padding);

    MCAPI ::std::string $signData(
        ::std::string const&,
        ::std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    );

    MCAPI bool $verifyData(::std::string const&, ::std::string const&, ::std::string const&, ::Crypto::Hash::HashType);

    MCAPI ::std::string $computeSharedSecret(::std::string const&, ::std::string const&);
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
