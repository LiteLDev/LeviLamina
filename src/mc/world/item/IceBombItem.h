#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class IceBombItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    IceBombItem& operator=(IceBombItem const&);
    IceBombItem(IceBombItem const&);
    IceBombItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IceBombItem@@UEAA@XZ
    virtual ~IceBombItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 19, symbol: ?isThrowable@IceBombItem@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 70, symbol: ?use@IceBombItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& itemStack, class Player& player) const;

    // vIndex: 71, symbol: ?dispense@IceBombItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 88, symbol: ?getCooldownType@IceBombItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 89, symbol: ?getCooldownTime@IceBombItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // symbol: ??0IceBombItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI IceBombItem(std::string const& nameId, int id);

    // symbol: ?ICE_BOMB_COOLDOWN@IceBombItem@@2VHashedString@@B
    MCAPI static class HashedString const ICE_BOMB_COOLDOWN;

    // NOLINTEND
};
