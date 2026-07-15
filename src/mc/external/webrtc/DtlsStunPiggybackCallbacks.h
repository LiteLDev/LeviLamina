#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtlsStunPiggybackCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc560a5;
    ::ll::UntypedStorage<8, 32> mUnk47520a;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsStunPiggybackCallbacks& operator=(DtlsStunPiggybackCallbacks const&);
    DtlsStunPiggybackCallbacks(DtlsStunPiggybackCallbacks const&);
    DtlsStunPiggybackCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::DtlsStunPiggybackCallbacks& operator=(::webrtc::DtlsStunPiggybackCallbacks&&);

    MCNAPI ~DtlsStunPiggybackCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
