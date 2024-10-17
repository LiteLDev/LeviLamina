#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChainBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    ChainBlock& operator=(ChainBlock const&);
    ChainBlock(ChainBlock const&);
    ChainBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChainBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    MCAPI ChainBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canConnect$(class Block const&, uchar, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const& block, uchar face, ::BlockSupportType type) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    // NOLINTEND
};
