#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct SpawnOnDeathComponent;
// clang-format on

class MobDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk672fa7;
    // NOLINTEND

public:
    // prevent constructor by default
    MobDeathWrapper& operator=(MobDeathWrapper const&);
    MobDeathWrapper(MobDeathWrapper const&);
    MobDeathWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobDeathWrapper(::Mob& mob);

    MCNAPI void spawnEntity(::SpawnOnDeathComponent const& spawnOnDeathComponent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob);
    // NOLINTEND
};
