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

class DiggerItem : public ::Item {
public:
    // prevent constructor by default
    DiggerItem& operator=(DiggerItem const&);
    DiggerItem(DiggerItem const&);
    DiggerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DiggerItem@@UEAA@XZ
    virtual ~DiggerItem();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 34, symbol: ?getAttackDamage@DiggerItem@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 35, symbol: ?isHandEquipped@DiggerItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@DiggerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 47, symbol: ?isValidRepairItem@DiggerItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 49, symbol: ?getEnchantValue@DiggerItem@@UEBAHXZ
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

    // vIndex: 74, symbol: ?getDestroySpeed@DiggerItem@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& itemStack, class Block const& block) const;

    // vIndex: 79, symbol: ?mineBlock@DiggerItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& itemInstance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // symbol: ?setBlocks@DiggerItem@@QEAAXAEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@std@@@Z
    MCAPI void setBlocks(std::vector<class Block const*> const& blocks);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0DiggerItem@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHAEBVTier@Item@@AEBV?$vector@PEBVBlock@@V?$allocator@PEBVBlock@@@std@@@2@@Z
    MCAPI DiggerItem(
        std::string const& name,
        int,
        int                                    attackDamage,
        class Item::Tier const&                tier,
        std::vector<class Block const*> const& blocks
    );

    // NOLINTEND
};
