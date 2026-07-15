#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

class BiomeArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                           mStrideX;
    ::ll::TypedStorage<4, 4, uint>                           mStrideY;
    ::ll::TypedStorage<8, 24, ::std::vector<::Biome const*>> mBiomes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeArea();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
