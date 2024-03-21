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

class StoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StoneBlock& operator=(StoneBlock const&);
    StoneBlock(StoneBlock const&);
    StoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StoneBlock@@UEAA@XZ
    virtual ~StoneBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@StoneBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 95, symbol: ?asItemInstance@StoneBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 139, symbol: ?tryGetInfested@StoneBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetInfested(class Block const& block) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@StoneBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 159, symbol: ?getMapColor@StoneBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // symbol: ??0StoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI StoneBlock(std::string const& nameId, int id);

    // NOLINTEND
};
