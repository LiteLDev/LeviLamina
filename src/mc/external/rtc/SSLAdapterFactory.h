#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLMode.h"
#include "mc/external/rtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLAdapter; }
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class SSLIdentity; }
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class SSLAdapterFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLAdapterFactory() = default;

    virtual void SetMode(::rtc::SSLMode) = 0;

    virtual void SetCertVerifier(::rtc::SSLCertificateVerifier*) = 0;

    virtual void SetIdentity(::std::unique_ptr<::rtc::SSLIdentity>) = 0;

    virtual void SetRole(::rtc::SSLRole) = 0;

    virtual void SetIgnoreBadCert(bool) = 0;

    virtual ::rtc::SSLAdapter* CreateAdapter(::rtc::Socket*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
