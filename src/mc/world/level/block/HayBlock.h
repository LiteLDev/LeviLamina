#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class HayBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    HayBlock& operator=(HayBlock const&);
    HayBlock(HayBlock const&);
    HayBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HayBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    MCAPI HayBlock(std::string const& nameId, int id);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // NOLINTEND
};
