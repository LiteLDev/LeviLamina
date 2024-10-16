#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/System.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class Asymmetric {
public:
    // prevent constructor by default
    Asymmetric& operator=(Asymmetric const&);
    Asymmetric(Asymmetric const&);
    Asymmetric();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Asymmetric() = default;

    // vIndex: 1
    virtual bool generateKeyPair(std::string& privateKey, std::string& publicKey);

    // vIndex: 2
    virtual std::string encryptData(
        std::string const&                 publicKey,
        std::string const&                 data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat
    );

    // vIndex: 3
    virtual std::string
    decryptData(std::string const& privateKey, std::string const& data, ::Crypto::Asymmetric::Padding paddingType);

    // vIndex: 4
    virtual std::string signData(
        std::string const&                            privateKey,
        std::string const&                            data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    );

    // vIndex: 5
    virtual bool verifyData(
        std::string const&       publicKey,
        std::string const&       signature,
        std::string const&       data,
        ::Crypto::Hash::HashType hash
    );

    // vIndex: 6
    virtual std::string computeSharedSecret(std::string const& myPrivateKey, std::string const& peerPublicKey);

    MCAPI explicit Asymmetric(::Crypto::Asymmetric::System system);

    MCAPI bool canComputeSecret();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::Crypto::Asymmetric::System system);

    MCAPI std::string computeSharedSecret$(std::string const& myPrivateKey, std::string const& peerPublicKey);

    MCAPI std::string
    decryptData$(std::string const& privateKey, std::string const& data, ::Crypto::Asymmetric::Padding paddingType);

    MCAPI std::string encryptData$(
        std::string const&                 publicKey,
        std::string const&                 data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat
    );

    MCAPI bool generateKeyPair$(std::string& privateKey, std::string& publicKey);

    MCAPI std::string signData$(
        std::string const&                            privateKey,
        std::string const&                            data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    );

    MCAPI bool verifyData$(
        std::string const&       publicKey,
        std::string const&       signature,
        std::string const&       data,
        ::Crypto::Hash::HashType hash
    );

    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
