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

class UnderwaterTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    UnderwaterTorchBlock& operator=(UnderwaterTorchBlock const&);
    UnderwaterTorchBlock(UnderwaterTorchBlock const&);
    UnderwaterTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnderwaterTorchBlock@@UEAA@XZ
    virtual ~UnderwaterTorchBlock() = default;

    // vIndex: 32, symbol: ?isWaterBlocking@UnderwaterTorchBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 56, symbol: ?canContainLiquid@UnderwaterTorchBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 60, symbol: ?canBeUsedInCommands@UnderwaterTorchBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 85, symbol: ?mayPlace@UnderwaterTorchBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@UnderwaterTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0UnderwaterTorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI UnderwaterTorchBlock(std::string const& nameId, int id);

    // NOLINTEND
};
