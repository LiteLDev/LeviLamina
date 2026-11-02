#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBiomeType.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SpawnSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SpawnBiomeType> type;
    ::ll::TypedStorage<8, 32, ::std::string>   userDefinedBiomeName;
    ::ll::TypedStorage<4, 4, ::DimensionType>  dimension;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SpawnSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
