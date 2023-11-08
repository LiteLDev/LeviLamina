#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CompoundType.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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

class CompoundItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    CompoundItem& operator=(CompoundItem const&);
    CompoundItem(CompoundItem const&);
    CompoundItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompoundItem@@UEAA@XZ
    virtual ~CompoundItem() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

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

    // vIndex: 95, symbol:
    // ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 119, symbol:
    // ?setIconInfo@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 120, symbol: ?getIconInfo@CompoundItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // symbol:
    // ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
    MCAPI CompoundItem(std::string const&, int, class Experiments const&);

    // symbol: ?getCompoundType@CompoundItem@@SA?AW4CompoundType@@AEBVItemDescriptor@@@Z
    MCAPI static ::CompoundType getCompoundType(class ItemDescriptor const&);

    // symbol: ?getIngredientForCompound@CompoundItem@@SA?AVRecipeIngredient@@W4CompoundType@@@Z
    MCAPI static class RecipeIngredient getIngredientForCompound(::CompoundType);

    // symbol: ?getItemForCompound@CompoundItem@@SA?AVItemInstance@@W4CompoundType@@H@Z
    MCAPI static class ItemInstance getItemForCompound(::CompoundType, int);

    // symbol: ?isCompoundItem@CompoundItem@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isCompoundItem(class ItemStackBase const&);

    // symbol: ?unregisterSpecialCompounds@CompoundItem@@SAXXZ
    MCAPI static void unregisterSpecialCompounds();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_registerSpecialCompound@CompoundItem@@AEAAXAEBVItemInstance@@W4CompoundType@@@Z
    MCAPI void _registerSpecialCompound(class ItemInstance const&, ::CompoundType);

    // symbol:
    // ?_getName@CompoundItem@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CompoundType@@@Z
    MCAPI static std::string _getName(::CompoundType);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mIdToSpecialCompound@CompoundItem@@0V?$unordered_map@HHU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@A
    MCAPI static std::unordered_map<int, int> mIdToSpecialCompound;

    // symbol:
    // ?mTypeToSpecialCompound@CompoundItem@@0V?$unordered_map@HVItemInstance@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHVItemInstance@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<int, class ItemInstance> mTypeToSpecialCompound;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mIdToSpecialCompound() { return mIdToSpecialCompound; }

    static auto& $mTypeToSpecialCompound() { return mTypeToSpecialCompound; }

    // NOLINTEND
};
