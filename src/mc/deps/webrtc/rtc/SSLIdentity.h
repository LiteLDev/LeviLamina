#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class KeyParams; }
namespace rtc { class OpenSSLCertificate; }
namespace rtc { class SSLCertChain; }
// clang-format on

namespace rtc {

class SSLIdentity {
public:
    // prevent constructor by default
    SSLIdentity& operator=(SSLIdentity const&);
    SSLIdentity(SSLIdentity const&);
    SSLIdentity();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SSLIdentity@rtc@@UEAA@XZ
    virtual ~SSLIdentity();

    // vIndex: 1, symbol: ?certificate@OpenSSLIdentity@rtc@@UEBAAEBVOpenSSLCertificate@2@XZ
    virtual class rtc::OpenSSLCertificate const& certificate() const = 0;

    // vIndex: 2, symbol: ?cert_chain@OpenSSLIdentity@rtc@@UEBAAEBVSSLCertChain@2@XZ
    virtual class rtc::SSLCertChain const& cert_chain() const = 0;

    // vIndex: 3, symbol:
    // ?PrivateKeyToPEMString@OpenSSLIdentity@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string PrivateKeyToPEMString() const = 0;

    // vIndex: 4, symbol:
    // ?PublicKeyToPEMString@OpenSSLIdentity@rtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string PublicKeyToPEMString() const = 0;

    // vIndex: 5, symbol:
    // ?CloneInternal@OpenSSLIdentity@rtc@@EEBA?AV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class rtc::SSLIdentity> CloneInternal() const = 0;

    // symbol:
    // ?Create@SSLIdentity@rtc@@SA?AV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEBVKeyParams@2@@Z
    MCAPI static std::unique_ptr<class rtc::SSLIdentity> Create(std::string_view, class rtc::KeyParams const&);

    // symbol:
    // ?Create@SSLIdentity@rtc@@SA?AV?$unique_ptr@VSSLIdentity@rtc@@U?$default_delete@VSSLIdentity@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@AEBVKeyParams@2@_J@Z
    MCAPI static std::unique_ptr<class rtc::SSLIdentity> Create(std::string_view, class rtc::KeyParams const&, int64);

    // NOLINTEND
};

}; // namespace rtc
