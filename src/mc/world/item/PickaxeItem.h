#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem& operator=(PickaxeItem const&);
    PickaxeItem(PickaxeItem const&);
    PickaxeItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PickaxeItem@@UEAA@XZ
    virtual ~PickaxeItem() = default;

    // vIndex: 31, symbol: ?canDestroySpecial@PickaxeItem@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 50, symbol: ?getEnchantSlot@PickaxeItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 76, symbol: ?getDestroySpeed@PickaxeItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // symbol: ??0PickaxeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI PickaxeItem(std::string const& name, int id, class Item::Tier const& tier);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isTierOneBlock@PickaxeItem@@AEBA?B_NAEBVBlockLegacy@@@Z
    MCAPI bool const _isTierOneBlock(class BlockLegacy const& block) const;

    // NOLINTEND
};
