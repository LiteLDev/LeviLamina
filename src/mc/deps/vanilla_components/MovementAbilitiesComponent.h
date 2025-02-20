#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"

struct MovementAbilitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk884a2f;
    ::ll::UntypedStorage<4, 4> mUnke2ca47;
    ::ll::UntypedStorage<4, 8> mUnk64940f;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAbilitiesComponent& operator=(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getFloat(::MovementAbilities ability) const;

    MCAPI void setFloat(::MovementAbilities ability, float value);
    // NOLINTEND
};
