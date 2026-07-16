#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeCappedSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mFloorBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>  mCeilingBlocks;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mSeaBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mFoundationBlock;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mBeachBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeCappedSurfaceData& operator=(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData(BiomeCappedSurfaceData const&);
    BiomeCappedSurfaceData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BiomeCappedSurfaceData& operator=(::BiomeCappedSurfaceData&&);
    // NOLINTEND
};
