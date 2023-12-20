#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/BufferT.h"
#include "mc/deps/webrtc/detail/SSLCertificate.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class OpenSSLKeyPair; }
namespace rtc { class SSLCertificate; }
namespace rtc { struct SSLIdentityParams; }
struct x509_st;
// clang-format on

namespace rtc {

class OpenSSLCertificate : public ::rtc::SSLCertificate {
public:
    // prevent constructor by default
    OpenSSLCertificate& operator=(OpenSSLCertificate const&);
    OpenSSLCertificate(OpenSSLCertificate const&);
    OpenSSLCertificate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OpenSSLCertificate@rtc@@UEAA@XZ
    virtual ~OpenSSLCertificate();

    // vIndex: 1, symbol:
    // ?Clone@OpenSSLCertificate@rtc@@UEBA?AV?$unique_ptr@VSSLCertificate@rtc@@U?$default_delete@VSSLCertificate@rtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class rtc::SSLCertificate> Clone() const;

    // vIndex: 2, symbol:
    // ?ToPEMString@OpenSSLCertificate@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string ToPEMString() const;

    // vIndex: 3, symbol: ?ToDER@OpenSSLCertificate@rtc@@UEBAXPEAV?$BufferT@E$0A@@2@@Z
    virtual void ToDER(class rtc::BufferT<uchar, 0>*) const;

    // vIndex: 4, symbol:
    // ?GetSignatureDigestAlgorithm@OpenSSLCertificate@rtc@@UEBA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool GetSignatureDigestAlgorithm(std::string*) const;

    // vIndex: 5, symbol:
    // ?ComputeDigest@OpenSSLCertificate@rtc@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAE_KPEA_K@Z
    virtual bool ComputeDigest(std::string_view, uchar*, uint64, uint64*) const;

    // vIndex: 6, symbol: ?CertificateExpirationTime@OpenSSLCertificate@rtc@@UEBA_JXZ
    virtual int64 CertificateExpirationTime() const;

    // symbol: ??0OpenSSLCertificate@rtc@@QEAA@PEAUx509_st@@@Z
    MCAPI explicit OpenSSLCertificate(struct x509_st*);

    // symbol:
    // ?ComputeDigest@OpenSSLCertificate@rtc@@SA_NPEBUx509_st@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAE_KPEA_K@Z
    MCAPI static bool ComputeDigest(struct x509_st const*, std::string_view, uchar*, uint64, uint64*);

    // symbol:
    // ?Generate@OpenSSLCertificate@rtc@@SA?AV?$unique_ptr@VOpenSSLCertificate@rtc@@U?$default_delete@VOpenSSLCertificate@rtc@@@std@@@std@@PEAVOpenSSLKeyPair@2@AEBUSSLIdentityParams@2@@Z
    MCAPI static std::unique_ptr<class rtc::OpenSSLCertificate>
    Generate(class rtc::OpenSSLKeyPair*, struct rtc::SSLIdentityParams const&);

    // NOLINTEND
};

}; // namespace rtc
