#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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

class ShieldItem : public ::Item {
public:
    // prevent constructor by default
    ShieldItem& operator=(ShieldItem const&);
    ShieldItem(ShieldItem const&);
    ShieldItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 49, symbol: ?isHandEquipped@ShieldItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 61, symbol: ?isValidRepairItem@ShieldItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 62, symbol: ?getEnchantSlot@ShieldItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 84, symbol: ?use@ShieldItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@ShieldItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 89, symbol: ?hurtActor@ShieldItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 95, symbol:
    // ?buildDescriptionId@ShieldItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol:
    // ?readUserData@ShieldItem@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const;

    // vIndex: 99, symbol: ?writeUserData@ShieldItem@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&) const;

    // vIndex: 101, symbol: ?inventoryTick@ShieldItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;

    // vIndex: 103, symbol: ?getCooldownType@ShieldItem@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 104, symbol: ?getCooldownTime@ShieldItem@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 109, symbol:
    // ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
    virtual ::InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;

    // vIndex: 110, symbol: ?getInHandUpdateType@ShieldItem@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    virtual ::InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // symbol: ??0ShieldItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ShieldItem(std::string const&, int);

    // symbol: ?playBlockSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
    MCAPI void playBlockSound(class Player*) const;

    // symbol: ?playBreakSound@ShieldItem@@QEBAXPEAVPlayer@@@Z
    MCAPI void playBreakSound(class Player*) const;

    // symbol: ?EFFECTIVE_BLOCK_DELAY@ShieldItem@@2HB
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;

    // symbol: ?IN_HAND_BLOCK_DURATION@ShieldItem@@2HB
    MCAPI static int const IN_HAND_BLOCK_DURATION;

    // symbol: ?NO_SHIELD_PATTERN@ShieldItem@@2HB
    MCAPI static int const NO_SHIELD_PATTERN;

    // symbol: ?TIMESTAMP_TAG@ShieldItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TIMESTAMP_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getInHandUpdateType@ShieldItem@@AEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    MCAPI ::InHandUpdateType
    _getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;

    // NOLINTEND
};
