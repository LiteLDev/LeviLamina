#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class BreakDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mBreakTicks;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mMinDifficulty;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                   mTargetID;
    ::ll::TypedStorage<4, 4, int>                               mBreakingTime;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>      mObstructionPos;
    ::ll::TypedStorage<8, 8, uint64>                            mLastPathIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _shouldBreakDoor(::Mob& mob);

    MCAPI bool canMobBreakDoor(::Mob& mob, ::Path const& path) const;

    MCAPI void clearProgress(::Mob& mob);

    MCAPI void obstructionCheck(::Mob& mob);
    // NOLINTEND
};
