#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TimeMarker;
// clang-format on

class WorldClock {
public:
    // WorldClock inner types define
    enum class DirtyFlags : uchar {
        SyncState        = 0,
        AddTimeMarker    = 1,
        RemoveTimeMarker = 2,
        Count            = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk940626;
    ::ll::UntypedStorage<4, 4>   mUnka502bb;
    ::ll::UntypedStorage<1, 1>   mUnk154888;
    ::ll::UntypedStorage<8, 48>  mUnk7fbf4a;
    ::ll::UntypedStorage<8, 24>  mUnkf8a9cb;
    ::ll::UntypedStorage<8, 24>  mUnkbac390;
    ::ll::UntypedStorage<1, 1>   mUnk5a63b2;
    ::ll::UntypedStorage<8, 128> mUnk566c5b;
    ::ll::UntypedStorage<8, 128> mUnk925da0;
    ::ll::UntypedStorage<8, 128> mUnk894417;
    ::ll::UntypedStorage<8, 128> mUnk37ac31;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldClock();

    MCNAPI WorldClock(::WorldClock const& rhs);

    MCNAPI ::WorldClock& operator=(::WorldClock const& rhs);

    MCNAPI void setTime(int time);

    MCNAPI ~WorldClock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::WorldClock const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
