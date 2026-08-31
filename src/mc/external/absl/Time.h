#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class Time {
public:
    // Time inner types declare
    // clang-format off
    struct Breakdown;
    // clang-format on

    // Time inner types define
    struct Breakdown {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkd4b728;
        ::ll::UntypedStorage<4, 4>  mUnkede409;
        ::ll::UntypedStorage<4, 4>  mUnk744a9a;
        ::ll::UntypedStorage<4, 4>  mUnk3fd191;
        ::ll::UntypedStorage<4, 4>  mUnk9e479f;
        ::ll::UntypedStorage<4, 4>  mUnkca3020;
        ::ll::UntypedStorage<4, 12> mUnkc619ad;
        ::ll::UntypedStorage<4, 4>  mUnk91315d;
        ::ll::UntypedStorage<4, 4>  mUnkeef510;
        ::ll::UntypedStorage<4, 4>  mUnk7d38d7;
        ::ll::UntypedStorage<1, 1>  mUnka8b69a;
        ::ll::UntypedStorage<8, 8>  mUnk217eb5;
        // NOLINTEND

    public:
        // prevent constructor by default
        Breakdown& operator=(Breakdown const&);
        Breakdown(Breakdown const&);
        Breakdown();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd1a300;
    // NOLINTEND

public:
    // prevent constructor by default
    Time& operator=(Time const&);
    Time(Time const&);
    Time();
};

} // namespace absl
