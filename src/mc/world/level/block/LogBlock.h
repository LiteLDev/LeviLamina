#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LogBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    LogBlock& operator=(LogBlock const&);
    LogBlock(LogBlock const&);
    LogBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LogBlock@@UEAA@XZ
    virtual ~LogBlock();

    // vIndex: 142, symbol: ?onRemove@LogBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 151, symbol: ?use@LogBlock@@MEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 159, symbol: ?getMapColor@LogBlock@@MEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol:
    // ??0LogBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@V?$optional@ULogBlockMapColors@@@2@@Z
    MCAPI LogBlock(
        std::string const& nameId,
        int                id,
        class WeakPtr<class BlockLegacy const>,
        std::optional<struct LogBlockMapColors> mapColors
    );

    // NOLINTEND
};
