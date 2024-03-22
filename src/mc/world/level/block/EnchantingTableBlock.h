#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class EnchantingTableBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    EnchantingTableBlock& operator=(EnchantingTableBlock const&);
    EnchantingTableBlock(EnchantingTableBlock const&);
    EnchantingTableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantingTableBlock@@UEAA@XZ
    virtual ~EnchantingTableBlock() = default;

    // vIndex: 23, symbol: ?canProvideSupport@EnchantingTableBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 31, symbol: ?isCraftingBlock@EnchantingTableBlock@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 61, symbol: ?checkIsPathable@EnchantingTableBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@EnchantingTableBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@EnchantingTableBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0EnchantingTableBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI EnchantingTableBlock(std::string const& nameId, int id);

    // NOLINTEND
};
