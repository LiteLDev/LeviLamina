#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
// clang-format on

struct WorldClockRestartEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldClock> const> mClock;
    ::ll::TypedStorage<4, 4, int>                                                mNewTime;
    // NOLINTEND
};
