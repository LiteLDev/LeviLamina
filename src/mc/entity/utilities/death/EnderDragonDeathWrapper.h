#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
// clang-format on

class EnderDragonDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf9f94a;
    // NOLINTEND

public:
    // prevent constructor by default
    EnderDragonDeathWrapper& operator=(EnderDragonDeathWrapper const&);
    EnderDragonDeathWrapper(EnderDragonDeathWrapper const&);
    EnderDragonDeathWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EnderDragonDeathWrapper(::EnderDragon& dragon);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EnderDragon& dragon);
    // NOLINTEND
};
