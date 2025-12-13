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
class Experiments;
class Random;
class Randomize;
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

    using RandomPlantProvider = ::std::function<::Block const&(::Randomize const&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

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

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
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
    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

#ifdef LL_PLAT_S
    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;
#endif

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
