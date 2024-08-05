#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FurnaceBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BlastFurnaceBlock : public ::FurnaceBlock {
public:
    // prevent constructor by default
    BlastFurnaceBlock& operator=(BlastFurnaceBlock const&);
    BlastFurnaceBlock(BlastFurnaceBlock const&);
    BlastFurnaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlastFurnaceBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI BlastFurnaceBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND
};
