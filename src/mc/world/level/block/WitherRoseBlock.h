#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FlowerBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class WitherRoseBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    WitherRoseBlock& operator=(WitherRoseBlock const&);
    WitherRoseBlock(WitherRoseBlock const&);
    WitherRoseBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 150
    virtual void entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    // vIndex: 113
    virtual bool isAuxValueRelevantForPicking() const /*override*/;

    // vIndex: 119
    virtual bool canSpawnOn(::Actor* actor) const /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~WitherRoseBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WitherRoseBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const&, ::Actor& entity) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCAPI bool $isAuxValueRelevantForPicking() const;

    MCAPI bool $canSpawnOn(::Actor* actor) const;

    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
