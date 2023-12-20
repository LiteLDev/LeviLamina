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

class ArrowItem : public ::ComponentItem {
public:
    // prevent constructor by default
    ArrowItem& operator=(ArrowItem const&);
    ArrowItem(ArrowItem const&);
    ArrowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ArrowItem@@UEAA@XZ
    virtual ~ArrowItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@ArrowItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isValidAuxValue@ArrowItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

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

    // vIndex: 71, symbol: ?dispense@ArrowItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionId@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 82, symbol:
    // ?buildEffectDescriptionName@ArrowItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@ArrowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 103, symbol: ?getIconInfo@ArrowItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // symbol: ??0ArrowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ArrowItem(std::string const&, int);

    // symbol: ?applyEffect@ArrowItem@@QEBAXPEAVArrow@@AEBVItemInstance@@@Z
    MCAPI void applyEffect(class Arrow*, class ItemInstance const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?getMobEffects@ArrowItem@@IEBA?AV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@H@Z
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_potionExistsOrContentError@ArrowItem@@AEBA?AV?$shared_ptr@$$CBVPotion@@@std@@H@Z
    MCAPI std::shared_ptr<class Potion const> _potionExistsOrContentError(int) const;

    // NOLINTEND
};
