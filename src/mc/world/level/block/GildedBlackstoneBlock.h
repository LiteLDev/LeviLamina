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

class GildedBlackstoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    GildedBlackstoneBlock& operator=(GildedBlackstoneBlock const&);
    GildedBlackstoneBlock(GildedBlackstoneBlock const&);
    GildedBlackstoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GildedBlackstoneBlock@@UEAA@XZ
    virtual ~GildedBlackstoneBlock() = default;

    // vIndex: 163, symbol: ?getResourceItem@GildedBlackstoneBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance
    getResourceItem(class Randomize& randomize, class Block const& block, int bonusLootLevel) const;

    // vIndex: 165, symbol: ?getSilkTouchItemInstance@GildedBlackstoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // symbol:
    // ??0GildedBlackstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI GildedBlackstoneBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
