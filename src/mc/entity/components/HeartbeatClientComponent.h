#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

struct HeartbeatClientComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mHeartbeatSoundEvent;
    ::ll::TypedStorage<4, 4, uint>                                   mHeartRateIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                                  mHeartbeatPhaseRatio;
    ::ll::TypedStorage<1, 1, bool>                                   mStaleData;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>               mLastHeartbeatTick;
    // NOLINTEND
};
