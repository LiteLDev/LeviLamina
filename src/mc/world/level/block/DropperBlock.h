#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DispenserBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DropperBlock : public ::DispenserBlock {
public:
    // prevent constructor by default
    DropperBlock& operator=(DropperBlock const&);
    DropperBlock(DropperBlock const&);
    DropperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DropperBlock@@UEAA@XZ
    virtual ~DropperBlock() = default;

    // vIndex: 164, symbol: ?dispenseFrom@DropperBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DropperBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DropperBlock(std::string const& nameId, int id);

    // symbol: ?getAttachedFace@DropperBlock@@SAHH@Z
    MCAPI static int getAttachedFace(int facing);

    // NOLINTEND
};
