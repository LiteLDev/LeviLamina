#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LoomBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    LoomBlock& operator=(LoomBlock const&);
    LoomBlock(LoomBlock const&);
    LoomBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LoomBlock@@UEAA@XZ
    virtual ~LoomBlock() = default;

    // vIndex: 31, symbol: ?isCraftingBlock@LoomBlock@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 149, symbol: ?isInteractiveBlock@LoomBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@LoomBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0LoomBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LoomBlock(std::string const& nameId, int id);

    // NOLINTEND
};
