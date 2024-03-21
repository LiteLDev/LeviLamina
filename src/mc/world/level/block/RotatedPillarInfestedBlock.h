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

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    RotatedPillarInfestedBlock& operator=(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RotatedPillarInfestedBlock@@UEAA@XZ
    virtual ~RotatedPillarInfestedBlock() = default;

    // vIndex: 161, symbol:
    // ?_spawnAfterBreak@RotatedPillarInfestedBlock@@EEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@AEBUResourceDropsContext@@@Z
    virtual void
    _spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // symbol:
    // ??0RotatedPillarInfestedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI RotatedPillarInfestedBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
