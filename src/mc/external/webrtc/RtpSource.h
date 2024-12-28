#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSource {
public:
    // RtpSource inner types declare
    // clang-format off
    struct Extensions;
    // clang-format on

    // RtpSource inner types define
    struct Extensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 2>  mUnk284e80;
        ::ll::UntypedStorage<8, 32> mUnk30a64c;
        ::ll::UntypedStorage<8, 16> mUnked06c0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Extensions& operator=(Extensions const&);
        Extensions(Extensions const&);
        Extensions();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5e6c49;
    ::ll::UntypedStorage<4, 4>  mUnk12ebfe;
    ::ll::UntypedStorage<4, 4>  mUnk3aa292;
    ::ll::UntypedStorage<8, 56> mUnka91768;
    ::ll::UntypedStorage<4, 4>  mUnkc488f1;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSource& operator=(RtpSource const&);
    RtpSource(RtpSource const&);
    RtpSource();
};

} // namespace webrtc
