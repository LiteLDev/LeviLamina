#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BoundingBox;
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
    MCNAPI BiomeArea(::BoundingBox const& area, uint scale);

    MCNAPI ~BiomeArea();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BoundingBox const& area, uint scale);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
