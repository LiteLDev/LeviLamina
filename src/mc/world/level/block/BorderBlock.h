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
#include "mc/world/level/block/WallBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BorderBlock : public ::WallBlock {
public:
    // prevent constructor by default
    BorderBlock& operator=(BorderBlock const&);
    BorderBlock(BorderBlock const&);
    BorderBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BorderBlock() = default;

    // vIndex: 10
    virtual class AABB const& getVisualShapeInWorld(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&,
        class AABB& bufferAABB
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB& bufferAABB) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BorderBlock(std::string const& nameId, int id);

    // NOLINTEND
};
