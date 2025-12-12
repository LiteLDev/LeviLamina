#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelRandom.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class ServerLevelRandom : public ::LevelRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Random& getThreadRandom() /*override*/;

    virtual ~ServerLevelRandom() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Random& $getThreadRandom();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
