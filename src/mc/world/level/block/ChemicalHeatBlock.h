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

class ChemicalHeatBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChemicalHeatBlock& operator=(ChemicalHeatBlock const&);
    ChemicalHeatBlock(ChemicalHeatBlock const&);
    ChemicalHeatBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChemicalHeatBlock@@UEAA@XZ
    virtual ~ChemicalHeatBlock() = default;

    // vIndex: 60, symbol: ?canBeUsedInCommands@ChemicalHeatBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 145, symbol: ?onPlace@ChemicalHeatBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@ChemicalHeatBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 156, symbol: ?getExtraRenderLayers@ChemicalHeatBlock@@UEBAHXZ
    virtual int getExtraRenderLayers() const;

    // symbol: ??0ChemicalHeatBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChemicalHeatBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_queueTick@ChemicalHeatBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _queueTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
