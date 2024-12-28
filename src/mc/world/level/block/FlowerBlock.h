#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Vec3;
namespace mce { class Color; }
// clang-format on

class FlowerBlock : public ::BushBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc854ae;
    // NOLINTEND

public:
    // prevent constructor by default
    FlowerBlock& operator=(FlowerBlock const&);
    FlowerBlock(FlowerBlock const&);
    FlowerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual ::Vec3 randomlyModifyPosition(::BlockPos const& pos) const /*override*/;

    // vIndex: 144
    virtual ::BlockRenderLayer getRenderLayer() const /*override*/;

    // vIndex: 143
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    // vIndex: 148
    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    // vIndex: 0
    virtual ~FlowerBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlowerBlock(::std::string const& nameId, int id, bool isNetherVegetation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool isNetherVegetation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Vec3 $randomlyModifyPosition(::BlockPos const& pos) const;

    MCAPI ::BlockRenderLayer $getRenderLayer() const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource&, ::BlockPos const&) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);

    MCAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
