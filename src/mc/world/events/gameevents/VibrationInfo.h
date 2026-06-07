#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class GameEvent;
struct GameEventContext;
// clang-format on

class VibrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                       mDistance;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mPos;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>           mSourceID;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>           mProjectileOwnerID;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::GameEvent const>> mVibration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setActorIDs(::GameEventContext const& gameEventContext);

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void save(::CompoundTag& tag) const;
    // NOLINTEND
};
