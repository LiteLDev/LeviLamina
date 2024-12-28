#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSaveSuspensionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8ecc89;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSaveSuspensionComponent& operator=(PlayerSaveSuspensionComponent const&);
    PlayerSaveSuspensionComponent(PlayerSaveSuspensionComponent const&);
    PlayerSaveSuspensionComponent();
};
