#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FoliageBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BlockType;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class StemBlock : public ::FoliageBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const&> mFruit;
    // NOLINTEND

public:
    // prevent constructor by default
    StemBlock& operator=(StemBlock const&);
    StemBlock(StemBlock const&);
    StemBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* fType, ::FertilizerType) const
        /*override*/;

    virtual bool canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual bool isStemBlock() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StemBlock(::std::string const& nameId, int id, ::BlockType const& fruit);

    MCFOLD ::BlockType const& getFruitBlock() const;

    MCAPI float getGrowthSpeed(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::BlockType const& fruit);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI bool $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* fType, ::FertilizerType) const;

    MCFOLD bool $canBeFertilized(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCFOLD bool $isStemBlock() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
