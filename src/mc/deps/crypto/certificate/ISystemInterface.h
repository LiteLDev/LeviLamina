#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/certificate/Encoding.h"
#include "mc/deps/crypto/certificate/ThumbprintFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystemInterface() = default;

    // vIndex: 1
    virtual ::std::string serialize(::Crypto::Certificate::Encoding) const = 0;

    // vIndex: 2
    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding) const = 0;

    // vIndex: 3
    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding) const = 0;

    // vIndex: 4
    virtual ::std::string getIssuer() const = 0;

    // vIndex: 5
    virtual bool hasValidCertChain() const = 0;

    // vIndex: 6
    virtual ::std::string
        generateCertificateThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;

    // vIndex: 7
    virtual ::std::string
        generatePublicKeyThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Certificate
