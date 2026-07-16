#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BiomeFilterGroup.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct PossibleTransformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Biome const*, uint>>> mTransformsInto;
    ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>                               mCondition;
    ::ll::TypedStorage<4, 4, uint>                                              mMinPassingNeighbors;
    // NOLINTEND

public:
    // prevent constructor by default
    PossibleTransformation& operator=(PossibleTransformation const&);
    PossibleTransformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PossibleTransformation(::PossibleTransformation const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PossibleTransformation const&);
    // NOLINTEND
};
