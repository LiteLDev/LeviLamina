#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RTCCertificatePEM {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfeceaf;
    ::ll::UntypedStorage<8, 32> mUnkaebee7;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificatePEM& operator=(RTCCertificatePEM const&);
    RTCCertificatePEM(RTCCertificatePEM const&);
    RTCCertificatePEM();
};

} // namespace rtc
