#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedChoices.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Level;
// clang-format on

struct TimerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mTime;
    ::ll::TypedStorage<8, 8, uint64>                    mTimeStamp;
    ::ll::TypedStorage<1, 1, bool>                      mHasExecuted;
    ::ll::TypedStorage<1, 1, bool>                      mLooping;
    ::ll::TypedStorage<4, 4, int>                       mStartTime;
    ::ll::TypedStorage<1, 1, bool>                      mRandomInterval;
    ::ll::TypedStorage<4, 4, int>                       mMinTime;
    ::ll::TypedStorage<4, 4, int>                       mMaxTime;
    ::ll::TypedStorage<8, 24, ::WeightedChoices<float>> mTimeChoices;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI int getRandomTime(::Actor& actor);

    MCAPI uint64 getTimeStamp(::Level const& level);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void restartTimer(::Actor& actor);
    // NOLINTEND
};
