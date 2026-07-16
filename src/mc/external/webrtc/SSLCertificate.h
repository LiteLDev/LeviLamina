#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct SSLCertificateStats; }
// clang-format on

namespace webrtc {

class SSLCertificate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLCertificate() = default;

    virtual ::std::unique_ptr<::webrtc::SSLCertificate> Clone() const = 0;

    virtual ::std::string ToPEMString() const = 0;

    virtual void ToDER(::webrtc::BufferT<uchar, 0>* der_buffer) const = 0;

    virtual bool GetSignatureDigestAlgorithm(::std::string* algorithm) const = 0;

    virtual bool ComputeDigest(::std::string_view algorithm, ::webrtc::BufferT<uchar, 0>& digest) const = 0;

    virtual int64 CertificateExpirationTime() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SSLCertificateStats> GetStats() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
