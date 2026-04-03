#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelSeed64.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct CustomBiome;
// clang-format on

struct CustomBiomeSourceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                             seed;
    ::ll::TypedStorage<8, 8, ::Dimension const&>                        dimension;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::CustomBiome>> newBiomeMap;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBiomeSourceConfig& operator=(CustomBiomeSourceConfig const&);
    CustomBiomeSourceConfig(CustomBiomeSourceConfig const&);
    CustomBiomeSourceConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CustomBiomeSourceConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
