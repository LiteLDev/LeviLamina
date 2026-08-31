#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SSLAdapter.h"
#include "mc/external/webrtc/SSLMode.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class OpenSSLSessionCache; }
namespace webrtc { class SSLCertificateVerifier; }
namespace webrtc { class SSLIdentity; }
namespace webrtc { class Socket; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class OpenSSLAdapter : public ::webrtc::SSLAdapter {
public:
    // OpenSSLAdapter inner types declare
    // clang-format off
    class EarlyExitCatcher;
    // clang-format on

    // OpenSSLAdapter inner types define
    enum class SSLState : int {
        None       = 0,
        Wait       = 1,
        Connecting = 2,
        Connected  = 3,
        Error      = 4,
    };

    class EarlyExitCatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk4c6bef;
        ::ll::UntypedStorage<8, 8> mUnk625a4e;
        // NOLINTEND

    public:
        // prevent constructor by default
        EarlyExitCatcher& operator=(EarlyExitCatcher const&);
        EarlyExitCatcher(EarlyExitCatcher const&);
        EarlyExitCatcher();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EarlyExitCatcher();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk39814c;
    ::ll::UntypedStorage<8, 8>  mUnk535b93;
    ::ll::UntypedStorage<4, 4>  mUnk6f8221;
    ::ll::UntypedStorage<8, 8>  mUnk6de02b;
    ::ll::UntypedStorage<4, 4>  mUnk383f17;
    ::ll::UntypedStorage<1, 1>  mUnk3be605;
    ::ll::UntypedStorage<1, 1>  mUnkd53e1d;
    ::ll::UntypedStorage<8, 24> mUnk8dea19;
    ::ll::UntypedStorage<8, 8>  mUnkbb6627;
    ::ll::UntypedStorage<8, 8>  mUnk60b23d;
    ::ll::UntypedStorage<8, 32> mUnk69923b;
    ::ll::UntypedStorage<4, 4>  mUnk4493d9;
    ::ll::UntypedStorage<1, 1>  mUnk8f8f48;
    ::ll::UntypedStorage<8, 24> mUnk40ab31;
    ::ll::UntypedStorage<8, 24> mUnk82971a;
    ::ll::UntypedStorage<1, 1>  mUnk26bbc8;
    ::ll::UntypedStorage<8, 8>  mUnk771e71;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLAdapter& operator=(OpenSSLAdapter const&);
    OpenSSLAdapter(OpenSSLAdapter const&);
    OpenSSLAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLAdapter() /*override*/ = default;

    virtual void SetIgnoreBadCert(bool ignore) /*override*/;

    virtual void SetAlpnProtocols(::std::vector<::std::string> const& protos) /*override*/;

    virtual void SetEllipticCurves(::std::vector<::std::string> const& curves) /*override*/;

    virtual void SetMode(::webrtc::SSLMode mode) /*override*/;

    virtual void SetCertVerifier(::webrtc::SSLCertificateVerifier* ssl_cert_verifier) /*override*/;

    virtual void SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity) /*override*/;

    virtual void SetRole(::webrtc::SSLRole role) /*override*/;

    virtual int StartSSL(::std::string_view hostname) /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int SendTo(void const* pv, uint64 cb, ::webrtc::SocketAddress const& addr) /*override*/;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    virtual int RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    virtual int Close() /*override*/;

    virtual ::webrtc::Socket::ConnState GetState() const /*override*/;

    virtual bool IsResumedSession() /*override*/;

    virtual void OnConnectEvent(::webrtc::Socket* socket) /*override*/;

    virtual void OnReadEvent(::webrtc::Socket* socket) /*override*/;

    virtual void OnWriteEvent(::webrtc::Socket* socket) /*override*/;

    virtual void OnCloseEvent(::webrtc::Socket* socket, int err) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int BeginSSL();

    MCNAPI void Cleanup();

    MCNAPI int ContinueSSL();

    MCNAPI int DoSslWrite(void const* pv, uint64 cb, int* error);

    MCNAPI void Error(::std::string_view context, int err, bool signal);

    MCNAPI OpenSSLAdapter(
        ::webrtc::Socket*                 socket,
        ::webrtc::OpenSSLSessionCache*    ssl_session_cache,
        ::webrtc::SSLCertificateVerifier* ssl_cert_verifier
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ssl_ctx_st* CreateContext(::webrtc::SSLMode mode, bool enable_cache);

    MCNAPI static bool InitializeSSL();

    MCNAPI static int NewSSLSessionCallback(::ssl_st* ssl, ::ssl_session_st* session);

    MCNAPI static void SSLInfoCallback(::ssl_st const* ssl, int where, int ret);

    MCNAPI static int SSLVerifyCallback(int status, ::x509_store_ctx_st* store);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Socket*                 socket,
        ::webrtc::OpenSSLSessionCache*    ssl_session_cache,
        ::webrtc::SSLCertificateVerifier* ssl_cert_verifier
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIgnoreBadCert(bool ignore);

    MCNAPI void $SetAlpnProtocols(::std::vector<::std::string> const& protos);

    MCNAPI void $SetEllipticCurves(::std::vector<::std::string> const& curves);

    MCNAPI void $SetMode(::webrtc::SSLMode mode);

    MCNAPI void $SetCertVerifier(::webrtc::SSLCertificateVerifier* ssl_cert_verifier);

    MCNAPI void $SetIdentity(::std::unique_ptr<::webrtc::SSLIdentity> identity);

    MCNAPI void $SetRole(::webrtc::SSLRole role);

    MCNAPI int $StartSSL(::std::string_view hostname);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* pv, uint64 cb, ::webrtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::webrtc::SocketAddress* paddr, int64* timestamp);

    MCNAPI int $Close();

    MCNAPI ::webrtc::Socket::ConnState $GetState() const;

    MCNAPI bool $IsResumedSession();

    MCNAPI void $OnConnectEvent(::webrtc::Socket* socket);

    MCNAPI void $OnReadEvent(::webrtc::Socket* socket);

    MCNAPI void $OnWriteEvent(::webrtc::Socket* socket);

    MCNAPI void $OnCloseEvent(::webrtc::Socket* socket, int err);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForSocket();
    // NOLINTEND
};

} // namespace webrtc
