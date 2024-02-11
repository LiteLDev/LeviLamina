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

class NetherrackBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    NetherrackBlock& operator=(NetherrackBlock const&);
    NetherrackBlock(NetherrackBlock const&);
    NetherrackBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherrackBlock@@UEAA@XZ
    virtual ~NetherrackBlock() = default;

    // vIndex: 79, symbol:
    // ?onFertilized@NetherrackBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@NetherrackBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // symbol: ??0NetherrackBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI NetherrackBlock(std::string const& nameId, int id);

    // NOLINTEND
};
