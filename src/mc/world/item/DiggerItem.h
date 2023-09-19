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

class DiggerItem : public ::Item {
public:
    // prevent constructor by default
    DiggerItem& operator=(DiggerItem const&);
    DiggerItem(DiggerItem const&);
    DiggerItem();

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

    // vIndex: 48, symbol: ?getAttackDamage@DiggerItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 49, symbol: ?isHandEquipped@DiggerItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@DiggerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 61, symbol: ?isValidRepairItem@DiggerItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 63, symbol: ?getEnchantValue@DiggerItem@@UEBAHXZ
    virtual int getEnchantValue() const;

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

    // vIndex: 88, symbol: ?getDestroySpeed@DiggerItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;

    // vIndex: 93, symbol: ?mineBlock@DiggerItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // symbol: ??1DiggerItem@@UEAA@XZ
    MCVAPI ~DiggerItem();

    // symbol: ?setBlocks@DiggerItem@@QEAAXAEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@std@@@Z
    MCAPI void setBlocks(std::vector<class Block const*> const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0DiggerItem@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHAEBVTier@Item@@AEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@2@@Z
    MCAPI DiggerItem(std::string const&, int, int, class Item::Tier const&, std::vector<class Block const*> const&);

    // NOLINTEND
};
