#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoRateControlConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk784e22;
    ::ll::UntypedStorage<1, 1>  mUnk76ca62;
    ::ll::UntypedStorage<4, 8>  mUnk52f4bc;
    ::ll::UntypedStorage<4, 8>  mUnk1dfe1a;
    ::ll::UntypedStorage<1, 1>  mUnkb708da;
    ::ll::UntypedStorage<1, 1>  mUnkc31c75;
    ::ll::UntypedStorage<1, 1>  mUnk684bea;
    ::ll::UntypedStorage<1, 1>  mUnkfe3f1e;
    ::ll::UntypedStorage<1, 1>  mUnk437175;
    ::ll::UntypedStorage<1, 1>  mUnkbfcd13;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoRateControlConfig& operator=(VideoRateControlConfig const&);
    VideoRateControlConfig(VideoRateControlConfig const&);
    VideoRateControlConfig();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND
};

} // namespace webrtc
