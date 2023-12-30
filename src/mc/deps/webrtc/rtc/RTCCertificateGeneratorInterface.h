#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RTCCertificateGeneratorInterface {
public:
    // prevent constructor by default
    RTCCertificateGeneratorInterface& operator=(RTCCertificateGeneratorInterface const&);
    RTCCertificateGeneratorInterface(RTCCertificateGeneratorInterface const&);
    RTCCertificateGeneratorInterface();
};

}; // namespace rtc
