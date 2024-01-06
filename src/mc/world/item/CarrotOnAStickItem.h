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

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 35, symbol: ?isHandEquipped@CarrotOnAStickItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 45, symbol: ?requiresInteract@CarrotOnAStickItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 48, symbol: ?getEnchantSlot@CarrotOnAStickItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 49, symbol: ?getEnchantValue@CarrotOnAStickItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 75, symbol: ?hurtActor@CarrotOnAStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& itemStack, class Actor& actor, class Mob& attacker) const;

    // vIndex: 79, symbol: ?mineBlock@CarrotOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& itemStack, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // symbol: ??0CarrotOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CarrotOnAStickItem(std::string const& name, int id);

    // NOLINTEND
};
