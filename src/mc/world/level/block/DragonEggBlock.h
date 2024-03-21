#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DragonEggBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    DragonEggBlock& operator=(DragonEggBlock const&);
    DragonEggBlock(DragonEggBlock const&);
    DragonEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonEggBlock@@UEAA@XZ
    virtual ~DragonEggBlock() = default;

    // vIndex: 89, symbol: ?breaksFallingBlocks@DragonEggBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 100, symbol: ?attack@DragonEggBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 151, symbol: ?use@DragonEggBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 163, symbol: ?getDustColor@DragonEggBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?getDustParticleName@DragonEggBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // symbol: ??0DragonEggBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DragonEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attemptTeleport@DragonEggBlock@@CAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@@Z
    MCAPI static void _attemptTeleport(class BlockSource&, class Random&, class BlockPos const&);

    // NOLINTEND
};
