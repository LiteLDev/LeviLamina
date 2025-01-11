#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"

struct MovementAbilitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk72f491;
    ::ll::UntypedStorage<4, 4> mUnk5df2d9;
    ::ll::UntypedStorage<4, 4> mUnk1a7e02;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAbilitiesComponent& operator=(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getBool(::MovementAbilities ability) const;

    MCFOLD float getFlySpeed() const;

    MCAPI void setBool(::MovementAbilities ability, bool value);

    MCAPI void setFlySpeed(float newSpeed);
    // NOLINTEND
};
