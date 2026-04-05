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
    virtual void SetIgnoreBadCert(bool ignore) = 0;

    virtual void SetAlpnProtocols(::std::vector<::std::string> const& protos) = 0;

    virtual void SetEllipticCurves(::std::vector<::std::string> const& curves) = 0;

    virtual void SetMode(::rtc::SSLMode mode) = 0;

    virtual void SetCertVerifier(::rtc::SSLCertificateVerifier* ssl_cert_verifier) = 0;

    virtual void SetIdentity(::std::unique_ptr<::rtc::SSLIdentity> identity) = 0;

    virtual void SetRole(::rtc::SSLRole role) = 0;

    virtual int StartSSL(::std::string_view hostname) = 0;

    virtual bool IsResumedSession() = 0;

    virtual int Listen(int backlog) /*override*/;

    virtual ::rtc::Socket* Accept(::rtc::SocketAddress* paddr) /*override*/;

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
