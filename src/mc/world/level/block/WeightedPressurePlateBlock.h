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

    // vIndex: 95, symbol:
    // ?asItemInstance@WeightedPressurePlateBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 163, symbol: ?getTickDelay@WeightedPressurePlateBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 164, symbol: ?getSignalStrength@WeightedPressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 165, symbol: ?getSignalForData@WeightedPressurePlateBlock@@MEBAHH@Z
    virtual int getSignalForData(int data) const;

    // vIndex: 166, symbol: ?getRedstoneSignal@WeightedPressurePlateBlock@@MEBAHH@Z
    virtual int getRedstoneSignal(int signal) const;

    // symbol:
    // ??0WeightedPressurePlateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@H@Z
    MCAPI WeightedPressurePlateBlock(std::string const& nameId, int id, class Material const& material, int maxWeight);

    // symbol: ?MAX_WEIGHT_HEAVY@WeightedPressurePlateBlock@@2HB
    MCAPI static int const MAX_WEIGHT_HEAVY;

    // symbol: ?MAX_WEIGHT_LIGHT@WeightedPressurePlateBlock@@2HB
    MCAPI static int const MAX_WEIGHT_LIGHT;

    // NOLINTEND
};
