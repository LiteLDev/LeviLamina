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
    // prevent constructor by default
    SSLAdapterFactory& operator=(SSLAdapterFactory const&);
    SSLAdapterFactory(SSLAdapterFactory const&);
    SSLAdapterFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SSLAdapterFactory();

    // vIndex: 1
    virtual void SetMode(::rtc::SSLMode) = 0;

    // vIndex: 2
    virtual void SetCertVerifier(::rtc::SSLCertificateVerifier*) = 0;

    // vIndex: 3
    virtual void SetIdentity(::std::unique_ptr<::rtc::SSLIdentity>) = 0;

    // vIndex: 4
    virtual void SetRole(::rtc::SSLRole) = 0;

    // vIndex: 5
    virtual void SetIgnoreBadCert(bool) = 0;

    // vIndex: 6
    virtual ::rtc::SSLAdapter* CreateAdapter(::rtc::Socket*) = 0;
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
