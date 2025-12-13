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
    // vIndex: 0
    virtual ~SSLCertificateVerifier() = default;

    // vIndex: 1
    virtual bool Verify(::rtc::SSLCertificate const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
