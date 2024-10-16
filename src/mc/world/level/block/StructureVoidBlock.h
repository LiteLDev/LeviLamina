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

class StructureVoidBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StructureVoidBlock& operator=(StructureVoidBlock const&);
    StructureVoidBlock(StructureVoidBlock const&);
    StructureVoidBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureVoidBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 14
    virtual bool isObstructingChests(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 78
    virtual bool canRenderSelectionOverlay(::BlockRenderLayer heldItemRenderLayer) const;

    MCAPI StructureVoidBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool
    addCollisionShapes$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool canRenderSelectionOverlay$(::BlockRenderLayer heldItemRenderLayer) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool isObstructingChests$(class BlockSource&, class BlockPos const&, class Block const&) const;

    // NOLINTEND
};
