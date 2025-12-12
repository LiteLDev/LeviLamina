#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Encoding.h"
#include "mc/deps/crypto/ThumbprintFormat.h"
#include "mc/deps/crypto/certificate/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class Certificate : public ::Crypto::Certificate::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7286b8;
    // NOLINTEND

public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&);
    Certificate(Certificate const&);
    Certificate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Certificate() /*override*/ = default;

    virtual ::std::string serialize(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string getIssuer() const /*override*/;

    virtual bool hasValidCertChain() const /*override*/;

    virtual ::std::string generateCertificateThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const /*override*/;

    virtual ::std::string generatePublicKeyThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::string $serialize(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $extractPublicKey(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $extractPrivateKey(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $getIssuer() const;

    MCNAPI bool $hasValidCertChain() const;

    MCNAPI ::std::string $generateCertificateThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const;

    MCNAPI ::std::string $generatePublicKeyThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const;
#endif


    // NOLINTEND
};

} // namespace Crypto::Certificate
