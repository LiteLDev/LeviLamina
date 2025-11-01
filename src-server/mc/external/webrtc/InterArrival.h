#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class InterArrival {
public:
    // InterArrival inner types declare
    // clang-format off
    struct TimestampGroup;
    // clang-format on

    // InterArrival inner types define
    struct TimestampGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk11c529;
        ::ll::UntypedStorage<4, 4> mUnkcd6379;
        ::ll::UntypedStorage<4, 4> mUnke0d269;
        ::ll::UntypedStorage<8, 8> mUnkf6962d;
        ::ll::UntypedStorage<8, 8> mUnk94910f;
        ::ll::UntypedStorage<8, 8> mUnk7fb25d;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimestampGroup& operator=(TimestampGroup const&);
        TimestampGroup(TimestampGroup const&);
        TimestampGroup();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbfe8b6;
    ::ll::UntypedStorage<8, 40> mUnk665ae5;
    ::ll::UntypedStorage<8, 40> mUnk9fc8a9;
    ::ll::UntypedStorage<8, 8>  mUnka9940e;
    ::ll::UntypedStorage<4, 4>  mUnk3e3c1b;
    // NOLINTEND

public:
    // prevent constructor by default
    InterArrival& operator=(InterArrival const&);
    InterArrival(InterArrival const&);
    InterArrival();
};

} // namespace webrtc
