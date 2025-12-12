#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/Encoding.h"
#include "mc/deps/crypto/ThumbprintFormat.h"
#include "mc/deps/crypto/certificate/system/ISystemInterface.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class OpenSSLCertificateInterface : public ::Crypto::Certificate::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkef7645;
    ::ll::UntypedStorage<8, 8> mUnk3e821e;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLCertificateInterface& operator=(OpenSSLCertificateInterface const&);
    OpenSSLCertificateInterface(OpenSSLCertificateInterface const&);
    OpenSSLCertificateInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLCertificateInterface() /*override*/ = default;

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
    // member functions
    // NOLINTBEGIN
    MCNAPI_S
    OpenSSLCertificateInterface(::Crypto::Certificate::Encoding encoding, ::std::string const& certificateData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static ::std::string
    _formatThumbprint(::std::string const& rawThumbprint, ::Crypto::Certificate::ThumbprintFormat formatting);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::Crypto::Certificate::Encoding encoding, ::std::string const& certificateData);
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
