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

class SmithingTableBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SmithingTableBlock& operator=(SmithingTableBlock const&);
    SmithingTableBlock(SmithingTableBlock const&);
    SmithingTableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmithingTableBlock() = default;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI SmithingTableBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
