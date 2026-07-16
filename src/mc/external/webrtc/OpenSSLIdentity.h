#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/OpenSSLCertificate.h"
#include "mc/external/webrtc/SSLIdentity.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class KeyParams; }
namespace webrtc { class OpenSSLKeyPair; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { struct SSLIdentityParams; }
// clang-format on

namespace webrtc {

class OpenSSLIdentity : public ::webrtc::SSLIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9510e6;
    ::ll::UntypedStorage<8, 8> mUnk930f23;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLIdentity& operator=(OpenSSLIdentity const&);
    OpenSSLIdentity(OpenSSLIdentity const&);
    OpenSSLIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLIdentity() /*override*/;

    virtual ::webrtc::OpenSSLCertificate const& certificate() const /*override*/;

    virtual ::webrtc::SSLCertChain const& cert_chain() const /*override*/;

    virtual ::std::string PrivateKeyToPEMString() const /*override*/;

    virtual ::std::string PublicKeyToPEMString() const /*override*/;

    virtual ::std::unique_ptr<::webrtc::SSLIdentity> CloneInternal() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool ConfigureIdentity(::ssl_ctx_st* ctx);

    MCNAPI OpenSSLIdentity(
        ::std::unique_ptr<::webrtc::OpenSSLKeyPair> key_pair,
        ::std::unique_ptr<::webrtc::SSLCertChain>   cert_chain
    );

    MCNAPI OpenSSLIdentity(
        ::std::unique_ptr<::webrtc::OpenSSLKeyPair>     key_pair,
        ::std::unique_ptr<::webrtc::OpenSSLCertificate> certificate
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::OpenSSLIdentity>
    CreateInternal(::webrtc::SSLIdentityParams const& params);

    MCNAPI static ::std::unique_ptr<::webrtc::OpenSSLIdentity> CreateWithExpiration(
        ::std::string_view         common_name,
        ::webrtc::KeyParams const& key_params,
        int64                      certificate_lifetime
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::unique_ptr<::webrtc::OpenSSLKeyPair> key_pair, ::std::unique_ptr<::webrtc::SSLCertChain> cert_chain);

    MCNAPI void* $ctor(
        ::std::unique_ptr<::webrtc::OpenSSLKeyPair>     key_pair,
        ::std::unique_ptr<::webrtc::OpenSSLCertificate> certificate
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::OpenSSLCertificate const& $certificate() const;

    MCNAPI ::webrtc::SSLCertChain const& $cert_chain() const;

    MCNAPI ::std::string $PrivateKeyToPEMString() const;

    MCNAPI ::std::string $PublicKeyToPEMString() const;

    MCNAPI ::std::unique_ptr<::webrtc::SSLIdentity> $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
