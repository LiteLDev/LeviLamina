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

class RedStoneOreBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RedStoneOreBlock& operator=(RedStoneOreBlock const&);
    RedStoneOreBlock(RedStoneOreBlock const&);
    RedStoneOreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RedStoneOreBlock@@UEAA@XZ
    virtual ~RedStoneOreBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@RedStoneOreBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 95, symbol: ?asItemInstance@RedStoneOreBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 100, symbol: ?attack@RedStoneOreBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@RedStoneOreBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 144, symbol: ?onStandOn@RedStoneOreBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@RedStoneOreBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@RedStoneOreBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 163, symbol: ?_lightUpBlock@RedStoneOreBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void _lightUpBlock(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0RedStoneOreBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI RedStoneOreBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_poofParticles@RedStoneOreBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _poofParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
