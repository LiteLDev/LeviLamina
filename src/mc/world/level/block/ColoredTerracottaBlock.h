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

class ColoredTerracottaBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ColoredTerracottaBlock& operator=(ColoredTerracottaBlock const&);
    ColoredTerracottaBlock(ColoredTerracottaBlock const&);
    ColoredTerracottaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ColoredTerracottaBlock@@UEAA@XZ
    virtual ~ColoredTerracottaBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@ColoredTerracottaBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // symbol:
    // ??0ColoredTerracottaBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI ColoredTerracottaBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
