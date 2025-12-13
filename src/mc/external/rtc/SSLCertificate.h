#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct SSLCertificateStats; }
// clang-format on

namespace rtc {

class SSLCertificate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SSLCertificate() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::rtc::SSLCertificate> Clone() const = 0;

    // vIndex: 2
    virtual ::std::string ToPEMString() const = 0;

    // vIndex: 3
    virtual void ToDER(::rtc::BufferT<uchar, 0>*) const = 0;

    // vIndex: 4
    virtual bool GetSignatureDigestAlgorithm(::std::string*) const = 0;

    // vIndex: 5
    virtual bool ComputeDigest(::std::string_view, uchar*, uint64, uint64*) const = 0;

    // vIndex: 6
    virtual int64 CertificateExpirationTime() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::rtc::SSLCertificateStats> GetStats() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
