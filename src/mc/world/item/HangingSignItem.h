#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/SignItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // prevent constructor by default
    HangingSignItem& operator=(HangingSignItem const&);
    HangingSignItem(HangingSignItem const&);
    HangingSignItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HangingSignItem@@UEAA@XZ
    virtual ~HangingSignItem() = default;

    // vIndex: 116, symbol:
    // ?_calculatePlacePos@HangingSignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 119, symbol: ?getBlockToPlace@HangingSignItem@@MEBAPEBVBlock@@EAEBVActor@@VBlockPos@@@Z
    virtual class Block const* getBlockToPlace(uchar face, class Actor const& entity, class BlockPos pos) const;

    // symbol:
    // ??0HangingSignItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4SignType@SignBlock@@@Z
    MCAPI HangingSignItem(std::string const& name, int id, ::SignBlock::SignType type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCeilingHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
    MCAPI class Block const*
    _getCeilingHangingSignBlock(class Actor const& entity, uchar const& face, class BlockPos const& pos) const;

    // symbol: ?_getWallHangingSignBlock@HangingSignItem@@AEBAPEBVBlock@@AEBVActor@@AEBEAEBVBlockPos@@@Z
    MCAPI class Block const*
    _getWallHangingSignBlock(class Actor const& entity, uchar const& face, class BlockPos const& pos) const;

    // NOLINTEND
};
