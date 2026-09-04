#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
struct PushablePreset;
// clang-format on

struct PushableByEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PushablePreset>> mPresets;
    ::ll::TypedStorage<8, 8, ::Tick>                           mLastPlayedSoundAtTick;
    // NOLINTEND
};
