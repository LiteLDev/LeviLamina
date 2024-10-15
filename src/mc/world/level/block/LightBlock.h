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

class LightBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LightBlock& operator=(LightBlock const&);
    LightBlock(LightBlock const&);
    LightBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LightBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 77
    virtual bool isFilteredOut(::BlockRenderLayer heldItemRenderLayer) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 88
    virtual bool tryToPlace(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 103
    virtual bool
    canBeBuiltOver(class BlockSource& region, class BlockPos const& pos, class BlockItem const& item) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI LightBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI bool
    addCollisionShapes$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool canBeBuiltOver$(class BlockSource& region, class BlockPos const& pos, class BlockItem const& item) const;

    MCAPI bool canProvideSupport$(class Block const&, uchar, ::BlockSupportType) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    MCAPI class BlockLegacy& init$();

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool isFilteredOut$(::BlockRenderLayer heldItemRenderLayer) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool tryToPlace$(
        class BlockSource&                  region,
        class BlockPos const&               pos,
        class Block const&                  block,
        struct ActorBlockSyncMessage const* syncMsg
    ) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
