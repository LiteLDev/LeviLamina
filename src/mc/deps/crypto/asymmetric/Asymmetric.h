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
        std::string const& publicKey,
        std::string const& data,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    );

    // vIndex: 3
    virtual std::string
    decryptData(std::string const& privateKey, std::string const& data, ::Crypto::Asymmetric::Padding);

    // vIndex: 4
    virtual std::string signData(
        std::string const&,
        std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    );

    // vIndex: 5
    virtual bool verifyData(
        std::string const&       publicKey,
        std::string const&       signature,
        std::string const&       data,
        ::Crypto::Hash::HashType hash
    );

    // vIndex: 6
    virtual std::string computeSharedSecret(std::string const&, std::string const&);

    MCAPI explicit Asymmetric(::Crypto::Asymmetric::System system);

    MCAPI bool canComputeSecret();

    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
