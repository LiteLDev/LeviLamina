#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class SeagrassFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>      mIterations;
    ::ll::TypedStorage<4, 4, float const>    mTallSeagrassChance;
    ::ll::TypedStorage<8, 8, ::Block const&> mSeagrassBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    SeagrassFeature& operator=(SeagrassFeature const&);
    SeagrassFeature(SeagrassFeature const&);
    SeagrassFeature();

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
