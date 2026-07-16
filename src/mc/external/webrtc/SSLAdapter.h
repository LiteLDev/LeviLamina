#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AsyncSocketAdapter.h"
#include "mc/external/webrtc/SSLMode.h"
#include "mc/external/webrtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertificateVerifier; }
namespace webrtc { class SSLIdentity; }
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class SSLAdapter : public ::webrtc::AsyncSocketAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetIgnoreBadCert(bool ignore) = 0;

    virtual void SetAlpnProtocols(::std::vector<::std::string> const& protos) = 0;

    virtual void SetEllipticCurves(::std::vector<::std::string> const& curves) = 0;

    virtual void SetMode(::webrtc::SSLMode mode) = 0;

    virtual void SetCertVerifier(::webrtc::SSLCertificateVerifier* ssl_cert_verifier) = 0;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity) = 0;

    virtual void SetRole(::webrtc::SSLRole role) = 0;

    virtual int StartSSL(::std::string_view hostname) = 0;

    virtual bool IsResumedSession() = 0;

    virtual int Listen(int backlog) /*override*/;

    virtual ::webrtc::Socket* Accept(::webrtc::SocketAddress* paddr) /*override*/;

    virtual ~SSLAdapter() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::SSLAdapter* Create(::webrtc::Socket* socket);
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

    MCNAPI ::webrtc::Socket* $Accept(::webrtc::SocketAddress* paddr);


    // NOLINTEND
};

} // namespace webrtc
