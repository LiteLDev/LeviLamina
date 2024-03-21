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

class InfestedBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    InfestedBlock& operator=(InfestedBlock const&);
    InfestedBlock(InfestedBlock const&);
    InfestedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InfestedBlock@@UEAA@XZ
    virtual ~InfestedBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@InfestedBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@InfestedBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@InfestedBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@InfestedBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 140, symbol: ?tryGetUninfested@InfestedBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetUninfested(class Block const& block) const;

    // vIndex: 161, symbol:
    // ?_spawnAfterBreak@InfestedBlock@@EEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@AEBUResourceDropsContext@@@Z
    virtual void
    _spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // symbol: ??0InfestedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI InfestedBlock(std::string const& nameId, int id);

    // symbol: ?spawnSilverfish@InfestedBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void spawnSilverfish(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
