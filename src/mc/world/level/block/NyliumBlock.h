#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
class Randomize;
// clang-format on

class NyliumBlock : public ::BlockLegacy {
public:
    // NyliumBlock inner types declare
    // clang-format off
    struct CrimsonNyliumBlockVegetationProbabilities;
    struct WarpedNyliumBlockVegetationProbabilities;
    // clang-format on

    // NyliumBlock inner types define
    using RandomPlantProvider = ::std::function<::Block const&(::Randomize const&)>;

    struct WarpedNyliumBlockVegetationProbabilities {};

    struct CrimsonNyliumBlockVegetationProbabilities {};

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 0
    virtual ~NyliumBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _scatterVegetation(
        ::BlockSource&                                      region,
        ::BlockPos const&                                   pos,
        ::Random&                                           random,
        ::std::function<::Block const&(::Randomize const&)> plantProvider
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBeNylium(::BlockSource const& region, ::BlockPos const& pos);

    MCAPI static ::Block const& crimsonBlockProvider(::Randomize const& randomize);

    MCAPI static ::Block const& netherSproutBlockProvider(::Randomize const& randomize);

    MCAPI static ::Block const& warpedBlockProvider(::Randomize const& randomize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
