#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChiseledBookshelfBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    ChiseledBookshelfBlock& operator=(ChiseledBookshelfBlock const&);
    ChiseledBookshelfBlock(ChiseledBookshelfBlock const&);
    ChiseledBookshelfBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChiseledBookshelfBlock@@UEAA@XZ
    virtual ~ChiseledBookshelfBlock() = default;

    // vIndex: 95, symbol: ?asItemInstance@ChiseledBookshelfBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@ChiseledBookshelfBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol:
    // ?getComparatorSignal@ChiseledBookshelfBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 142, symbol: ?onRemove@ChiseledBookshelfBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@ChiseledBookshelfBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 150, symbol: ?use@ChiseledBookshelfBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@EV?$optional@VVec3@@@std@@@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3>) const;

    // symbol: ??0ChiseledBookshelfBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChiseledBookshelfBlock(std::string const& nameId, int id);

    // NOLINTEND
};
