#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpParseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk38fc6c;
    ::ll::UntypedStorage<8, 32> mUnkc2641a;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpParseError& operator=(SdpParseError const&);
    SdpParseError(SdpParseError const&);
    SdpParseError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SdpParseError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace webrtc
