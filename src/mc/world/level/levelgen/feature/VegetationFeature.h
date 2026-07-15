#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
struct WeightedBlock;
// clang-format on

class VegetationFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WeightedBlock>> mBlocksToPlace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
