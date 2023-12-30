#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/SSLIdentity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class OpenSSLCertificate; }
namespace rtc { class OpenSSLKeyPair; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLIdentity; }
namespace rtc { struct SSLIdentityParams; }
struct ssl_ctx_st;
// clang-format on

namespace rtc {

class OpenSSLIdentity : public ::rtc::SSLIdentity {
public:
    // prevent constructor by default
    OpenSSLIdentity& operator=(OpenSSLIdentity const&);
    OpenSSLIdentity(OpenSSLIdentity const&);
    OpenSSLIdentity();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OpenSSLIdentity@rtc@@UEAA@XZ
    virtual ~OpenSSLIdentity();

    // vIndex: 1, symbol: ?certificate@OpenSSLIdentity@rtc@@UEBAAEBVOpenSSLCertificate@2@XZ
    virtual class rtc::OpenSSLCertificate const& certificate() const;

    // vIndex: 2, symbol: ?cert_chain@OpenSSLIdentity@rtc@@UEBAAEBVSSLCertChain@2@XZ
    virtual class rtc::SSLCertChain const& cert_chain() const;

    // vIndex: 3, symbol:
    // ?PrivateKeyToPEMString@OpenSSLIdentity@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string PrivateKeyToPEMString() const;

    // vIndex: 4, symbol:
    // ?PublicKeyToPEMString@OpenSSLIdentity@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string PublicKeyToPEMString() const;

    // vIndex: 5, symbol:
    // ?CloneInternal@OpenSSLIdentity@rtc@@EEBA?AV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class rtc::SSLIdentity> CloneInternal() const;

    // symbol: ?ConfigureIdentity@OpenSSLIdentity@rtc@@QEAA_NPEAUssl_ctx_st@@@Z
    MCAPI bool ConfigureIdentity(struct ssl_ctx_st*);

    // symbol:
    // ?CreateWithExpiration@OpenSSLIdentity@rtc@@SA?AV?$unique_ptr@VOpenSSLIdentity@rtc@@U?$default_delete@VOpenSSLIdentity@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEBVKeyParams@2@_J@Z
    MCAPI static std::unique_ptr<class rtc::OpenSSLIdentity>
    CreateWithExpiration(std::string_view, class rtc::KeyParams const&, int64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0OpenSSLIdentity@rtc@@AEAA@V?$unique_ptr@VOpenSSLKeyPair@rtc@@U?$default_delete@VOpenSSLKeyPair@rtc@@@std@@@std@@V?$unique_ptr@VOpenSSLCertificate@rtc@@U?$default_delete@VOpenSSLCertificate@rtc@@@std@@@3@@Z
    MCAPI OpenSSLIdentity(std::unique_ptr<class rtc::OpenSSLKeyPair>, std::unique_ptr<class rtc::OpenSSLCertificate>);

    // symbol:
    // ??0OpenSSLIdentity@rtc@@AEAA@V?$unique_ptr@VOpenSSLKeyPair@rtc@@U?$default_delete@VOpenSSLKeyPair@rtc@@@std@@@std@@V?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@3@@Z
    MCAPI OpenSSLIdentity(std::unique_ptr<class rtc::OpenSSLKeyPair>, std::unique_ptr<class rtc::SSLCertChain>);

    // symbol:
    // ?CreateInternal@OpenSSLIdentity@rtc@@CA?AV?$unique_ptr@VOpenSSLIdentity@rtc@@U?$default_delete@VOpenSSLIdentity@rtc@@@std@@@std@@AEBUSSLIdentityParams@2@@Z
    MCAPI static std::unique_ptr<class rtc::OpenSSLIdentity> CreateInternal(struct rtc::SSLIdentityParams const&);

    // NOLINTEND
};

}; // namespace rtc
