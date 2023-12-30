#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/SSLMode.h"
#include "mc/deps/webrtc/rtc/SSLPeerCertificateDigestError.h"
#include "mc/deps/webrtc/rtc/SSLProtocolVersion.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/SSLStreamAdapter.h"
#include "mc/deps/webrtc/rtc/StreamResult.h"
#include "mc/deps/webrtc/rtc/StreamState.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLIdentity; }
namespace rtc { class SSLStreamAdapter; }
namespace rtc { class StreamInterface; }
struct ssl_ctx_st;
struct x509_store_ctx_st;
// clang-format on

namespace rtc {

class OpenSSLStreamAdapter : public ::rtc::SSLStreamAdapter {
public:
    // prevent constructor by default
    OpenSSLStreamAdapter& operator=(OpenSSLStreamAdapter const&);
    OpenSSLStreamAdapter(OpenSSLStreamAdapter const&);
    OpenSSLStreamAdapter();

public:
    // NOLINTBEGIN
    // symbol: ?Close@OpenSSLStreamAdapter@rtc@@UEAAXXZ
    MCVAPI void Close();

    // symbol:
    // ?ExportKeyingMaterial@OpenSSLStreamAdapter@rtc@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_K_NPEAE2@Z
    MCVAPI bool ExportKeyingMaterial(std::string_view, uchar const*, uint64, bool, uchar*, uint64);

    // symbol: ?GetDtlsSrtpCryptoSuite@OpenSSLStreamAdapter@rtc@@UEAA_NPEAH@Z
    MCVAPI bool GetDtlsSrtpCryptoSuite(int*);

    // symbol: ?GetIdentityForTesting@OpenSSLStreamAdapter@rtc@@UEBAPEAVSSLIdentity@2@XZ
    MCVAPI class rtc::SSLIdentity* GetIdentityForTesting() const;

    // symbol:
    // ?GetPeerSSLCertChain@OpenSSLStreamAdapter@rtc@@UEBA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class rtc::SSLCertChain> GetPeerSSLCertChain() const;

    // symbol: ?GetSslCipherSuite@OpenSSLStreamAdapter@rtc@@UEAA_NPEAH@Z
    MCVAPI bool GetSslCipherSuite(int*);

    // symbol: ?GetSslVersion@OpenSSLStreamAdapter@rtc@@UEBA?AW4SSLProtocolVersion@2@XZ
    MCVAPI ::rtc::SSLProtocolVersion GetSslVersion() const;

    // symbol: ?GetSslVersionBytes@OpenSSLStreamAdapter@rtc@@UEBA_NPEAH@Z
    MCVAPI bool GetSslVersionBytes(int*) const;

    // symbol: ?GetState@OpenSSLStreamAdapter@rtc@@UEBA?AW4StreamState@2@XZ
    MCVAPI ::rtc::StreamState GetState() const;

    // symbol: ?IsTlsConnected@OpenSSLStreamAdapter@rtc@@UEAA_NXZ
    MCVAPI bool IsTlsConnected();

    // symbol: ?Read@OpenSSLStreamAdapter@rtc@@UEAA?AW4StreamResult@2@V?$ArrayView@E$0?BCGH@@2@AEA_KAEAH@Z
    MCVAPI ::rtc::StreamResult Read(class rtc::ArrayView<uchar, -4711>, uint64&, int&);

    // symbol: ?SetDtlsSrtpCryptoSuites@OpenSSLStreamAdapter@rtc@@UEAA_NAEBV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCVAPI bool SetDtlsSrtpCryptoSuites(std::vector<int> const&);

    // symbol:
    // ?SetIdentity@OpenSSLStreamAdapter@rtc@@UEAAXV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@@Z
    MCVAPI void SetIdentity(std::unique_ptr<class rtc::SSLIdentity>);

    // symbol: ?SetInitialRetransmissionTimeout@OpenSSLStreamAdapter@rtc@@UEAAXH@Z
    MCVAPI void SetInitialRetransmissionTimeout(int);

    // symbol: ?SetMaxProtocolVersion@OpenSSLStreamAdapter@rtc@@UEAAXW4SSLProtocolVersion@2@@Z
    MCVAPI void SetMaxProtocolVersion(::rtc::SSLProtocolVersion);

    // symbol: ?SetMode@OpenSSLStreamAdapter@rtc@@UEAAXW4SSLMode@2@@Z
    MCVAPI void SetMode(::rtc::SSLMode);

    // symbol:
    // ?SetPeerCertificateDigest@OpenSSLStreamAdapter@rtc@@UEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBE_KPEAW4SSLPeerCertificateDigestError@2@@Z
    MCVAPI bool SetPeerCertificateDigest(std::string_view, uchar const*, uint64, ::rtc::SSLPeerCertificateDigestError*);

    // symbol: ?SetServerRole@OpenSSLStreamAdapter@rtc@@UEAAXW4SSLRole@2@@Z
    MCVAPI void SetServerRole(::rtc::SSLRole);

    // symbol: ?StartSSL@OpenSSLStreamAdapter@rtc@@UEAAHXZ
    MCVAPI int StartSSL();

    // symbol: ?Write@OpenSSLStreamAdapter@rtc@@UEAA?AW4StreamResult@2@V?$ArrayView@$$CBE$0?BCGH@@2@AEA_KAEAH@Z
    MCVAPI ::rtc::StreamResult Write(class rtc::ArrayView<uchar const, -4711>, uint64&, int&);

    // symbol: ??1OpenSSLStreamAdapter@rtc@@UEAA@XZ
    MCVAPI ~OpenSSLStreamAdapter();

    // symbol:
    // ??0OpenSSLStreamAdapter@rtc@@QEAA@V?$unique_ptr@VStreamInterface@rtc@@U?$default_delete@VStreamInterface@rtc@@@std@@@std@@@Z
    MCAPI explicit OpenSSLStreamAdapter(std::unique_ptr<class rtc::StreamInterface>);

    // symbol:
    // ?SslCipherSuiteToName@OpenSSLStreamAdapter@rtc@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static std::string SslCipherSuiteToName(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BeginSSL@OpenSSLStreamAdapter@rtc@@AEAAHXZ
    MCAPI int BeginSSL();

    // symbol: ?Cleanup@OpenSSLStreamAdapter@rtc@@AEAAXE@Z
    MCAPI void Cleanup(uchar);

    // symbol: ?ContinueSSL@OpenSSLStreamAdapter@rtc@@AEAAHXZ
    MCAPI int ContinueSSL();

    // symbol: ?Error@OpenSSLStreamAdapter@rtc@@AEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@HE_N@Z
    MCAPI void Error(std::string_view, int, uchar, bool);

    // symbol: ?FlushInput@OpenSSLStreamAdapter@rtc@@AEAAXI@Z
    MCAPI void FlushInput(uint);

    // symbol: ?OnEvent@OpenSSLStreamAdapter@rtc@@AEAAXPEAVStreamInterface@2@HH@Z
    MCAPI void OnEvent(class rtc::StreamInterface*, int, int);

    // symbol: ?PostEvent@OpenSSLStreamAdapter@rtc@@AEAAXHH@Z
    MCAPI void PostEvent(int, int);

    // symbol: ?SetTimeout@OpenSSLStreamAdapter@rtc@@AEAAXH@Z
    MCAPI void SetTimeout(int);

    // symbol: ?SetupSSLContext@OpenSSLStreamAdapter@rtc@@AEAAPEAUssl_ctx_st@@XZ
    MCAPI struct ssl_ctx_st* SetupSSLContext();

    // symbol: ?VerifyPeerCertificate@OpenSSLStreamAdapter@rtc@@AEAA_NXZ
    MCAPI bool VerifyPeerCertificate();

    // symbol: ?SSLVerifyCallback@OpenSSLStreamAdapter@rtc@@CAHPEAUx509_store_ctx_st@@PEAX@Z
    MCAPI static int SSLVerifyCallback(struct x509_store_ctx_st*, void*);

    // NOLINTEND
};

}; // namespace rtc
