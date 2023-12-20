#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class FishingRodItem : public ::ComponentItem {
public:
    // prevent constructor by default
    FishingRodItem& operator=(FishingRodItem const&);
    FishingRodItem(FishingRodItem const&);
    FishingRodItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FishingRodItem@@UEAA@XZ
    virtual ~FishingRodItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 35, symbol: ?isHandEquipped@FishingRodItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 45, symbol: ?requiresInteract@FishingRodItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 48, symbol: ?getEnchantSlot@FishingRodItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 49, symbol: ?getEnchantValue@FishingRodItem@@UEBAHXZ
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

    // vIndex: 70, symbol: ?use@FishingRodItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 75, symbol: ?hurtActor@FishingRodItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 79, symbol: ?mineBlock@FishingRodItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionId@FishingRodItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@FishingRodItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 103, symbol: ?getIconInfo@FishingRodItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 104, symbol:
    // ?getInteractText@FishingRodItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 105, symbol: ?getAnimationFrameFor@FishingRodItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // symbol: ?shouldSendInteractionGameEvents@FishingRodItem@@UEBA_NXZ
    MCVAPI bool shouldSendInteractionGameEvents() const;

    // symbol: ?shouldUseJsonForRenderMatrix@FishingRodItem@@UEBA_NXZ
    MCVAPI bool shouldUseJsonForRenderMatrix() const;

    // symbol: ??0FishingRodItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FishingRodItem(std::string const&, int);

    // NOLINTEND
};
