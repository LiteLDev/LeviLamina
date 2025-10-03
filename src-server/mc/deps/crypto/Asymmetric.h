#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/ISystemInterface.h"
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/System.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class Asymmetric : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc59a46;
    ::ll::UntypedStorage<8, 8> mUnked0db4;
    // NOLINTEND

public:
    // prevent constructor by default
    Asymmetric& operator=(Asymmetric const&);
    Asymmetric(Asymmetric const&);
    Asymmetric();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Asymmetric() /*override*/ = default;

    // vIndex: 1
    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) /*override*/;

    // vIndex: 2
    virtual bool
    constructPublicKey(::std::string const& modulus, ::std::string const& exponent, ::std::string& keyOut) /*override*/;

    // vIndex: 3
    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat
    ) /*override*/;

    // vIndex: 4
    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) /*override*/;

    // vIndex: 5
    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) /*override*/;

    // vIndex: 6
    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) /*override*/;

    // vIndex: 7
    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Asymmetric(::Crypto::Asymmetric::System system);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $generateKeyPair(::std::string& privateKey, ::std::string& publicKey);

    MCNAPI bool $constructPublicKey(::std::string const& modulus, ::std::string const& exponent, ::std::string& keyOut);

    MCNAPI ::std::string $encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat
    );

    MCNAPI ::std::string
    $decryptData(::std::string const& privateKey, ::std::string const& data, ::Crypto::Asymmetric::Padding paddingType);

    MCNAPI ::std::string $signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    );

    MCNAPI bool $verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    );

    MCNAPI ::std::string $computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
