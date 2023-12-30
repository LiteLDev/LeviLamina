#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/SSLAdapter.h"
#include "mc/deps/webrtc/rtc/SSLMode.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class OpenSSLSessionCache; }
namespace rtc { class SSLAdapter; }
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class SSLIdentity; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
struct ssl_ctx_st;
struct ssl_session_st;
struct ssl_st;
struct x509_store_ctx_st;
// clang-format on

namespace rtc {

class OpenSSLAdapter : public ::rtc::SSLAdapter {
public:
    // OpenSSLAdapter inner types declare
    // clang-format off
    class EarlyExitCatcher;
    // clang-format on

    // OpenSSLAdapter inner types define
    class EarlyExitCatcher {
    public:
        // prevent constructor by default
        EarlyExitCatcher& operator=(EarlyExitCatcher const&);
        EarlyExitCatcher(EarlyExitCatcher const&);
        EarlyExitCatcher();

    public:
        // NOLINTBEGIN
        // symbol: ??0EarlyExitCatcher@OpenSSLAdapter@rtc@@QEAA@AEAV12@@Z
        MCAPI explicit EarlyExitCatcher(class rtc::OpenSSLAdapter&);

        // symbol: ?disable@EarlyExitCatcher@OpenSSLAdapter@rtc@@QEAAXXZ
        MCAPI void disable();

        // symbol: ??1EarlyExitCatcher@OpenSSLAdapter@rtc@@QEAA@XZ
        MCAPI ~EarlyExitCatcher();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OpenSSLAdapter& operator=(OpenSSLAdapter const&);
    OpenSSLAdapter(OpenSSLAdapter const&);
    OpenSSLAdapter();

public:
    // NOLINTBEGIN
    // symbol: ?Close@OpenSSLAdapter@rtc@@UEAAHXZ
    MCVAPI int Close();

    // symbol: ?GetState@OpenSSLAdapter@rtc@@UEBA?AW4ConnState@Socket@2@XZ
    MCVAPI ::rtc::Socket::ConnState GetState() const;

    // symbol: ?IsResumedSession@OpenSSLAdapter@rtc@@UEAA_NXZ
    MCVAPI bool IsResumedSession();

    // symbol: ?OnCloseEvent@OpenSSLAdapter@rtc@@MEAAXPEAVSocket@2@H@Z
    MCVAPI void OnCloseEvent(class rtc::Socket*, int);

    // symbol: ?OnConnectEvent@OpenSSLAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnConnectEvent(class rtc::Socket*);

    // symbol: ?OnReadEvent@OpenSSLAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnReadEvent(class rtc::Socket*);

    // symbol: ?OnWriteEvent@OpenSSLAdapter@rtc@@MEAAXPEAVSocket@2@@Z
    MCVAPI void OnWriteEvent(class rtc::Socket*);

    // symbol: ?Recv@OpenSSLAdapter@rtc@@UEAAHPEAX_KPEA_J@Z
    MCVAPI int Recv(void*, uint64, int64*);

    // symbol: ?RecvFrom@OpenSSLAdapter@rtc@@UEAAHPEAX_KPEAVSocketAddress@2@PEA_J@Z
    MCVAPI int RecvFrom(void*, uint64, class rtc::SocketAddress*, int64*);

    // symbol: ?Send@OpenSSLAdapter@rtc@@UEAAHPEBX_K@Z
    MCVAPI int Send(void const*, uint64);

    // symbol: ?SendTo@OpenSSLAdapter@rtc@@UEAAHPEBX_KAEBVSocketAddress@2@@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&);

    // symbol:
    // ?SetAlpnProtocols@OpenSSLAdapter@rtc@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void SetAlpnProtocols(std::vector<std::string> const&);

    // symbol: ?SetCertVerifier@OpenSSLAdapter@rtc@@UEAAXPEAVSSLCertificateVerifier@2@@Z
    MCVAPI void SetCertVerifier(class rtc::SSLCertificateVerifier*);

    // symbol:
    // ?SetEllipticCurves@OpenSSLAdapter@rtc@@UEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void SetEllipticCurves(std::vector<std::string> const&);

    // symbol:
    // ?SetIdentity@OpenSSLAdapter@rtc@@UEAAXV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@@Z
    MCVAPI void SetIdentity(std::unique_ptr<class rtc::SSLIdentity>);

    // symbol: ?SetIgnoreBadCert@OpenSSLAdapter@rtc@@UEAAX_N@Z
    MCVAPI void SetIgnoreBadCert(bool);

    // symbol: ?SetMode@OpenSSLAdapter@rtc@@UEAAXW4SSLMode@2@@Z
    MCVAPI void SetMode(::rtc::SSLMode);

    // symbol: ?SetRole@OpenSSLAdapter@rtc@@UEAAXW4SSLRole@2@@Z
    MCVAPI void SetRole(::rtc::SSLRole);

    // symbol: ?StartSSL@OpenSSLAdapter@rtc@@UEAAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI int StartSSL(std::string_view);

    // symbol: ??1OpenSSLAdapter@rtc@@UEAA@XZ
    MCVAPI ~OpenSSLAdapter();

    // symbol: ??0OpenSSLAdapter@rtc@@QEAA@PEAVSocket@1@PEAVOpenSSLSessionCache@1@PEAVSSLCertificateVerifier@1@@Z
    MCAPI OpenSSLAdapter(class rtc::Socket*, class rtc::OpenSSLSessionCache*, class rtc::SSLCertificateVerifier*);

    // symbol: ?CreateContext@OpenSSLAdapter@rtc@@SAPEAUssl_ctx_st@@W4SSLMode@2@_N@Z
    MCAPI static struct ssl_ctx_st* CreateContext(::rtc::SSLMode, bool);

    // symbol: ?InitializeSSL@OpenSSLAdapter@rtc@@SA_NXZ
    MCAPI static bool InitializeSSL();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BeginSSL@OpenSSLAdapter@rtc@@AEAAHXZ
    MCAPI int BeginSSL();

    // symbol: ?Cleanup@OpenSSLAdapter@rtc@@AEAAXXZ
    MCAPI void Cleanup();

    // symbol: ?ContinueSSL@OpenSSLAdapter@rtc@@AEAAHXZ
    MCAPI int ContinueSSL();

    // symbol: ?DoSslWrite@OpenSSLAdapter@rtc@@AEAAHPEBX_KPEAH@Z
    MCAPI int DoSslWrite(void const*, uint64, int*);

    // symbol: ?Error@OpenSSLAdapter@rtc@@AEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@H_N@Z
    MCAPI void Error(std::string_view, int, bool);

    // symbol: ?OnTimeout@OpenSSLAdapter@rtc@@AEAAXXZ
    MCAPI void OnTimeout();

    // symbol:
    // ?SSLPostConnectionCheck@OpenSSLAdapter@rtc@@AEAA_NPEAUssl_st@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool SSLPostConnectionCheck(struct ssl_st*, std::string_view);

    // symbol: ?SSLVerifyInternal@OpenSSLAdapter@rtc@@AEAAHHPEAUssl_st@@PEAUx509_store_ctx_st@@@Z
    MCAPI int SSLVerifyInternal(int, struct ssl_st*, struct x509_store_ctx_st*);

    // symbol: ?NewSSLSessionCallback@OpenSSLAdapter@rtc@@CAHPEAUssl_st@@PEAUssl_session_st@@@Z
    MCAPI static int NewSSLSessionCallback(struct ssl_st*, struct ssl_session_st*);

    // symbol: ?SSLVerifyCallback@OpenSSLAdapter@rtc@@CAHHPEAUx509_store_ctx_st@@@Z
    MCAPI static int SSLVerifyCallback(int, struct x509_store_ctx_st*);

    // NOLINTEND
};

}; // namespace rtc
