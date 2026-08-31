#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCCertificatePEM {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk28a26f;
    ::ll::UntypedStorage<8, 32> mUnk2f4c61;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificatePEM& operator=(RTCCertificatePEM const&);
    RTCCertificatePEM(RTCCertificatePEM const&);
    RTCCertificatePEM();
};

} // namespace webrtc
