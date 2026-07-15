#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/SSLCertificate.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class OpenSSLKeyPair; }
namespace webrtc { struct SSLIdentityParams; }
// clang-format on

namespace webrtc {

class OpenSSLCertificate : public ::webrtc::SSLCertificate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk136a75;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLCertificate& operator=(OpenSSLCertificate const&);
    OpenSSLCertificate(OpenSSLCertificate const&);
    OpenSSLCertificate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLCertificate() /*override*/;

    virtual ::std::unique_ptr<::webrtc::SSLCertificate> Clone() const /*override*/;

    virtual ::std::string ToPEMString() const /*override*/;

    virtual void ToDER(::webrtc::BufferT<uchar, 0>* der_buffer) const /*override*/;

    virtual bool ComputeDigest(::std::string_view algorithm, ::webrtc::BufferT<uchar, 0>& digest) const /*override*/;

    virtual bool GetSignatureDigestAlgorithm(::std::string* algorithm) const /*override*/;

    virtual int64 CertificateExpirationTime() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OpenSSLCertificate(::x509_st* x509);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::OpenSSLCertificate>
    Generate(::webrtc::OpenSSLKeyPair* key_pair, ::webrtc::SSLIdentityParams const& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::x509_st* x509);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SSLCertificate> $Clone() const;

    MCNAPI ::std::string $ToPEMString() const;

    MCNAPI void $ToDER(::webrtc::BufferT<uchar, 0>* der_buffer) const;

    MCNAPI bool $ComputeDigest(::std::string_view algorithm, ::webrtc::BufferT<uchar, 0>& digest) const;

    MCNAPI bool $GetSignatureDigestAlgorithm(::std::string* algorithm) const;

    MCNAPI int64 $CertificateExpirationTime() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
