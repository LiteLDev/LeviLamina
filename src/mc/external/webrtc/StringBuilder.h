#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StringBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9fea8c;
    // NOLINTEND

public:
    // prevent constructor by default
    StringBuilder& operator=(StringBuilder const&);
    StringBuilder(StringBuilder const&);
    StringBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::StringBuilder& AppendFormat(char const*, ...);

    MCNAPI ::webrtc::StringBuilder& operator<<(int i);

    MCNAPI ::webrtc::StringBuilder& operator<<(uint i);

    MCNAPI ::webrtc::StringBuilder& operator<<(ulong i);

    MCNAPI ::webrtc::StringBuilder& operator<<(uint64 i);

    MCNAPI ~StringBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
