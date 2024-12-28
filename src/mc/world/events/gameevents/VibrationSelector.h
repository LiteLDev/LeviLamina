#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class GameEvent;
struct GameEventContext;
struct Tick;
// clang-format on

class VibrationSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkeb3a60;
    ::ll::UntypedStorage<8, 64> mUnkd0de32;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationSelector& operator=(VibrationSelector const&);
    VibrationSelector(VibrationSelector const&);
    VibrationSelector();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addCandidate(
        ::Tick                    currentTick,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext,
        ::BlockPos const&         destinationPos
    );
    // NOLINTEND
};
