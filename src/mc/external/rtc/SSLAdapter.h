#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncSocketAdapter.h"
#include "mc/external/rtc/SSLMode.h"
#include "mc/external/rtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class SSLIdentity; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class SSLAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 22
    virtual void SetIgnoreBadCert(bool) = 0;

    // vIndex: 23
    virtual void SetAlpnProtocols(::std::vector<::std::string> const&) = 0;

    // vIndex: 24
    virtual void SetEllipticCurves(::std::vector<::std::string> const&) = 0;

    // vIndex: 25
    virtual void SetMode(::rtc::SSLMode) = 0;

    // vIndex: 26
    virtual void SetCertVerifier(::rtc::SSLCertificateVerifier*) = 0;

    // vIndex: 27
    virtual void SetIdentity(::std::unique_ptr<::rtc::SSLIdentity>) = 0;

    // vIndex: 28
    virtual void SetRole(::rtc::SSLRole) = 0;

    // vIndex: 29
    virtual int StartSSL(::std::string_view) = 0;

    // vIndex: 30
    virtual bool IsResumedSession() = 0;

    // vIndex: 10
    virtual int Listen(int backlog) /*override*/;

    // vIndex: 11
    virtual ::rtc::Socket* Accept(::rtc::SocketAddress* paddr) /*override*/;

    // vIndex: 0
    virtual ~SSLAdapter() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::SSLAdapter* Create(::rtc::Socket* socket);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Listen(int backlog);

    MCNAPI ::rtc::Socket* $Accept(::rtc::SocketAddress* paddr);
    // NOLINTEND
};

} // namespace rtc
