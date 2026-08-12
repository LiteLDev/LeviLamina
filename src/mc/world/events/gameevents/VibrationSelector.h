#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationInfo.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                            mFirstCandidateTick;
    ::ll::TypedStorage<8, 64, ::std::optional<::VibrationInfo>> mCandidateVibrationInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addCandidate(
        ::Tick                    currentTick,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockPos const&         destinationPos
    );

    MCAPI void save(::CompoundTag& tag) const;
    // NOLINTEND
};
