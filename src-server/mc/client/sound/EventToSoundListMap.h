#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
struct Sound;
// clang-format on

class EventToSoundListMap {
public:
    // EventToSoundListMap inner types define
    using SoundList = ::std::unordered_map<::std::string, ::Sound>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::SharedTypes::Legacy::LevelSoundEvent, ::std::unordered_map<::std::string, ::Sound>>>
                                    mEventToSoundListMap;
    ::ll::TypedStorage<4, 4, float> mVolumeMin;
    ::ll::TypedStorage<4, 4, float> mVolumeMax;
    ::ll::TypedStorage<4, 4, float> mPitchMin;
    ::ll::TypedStorage<4, 4, float> mPitchMax;
    // NOLINTEND
};
