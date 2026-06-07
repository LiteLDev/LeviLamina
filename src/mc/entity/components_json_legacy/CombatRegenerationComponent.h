#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CombatRegenerationListener;
// clang-format on

class CombatRegenerationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                 mTargetID;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CombatRegenerationListener>> mCombatRegenerationListener;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyCombatBuffsToMob(::Actor& owner, ::Actor& mob);

    MCAPI bool _shouldApplyCombatBuffs(::Actor& owner, ::Actor& mob);

    MCAPI void tick(::Actor& owner);
    // NOLINTEND
};
