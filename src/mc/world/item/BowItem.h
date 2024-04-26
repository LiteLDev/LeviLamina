#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BowItem : public ::RangedWeaponItem {
public:
    // prevent constructor by default
    BowItem& operator=(BowItem const&);
    BowItem(BowItem const&);
    BowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BowItem@@UEAA@XZ
    virtual ~BowItem() = default;

    // vIndex: 50, symbol: ?getEnchantSlot@BowItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 96, symbol: ?enchantProjectile@BowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
    virtual void enchantProjectile(class ItemStackBase const&, class Actor& projectile) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@BowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@BowItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // symbol: ??0BowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BowItem(std::string const& name, int id);

    // NOLINTEND
};
