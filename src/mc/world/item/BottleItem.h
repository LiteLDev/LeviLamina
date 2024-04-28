#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BottleItem : public ::Item {
public:
    // prevent constructor by default
    BottleItem& operator=(BottleItem const&);
    BottleItem(BottleItem const&);
    BottleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BottleItem@@UEAA@XZ
    virtual ~BottleItem() = default;

    // vIndex: 45, symbol: ?isLiquidClipItem@BottleItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 73, symbol: ?dispense@BottleItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 118, symbol:
    // ?_useOn@BottleItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0BottleItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BottleItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createBottledItem@BottleItem@@AEBAXAEAVActor@@AEAVItemStack@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void _createBottledItem(class Actor& entity, class ItemStack& instance, std::string_view itemToCreate) const;

    // symbol:
    // ?_fillBottleViaDispenser@BottleItem@@AEBAXAEAVBlockSource@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI void _fillBottleViaDispenser(
        class BlockSource& region,
        std::string_view   bottledItem,
        class Container&   container,
        int                slot,
        class Vec3 const&  pos,
        uchar              face
    ) const;

    // NOLINTEND
};
