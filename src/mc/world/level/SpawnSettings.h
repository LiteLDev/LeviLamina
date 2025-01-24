#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/SpawnBiomeType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct SpawnSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SpawnBiomeType> type;
    ::ll::TypedStorage<8, 32, ::std::string>   userDefinedBiomeName;
    ::ll::TypedStorage<4, 4, ::DimensionType>  dimension;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnSettings& operator=(SpawnSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnSettings(::SpawnSettings const&);

    MCAPI ~SpawnSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpawnSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
