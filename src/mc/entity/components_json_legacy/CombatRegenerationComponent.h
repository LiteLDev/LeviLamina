#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CombatRegenerationDefinition;
class CombatRegenerationListener;
class Player;
struct ActorUniqueID;
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

    MCAPI ::CombatRegenerationDefinition const* _getDefinition(::Actor& actor) const;

    MCAPI void _trySendPlayerGeneratedByAxolotlTelemetryEvent(::Player const& player) const;

    MCAPI void tick(::Actor& owner);
    // NOLINTEND
};
