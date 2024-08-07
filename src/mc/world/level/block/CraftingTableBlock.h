#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CraftingTableBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CraftingTableBlock& operator=(CraftingTableBlock const&);
    CraftingTableBlock(CraftingTableBlock const&);
    CraftingTableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingTableBlock() = default;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI CraftingTableBlock(std::string const& nameId, int id);

    // NOLINTEND
};
