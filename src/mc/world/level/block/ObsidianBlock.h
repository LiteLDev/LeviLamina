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

class ObsidianBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ObsidianBlock& operator=(ObsidianBlock const&);
    ObsidianBlock(ObsidianBlock const&);
    ObsidianBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ObsidianBlock@@UEAA@XZ
    virtual ~ObsidianBlock() = default;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@ObsidianBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@ObsidianBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // symbol: ??0ObsidianBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI ObsidianBlock(std::string const& nameId, int id, bool isGlowing);

    // symbol: ?poofParticles@ObsidianBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void poofParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
