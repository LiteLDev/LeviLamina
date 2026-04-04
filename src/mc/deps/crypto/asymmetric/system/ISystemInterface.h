#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) = 0;

    virtual bool
    constructPublicKey(::std::string const& modulus, ::std::string const& exponent, ::std::string& keyOut) = 0;

    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    ) = 0;

    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) = 0;

    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) = 0;

    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) = 0;

    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Asymmetric
