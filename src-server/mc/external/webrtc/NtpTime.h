#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NtpTime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk383ef5;
    // NOLINTEND

public:
    // prevent constructor by default
    NtpTime& operator=(NtpTime const&);
    NtpTime(NtpTime const&);
    NtpTime();

};

}
