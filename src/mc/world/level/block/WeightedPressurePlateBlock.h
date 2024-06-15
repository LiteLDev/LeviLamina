#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BasePressurePlateBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // prevent constructor by default
    WeightedPressurePlateBlock& operator=(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock(WeightedPressurePlateBlock const&);
    WeightedPressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WeightedPressurePlateBlock@@UEAA@XZ
    virtual ~WeightedPressurePlateBlock() = default;

    // vIndex: 96, symbol:
    // ?asItemInstance@WeightedPressurePlateBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 163, symbol: ?getTickDelay@WeightedPressurePlateBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 164, symbol: ?getSignalStrength@WeightedPressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const;

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

    // symbol: ?getRedstoneSignal@WeightedPressurePlateBlock@@MEBAHH@Z
    MCVAPI int getRedstoneSignal(int signal) const;

    // symbol: ?getSignalForData@WeightedPressurePlateBlock@@MEBAHH@Z
    MCVAPI int getSignalForData(int data) const;

    // symbol:
    // ??0WeightedPressurePlateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@H@Z
    MCAPI WeightedPressurePlateBlock(std::string const& nameId, int id, class Material const& material, int maxWeight);

    // symbol: ?MAX_WEIGHT_HEAVY@WeightedPressurePlateBlock@@2HB
    MCAPI static int const MAX_WEIGHT_HEAVY;

    // symbol: ?MAX_WEIGHT_LIGHT@WeightedPressurePlateBlock@@2HB
    MCAPI static int const MAX_WEIGHT_LIGHT;

    // NOLINTEND
};
