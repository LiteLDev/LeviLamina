#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertificate; }
// clang-format on

namespace rtc {

class SSLCertificateVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLCertificateVerifier() = default;

    virtual bool Verify(::rtc::SSLCertificate const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
