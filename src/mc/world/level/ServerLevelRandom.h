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
    // prevent constructor by default
    ServerLevelRandom& operator=(ServerLevelRandom const&);
    ServerLevelRandom(ServerLevelRandom const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::Random& getThreadRandom() /*override*/;

    // vIndex: 0
    virtual ~ServerLevelRandom() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerLevelRandom();
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
    MCAPI ::Random& $getThreadRandom();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
