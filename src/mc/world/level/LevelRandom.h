#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"
#include "mc/world/level/ILevelRandom.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class LevelRandom : public ::ILevelRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2576, ::Random> mRandom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::IRandom& getIRandom() /*override*/;

    virtual ::Random& getRandom() /*override*/;

    virtual ::Random& getThreadRandom() /*override*/;

    virtual ~LevelRandom() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::IRandom& $getIRandom();

    MCFOLD ::Random& $getRandom();

    MCFOLD ::Random& $getThreadRandom();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
