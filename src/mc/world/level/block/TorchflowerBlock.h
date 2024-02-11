#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FlowerBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TorchflowerBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    TorchflowerBlock& operator=(TorchflowerBlock const&);
    TorchflowerBlock(TorchflowerBlock const&);
    TorchflowerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TorchflowerBlock@@UEAA@XZ
    virtual ~TorchflowerBlock() = default;

    // vIndex: 79, symbol:
    // ?onFertilized@TorchflowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 81, symbol: ?canBeFertilized@TorchflowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // symbol: ??0TorchflowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TorchflowerBlock(std::string const&, int);

    // NOLINTEND
};
