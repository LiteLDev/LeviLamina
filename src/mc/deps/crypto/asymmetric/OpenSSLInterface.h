#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Asymmetric {

class OpenSSLInterface {
public:
    // prevent constructor by default
    OpenSSLInterface& operator=(OpenSSLInterface const&);
    OpenSSLInterface(OpenSSLInterface const&);
    OpenSSLInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenSSLInterface() = default;

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

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _computeSharedSecretECC(std::string const&, std::string const&);

    MCAPI std::string
          _decryptDataRSA(std::string const& privateKey, std::string const& data, ::Crypto::Asymmetric::Padding);

    MCAPI std::string _encryptDataRSA(
        std::string const& publicKey,
        std::string const& data,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat
    );

    MCAPI bool _generateKeyPairECC(std::string& privateKey, std::string& publicKey);

    // NOLINTEND
};

}; // namespace Crypto::Asymmetric
