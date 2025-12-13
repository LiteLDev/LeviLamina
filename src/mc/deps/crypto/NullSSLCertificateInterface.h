#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Encoding.h"
#include "mc/deps/crypto/ThumbprintFormat.h"
#include "mc/deps/crypto/certificate/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class NullSSLCertificateInterface : public ::Crypto::Certificate::ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSSLCertificateInterface() /*override*/ = default;

    virtual ::std::string serialize(::Crypto::Certificate::Encoding) const /*override*/;

    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding) const /*override*/;

    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding) const /*override*/;

    virtual ::std::string getIssuer() const /*override*/;

    virtual bool hasValidCertChain() const /*override*/;

    virtual ::std::string
        generateCertificateThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const
        /*override*/;

    virtual ::std::string
        generatePublicKeyThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Certificate
