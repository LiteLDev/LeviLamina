#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SoulTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    SoulTorchBlock& operator=(SoulTorchBlock const&);
    SoulTorchBlock(SoulTorchBlock const&);
    SoulTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SoulTorchBlock@@UEAA@XZ
    virtual ~SoulTorchBlock() = default;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@SoulTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@SoulTorchBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // symbol: ??0SoulTorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SoulTorchBlock(std::string const& nameId, int id);

    // NOLINTEND
};
