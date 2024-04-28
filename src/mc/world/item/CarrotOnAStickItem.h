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

class CarrotOnAStickItem : public ::Item {
public:
    // prevent constructor by default
    CarrotOnAStickItem& operator=(CarrotOnAStickItem const&);
    CarrotOnAStickItem(CarrotOnAStickItem const&);
    CarrotOnAStickItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CarrotOnAStickItem@@UEAA@XZ
    virtual ~CarrotOnAStickItem() = default;

    // vIndex: 37, symbol: ?isHandEquipped@CarrotOnAStickItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 47, symbol: ?requiresInteract@CarrotOnAStickItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 50, symbol: ?getEnchantSlot@CarrotOnAStickItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@CarrotOnAStickItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 77, symbol: ?hurtActor@CarrotOnAStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 80, symbol: ?mineBlock@CarrotOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& item, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // symbol: ??0CarrotOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CarrotOnAStickItem(std::string const& name, int id);

    // NOLINTEND
};
