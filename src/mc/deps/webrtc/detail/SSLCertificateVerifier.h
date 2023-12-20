#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class SSLCertificateVerifier {
public:
    // prevent constructor by default
    SSLCertificateVerifier& operator=(SSLCertificateVerifier const&);
    SSLCertificateVerifier(SSLCertificateVerifier const&);
    SSLCertificateVerifier();
};

}; // namespace rtc
