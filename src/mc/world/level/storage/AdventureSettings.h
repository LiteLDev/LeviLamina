#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> noPvM;
    ::ll::TypedStorage<1, 1, bool> noMvP;
    ::ll::TypedStorage<1, 1, bool> immutableWorld;
    ::ll::TypedStorage<1, 1, bool> showNameTags;
    ::ll::TypedStorage<1, 1, bool> autoJump;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdventureSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
