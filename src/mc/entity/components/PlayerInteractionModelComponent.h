#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractionModelComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb213c6;
    ::ll::UntypedStorage<1, 1> mUnkc0a28e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractionModelComponent& operator=(PlayerInteractionModelComponent const&);
    PlayerInteractionModelComponent(PlayerInteractionModelComponent const&);
    PlayerInteractionModelComponent();
};
