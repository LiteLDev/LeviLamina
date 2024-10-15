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

class AirBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AirBlock& operator=(AirBlock const&);
    AirBlock(AirBlock const&);
    AirBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AirBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void
    addAABBs(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB& bufferValue)
        const;

    // vIndex: 10
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 14
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 83
    virtual bool mayPick() const;

    // vIndex: 84
    virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, uchar) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 88
    virtual bool
    tryToPlace(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*)
        const;

    // vIndex: 91
    virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;

    // vIndex: 95
    virtual class Block const* playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 135
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 148
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI AirBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void
    addAABBs$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    MCAPI bool
    addCollisionShapes$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI void animateTick$(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI void destroy$(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const&
    getOutline$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB& bufferValue)
        const;

    MCAPI class AABB const& getVisualShape$(class Block const&, class AABB&) const;

    MCAPI class AABB const&
    getVisualShapeInWorld$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&)
        const;

    MCAPI bool isObstructingChests$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool mayPick$() const;

    MCAPI bool mayPick$(class BlockSource const&, class Block const&, bool) const;

    MCAPI bool mayPlace$(class BlockSource&, class BlockPos const&, uchar) const;

    MCAPI bool mayPlace$(class BlockSource&, class BlockPos const&) const;

    MCAPI class Block const* playerWillDestroy$(class Player&, class BlockPos const&, class Block const&) const;

    MCAPI void tick$(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI bool
    tryToPlace$(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*)
        const;

    // NOLINTEND
};
