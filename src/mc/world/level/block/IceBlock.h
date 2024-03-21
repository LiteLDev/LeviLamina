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

class IceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    IceBlock& operator=(IceBlock const&);
    IceBlock(IceBlock const&);
    IceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IceBlock@@UEAA@XZ
    virtual ~IceBlock() = default;

    // vIndex: 89, symbol: ?breaksFallingBlocks@IceBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 94, symbol: ?playerWillDestroy@IceBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@IceBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 148, symbol: ?randomTick@IceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0IceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI IceBlock(std::string const& nameId, int id, bool packed);

    // symbol: ?melt@IceBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void melt(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getMeltedBlockAndSendEvents@IceBlock@@CAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class Block const& _getMeltedBlockAndSendEvents(class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
