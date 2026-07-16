#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SSLMode.h"
#include "mc/external/webrtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLAdapter; }
namespace webrtc { class SSLCertificateVerifier; }
namespace webrtc { class SSLIdentity; }
namespace webrtc { class Socket; }
// clang-format on

namespace webrtc {

class SSLAdapterFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLAdapterFactory() = default;

    virtual void SetMode(::webrtc::SSLMode) = 0;

    virtual void SetCertVerifier(::webrtc::SSLCertificateVerifier*) = 0;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity>) = 0;

    virtual void SetRole(::webrtc::SSLRole) = 0;

    virtual void SetIgnoreBadCert(bool) = 0;

    virtual ::webrtc::SSLAdapter* CreateAdapter(::webrtc::Socket*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
