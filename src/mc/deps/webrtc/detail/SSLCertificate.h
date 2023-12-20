#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct SSLCertificateStats; }
// clang-format on

namespace rtc {

class SSLCertificate {
public:
    // prevent constructor by default
    SSLCertificate& operator=(SSLCertificate const&);
    SSLCertificate(SSLCertificate const&);
    SSLCertificate();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetStats@SSLCertificate@rtc@@QEBA?AV?$unique_ptr@USSLCertificateStats@rtc@@U?$default_delete@USSLCertificateStats@rtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<struct rtc::SSLCertificateStats> GetStats() const;

    // NOLINTEND
};

}; // namespace rtc
