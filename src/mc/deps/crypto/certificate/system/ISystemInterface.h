#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Encoding.h"
#include "mc/deps/crypto/ThumbprintFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual ::std::string serialize(::Crypto::Certificate::Encoding) const = 0;

    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding) const = 0;

    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding) const = 0;

    virtual ::std::string getIssuer() const = 0;

    virtual bool hasValidCertChain() const = 0;

    virtual ::std::string
        generateCertificateThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;

    virtual ::std::string
        generatePublicKeyThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Certificate
