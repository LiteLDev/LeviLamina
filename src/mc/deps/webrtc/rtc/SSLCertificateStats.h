#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLCertificateStats {
public:
    // prevent constructor by default
    SSLCertificateStats& operator=(SSLCertificateStats const&);
    SSLCertificateStats(SSLCertificateStats const&);
    SSLCertificateStats();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Copy@SSLCertificateStats@rtc@@QEBA?AV?$unique_ptr@USSLCertificateStats@rtc@@U?$default_delete@USSLCertificateStats@rtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct rtc::SSLCertificateStats> Copy() const;

    // symbol:
    // ??0SSLCertificateStats@rtc@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00V?$unique_ptr@USSLCertificateStats@rtc@@U?$default_delete@USSLCertificateStats@rtc@@@std@@@3@@Z
    MCAPI
    SSLCertificateStats(std::string&&, std::string&&, std::string&&, std::unique_ptr<struct rtc::SSLCertificateStats>);

    // symbol: ??1SSLCertificateStats@rtc@@QEAA@XZ
    MCAPI ~SSLCertificateStats();

    // NOLINTEND
};

}; // namespace rtc
