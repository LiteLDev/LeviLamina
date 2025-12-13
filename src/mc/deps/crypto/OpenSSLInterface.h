#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Padding.h"
#include "mc/deps/crypto/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class OpenSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // OpenSSLInterface inner types define
    enum class SystemType : int {
        Rsa  = 0,
        Ecc  = 1,
        None = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2484a2;
    ::ll::UntypedStorage<4, 4> mUnkce0d9f;
    ::ll::UntypedStorage<4, 4> mUnk931832;
    ::ll::UntypedStorage<4, 4> mUnk46aacc;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLInterface& operator=(OpenSSLInterface const&);
    OpenSSLInterface(OpenSSLInterface const&);
    OpenSSLInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLInterface() /*override*/ = default;

    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) /*override*/;

    virtual bool
    constructPublicKey(::std::string const& modulus, ::std::string const& exponent, ::std::string& keyOut) /*override*/;

    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    ) /*override*/;

    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) /*override*/;

    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) /*override*/;

    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) /*override*/;

    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _computeSharedSecretECC(::std::string const& myPrivateKey, ::std::string const& peerPublicKey);

    MCNAPI ::std::string _decryptDataRSA(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    );

    MCNAPI ::std::string _encryptDataRSA(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    );

    MCNAPI bool _generateKeyPairECC(::std::string& privateKey, ::std::string& publicKey);
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
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
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
