#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MusicDiscPlaybackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>         mSoundEventName;
    ::ll::TypedStorage<4, 4, float>                  mDurationSeconds;
    ::ll::TypedStorage<4, 4, int>                    mComparatorSignal;
    ::ll::TypedStorage<8, 32, ::std::string>         mDescription;
    ::ll::TypedStorage<1, 1, bool>                   mLocalizeDescription;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mBroadcastRange;
    // NOLINTEND
};
