#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/WeaponItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MaceItem : public ::WeaponItem {
public:
    // prevent constructor by default
    MaceItem& operator=(MaceItem const&);
    MaceItem(MaceItem const&);
    MaceItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MaceItem@@UEAA@XZ
    virtual ~MaceItem() = default;

    // vIndex: 36, symbol: ?getAttackDamageBonus@MaceItem@@UEBAMAEBVActor@@M@Z
    virtual float getAttackDamageBonus(class Actor const&, float) const;

    // vIndex: 49, symbol: ?isValidRepairItem@MaceItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 50, symbol: ?getEnchantSlot@MaceItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 77, symbol: ?hurtActor@MaceItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // symbol: ??0MaceItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVTier@Item@@@Z
    MCAPI MaceItem(std::string const&, int, class Item::Tier const&);

    // NOLINTEND
};
