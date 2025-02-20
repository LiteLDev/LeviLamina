#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CombatRegenerationDefinition;
class Player;
// clang-format on

class CombatRegenerationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc4a785;
    ::ll::UntypedStorage<8, 8> mUnk9df321;
    // NOLINTEND

public:
    // prevent constructor by default
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&);
    CombatRegenerationComponent(CombatRegenerationComponent const&);
    CombatRegenerationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _applyCombatBuffsToMob(::Actor& owner, ::Actor& mob);

    MCAPI ::CombatRegenerationDefinition const* _getDefinition(::Actor& actor) const;

    MCAPI void _trySendPlayerGeneratedByAxolotlTelemetryEvent(::Player const& player) const;

    MCAPI void tick(::Actor& owner);
    // NOLINTEND
};
