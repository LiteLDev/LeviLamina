#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertificate; }
namespace rtc { struct SSLCertificateStats; }
// clang-format on

namespace rtc {

class SSLCertChain {
public:
    // prevent constructor by default
    SSLCertChain& operator=(SSLCertChain const&);
    SSLCertChain(SSLCertChain const&);
    SSLCertChain();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Clone@SSLCertChain@rtc@@QEBA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class rtc::SSLCertChain> Clone() const;

    // symbol:
    // ?GetStats@SSLCertChain@rtc@@QEBA?AV?$unique_ptr@USSLCertificateStats@rtc@@U?$default_delete@USSLCertificateStats@rtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct rtc::SSLCertificateStats> GetStats() const;

    // symbol:
    // ??0SSLCertChain@rtc@@QEAA@V?$unique_ptr@VSSLCertificate@rtc@@U?$default_delete@VSSLCertificate@rtc@@@std@@@std@@@Z
    MCAPI explicit SSLCertChain(std::unique_ptr<class rtc::SSLCertificate>);

    // symbol:
    // ??0SSLCertChain@rtc@@QEAA@V?$vector@V?$unique_ptr@VSSLCertificate@rtc@@U?$default_delete@VSSLCertificate@rtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VSSLCertificate@rtc@@U?$default_delete@VSSLCertificate@rtc@@@std@@@std@@@2@@std@@@Z
    MCAPI explicit SSLCertChain(std::vector<std::unique_ptr<class rtc::SSLCertificate>>);

    // symbol: ??1SSLCertChain@rtc@@QEAA@XZ
    MCAPI ~SSLCertChain();

    // NOLINTEND
};

}; // namespace rtc
