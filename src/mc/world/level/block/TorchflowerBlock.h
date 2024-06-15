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

    // vIndex: 80, symbol:
    // ?onFertilized@TorchflowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 82, symbol: ?canBeFertilized@TorchflowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 165, symbol: ?getBaseSeed@BeetrootBlock@@UEBA?BVItemInstance@@XZ
    virtual class ItemInstance const getBaseSeed() const;

    // vIndex: 166, symbol: ?onLand@AnvilBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167, symbol: ?isFreeToFall@FallingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168, symbol: ?startFalling@FallingBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // vIndex: 169, symbol: ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170, symbol: ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171, symbol: ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172, symbol: ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173, symbol: ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOffDelay(class Block const& block) const;

    // vIndex: 174, symbol: ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175, symbol: ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176, symbol: ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOffBlock(class Block const* block) const;

    // symbol: ??0TorchflowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TorchflowerBlock(std::string const&, int);

    // NOLINTEND
};
