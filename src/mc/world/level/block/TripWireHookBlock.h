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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TripWireHookBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TripWireHookBlock& operator=(TripWireHookBlock const&);
    TripWireHookBlock(TripWireHookBlock const&);
    TripWireHookBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TripWireHookBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI TripWireHookBlock(std::string const& nameId, int id);

    MCAPI void
    calculateState(class BlockSource& region, class BlockPos const& pos, bool isBeingDestroyed, int wireSourceIdx)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _emitState(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  attached,
        bool                  powered,
        bool                  wasAttached,
        bool                  wasPowered
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
