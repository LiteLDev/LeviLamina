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
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~NyliumBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canBeNylium(::BlockSource const& region, ::BlockPos const& pos);

    MCAPI static ::Block const& crimsonBlockProvider(::IRandom& random);

    MCAPI static ::Block const& netherSproutBlockProvider(::IRandom& random);

    MCAPI static ::Block const& warpedBlockProvider(::IRandom& random);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* entity, ::FertilizerType fType) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
