#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DeadBushBlock : public ::BushBlock {
public:
    // prevent constructor by default
    DeadBushBlock& operator=(DeadBushBlock const&);
    DeadBushBlock(DeadBushBlock const&);
    DeadBushBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeadBushBlock@@UEAA@XZ
    virtual ~DeadBushBlock() = default;

    // vIndex: 86, symbol: ?mayPlaceOn@DeadBushBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0DeadBushBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DeadBushBlock(std::string const& nameId, int id);

    // NOLINTEND
};
