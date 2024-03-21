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

class SpongeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SpongeBlock& operator=(SpongeBlock const&);
    SpongeBlock(SpongeBlock const&);
    SpongeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpongeBlock@@UEAA@XZ
    virtual ~SpongeBlock() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@SpongeBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 92, symbol: ?neighborChanged@SpongeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@SpongeBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@SpongeBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@SpongeBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@SpongeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145, symbol: ?onPlace@SpongeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@SpongeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0SpongeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI SpongeBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attemptAbsorbWater@SpongeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _attemptAbsorbWater(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_evaporateWater@SpongeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _evaporateWater(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_performAbsorbWater@SpongeBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _performAbsorbWater(class BlockSource& region, class BlockPos const& startPos) const;

    // symbol: ?_setShouldDry@SpongeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _setShouldDry(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_spawnAbsorbParticles@SpongeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _spawnAbsorbParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
