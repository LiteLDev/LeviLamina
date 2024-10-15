#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TorchBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TorchBlock& operator=(TorchBlock const&);
    TorchBlock(TorchBlock const&);
    TorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TorchBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar face, class Vec3 const&, int) const;

    // vIndex: 118
    virtual int getIconYOffset() const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 156
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI TorchBlock(std::string const& nameId, int id, ::MaterialType mat);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Vec3 _flameParticlePos(class BlockPos const& pos, ::TorchFacing dir) const;

    MCAPI bool canBePlacedOn(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::MaterialType mat);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI void animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getIconYOffset$() const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar face, class Vec3 const&, int) const;

    MCAPI ::BlockRenderLayer getRenderLayer$(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    MCAPI static ::ll::CArrayT<::TorchFacing const>& DATA_FROM_FACING();

    MCAPI static ::ll::CArrayT<ushort const>& FACING_FROM_DATA();

    // NOLINTEND
};
