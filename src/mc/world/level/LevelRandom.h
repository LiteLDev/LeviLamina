#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ILevelRandom.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Random;
// clang-format on

class LevelRandom : public ::ILevelRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 2568> mUnkc36ce9;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRandom& operator=(LevelRandom const&);
    LevelRandom(LevelRandom const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::IRandom& getIRandom() /*override*/;

    // vIndex: 2
    virtual ::Random& getRandom() /*override*/;

    // vIndex: 3
    virtual ::Random& getThreadRandom() /*override*/;

    // vIndex: 0
    virtual ~LevelRandom() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::IRandom& $getIRandom();

    MCAPI ::Random& $getRandom();

    MCAPI ::Random& $getThreadRandom();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
