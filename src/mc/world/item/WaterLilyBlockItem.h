#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WaterLilyBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    WaterLilyBlockItem& operator=(WaterLilyBlockItem const&);
    WaterLilyBlockItem(WaterLilyBlockItem const&);
    WaterLilyBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WaterLilyBlockItem@@UEAA@XZ
    virtual ~WaterLilyBlockItem() = default;

    // vIndex: 45, symbol: ?isLiquidClipItem@WaterLilyBlockItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 116, symbol:
    // ?_calculatePlacePos@WaterLilyBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, uchar& face, class BlockPos& pos) const;

    // vIndex: 118, symbol:
    // ?_useOn@WaterLilyBlockItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar, class Vec3 const&) const;

    // symbol: ??0WaterLilyBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WaterLilyBlockItem(std::string const& name, int blockId);

    // NOLINTEND
};
