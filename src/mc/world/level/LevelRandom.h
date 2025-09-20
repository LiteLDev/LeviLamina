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
    ::ll::UntypedStorage<8, 2576> mUnkc36ce9;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRandom& operator=(LevelRandom const&);
    LevelRandom(LevelRandom const&);
    LevelRandom();

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IRandom& $getIRandom();

    MCNAPI ::Random& $getRandom();

    MCNAPI ::Random& $getThreadRandom();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
