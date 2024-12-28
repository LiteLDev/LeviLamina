#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertificate; }
// clang-format on

namespace rtc {

class SSLCertificateVerifier {
public:
    // prevent constructor by default
    SSLCertificateVerifier& operator=(SSLCertificateVerifier const&);
    SSLCertificateVerifier(SSLCertificateVerifier const&);
    SSLCertificateVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SSLCertificateVerifier();

    // vIndex: 1
    virtual bool Verify(::rtc::SSLCertificate const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
