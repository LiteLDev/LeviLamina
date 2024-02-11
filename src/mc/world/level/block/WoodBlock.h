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
namespace mce { class Color; }
// clang-format on

class WoodBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    WoodBlock& operator=(WoodBlock const&);
    WoodBlock(WoodBlock const&);
    WoodBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoodBlock@@UEAA@XZ
    virtual ~WoodBlock() = default;

    // vIndex: 21, symbol: ?isStrippable@WoodBlock@@UEBA_NAEBVBlock@@@Z
    virtual bool isStrippable(class Block const& srcBlock) const;

    // vIndex: 22, symbol: ?getStrippedBlock@WoodBlock@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getStrippedBlock(class Block const& srcBlock) const;

    // vIndex: 96, symbol: ?asItemInstance@WoodBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@WoodBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@WoodBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@WoodBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 153, symbol: ?use@WoodBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 162, symbol: ?getMapColor@WoodBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // symbol: ??0WoodBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WoodBlock(std::string const& nameId, int id);

    // NOLINTEND
};
