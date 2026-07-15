#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertificate; }
// clang-format on

namespace webrtc {

class SSLCertificateVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLCertificateVerifier() = default;

    virtual bool Verify(::webrtc::SSLCertificate const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
