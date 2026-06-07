#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IRandom;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class NyliumBlock : public ::BlockType {
public:
    // NyliumBlock inner types declare
    // clang-format off
    struct CrimsonNyliumBlockVegetationProbabilities;
    struct WarpedNyliumBlockVegetationProbabilities;
    // clang-format on

    // NyliumBlock inner types define
    struct CrimsonNyliumBlockVegetationProbabilities {};

    struct WarpedNyliumBlockVegetationProbabilities {};

public:
    // prevent constructor by default
    NyliumBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NyliumBlock(::std::string const& nameId, int id);

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isGrowthBlockingHalfSlabBlock(::Block const& block);

    MCAPI static bool _isGrowthBlockingStairBlock(::Block const& block);

    MCAPI static ::Block const& crimsonBlockProvider(::IRandom& random);

    MCAPI static ::Block const& netherSproutBlockProvider(::IRandom&);

    MCAPI static ::Block const& warpedBlockProvider(::IRandom& random);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeFertilized(::BlockSource& aboveBlock, ::BlockPos const&, ::Block const&) const;

    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor*, ::FertilizerType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
