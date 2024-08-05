#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CropBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BeetrootBlock : public ::CropBlock {
public:
    // prevent constructor by default
    BeetrootBlock& operator=(BeetrootBlock const&);
    BeetrootBlock(BeetrootBlock const&);
    BeetrootBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeetrootBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    MCAPI BeetrootBlock(std::string const& nameId, int id);

    // NOLINTEND
};
