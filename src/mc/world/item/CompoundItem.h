#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CompoundType.h"
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

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

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

    // vIndex: 81, symbol:
    // ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int);

    // vIndex: 103, symbol: ?getIconInfo@CompoundItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& itemStack, int, bool inInventoryPane) const;

    // symbol:
    // ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
    MCAPI CompoundItem(std::string const& name, int, class Experiments const&);

    // symbol: ?getCompoundType@CompoundItem@@SA?AW4CompoundType@@AEBVItemDescriptor@@@Z
    MCAPI static ::CompoundType getCompoundType(class ItemDescriptor const& itemDescriptor);

    // symbol: ?getIngredientForCompound@CompoundItem@@SA?AVRecipeIngredient@@W4CompoundType@@@Z
    MCAPI static class RecipeIngredient getIngredientForCompound(::CompoundType type);

    // symbol: ?getItemForCompound@CompoundItem@@SA?AVItemInstance@@W4CompoundType@@H@Z
    MCAPI static class ItemInstance getItemForCompound(::CompoundType type, int stackCount);

    // symbol: ?isCompoundItem@CompoundItem@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isCompoundItem(class ItemStackBase const& instance);

    // symbol: ?unregisterSpecialCompounds@CompoundItem@@SAXXZ
    MCAPI static void unregisterSpecialCompounds();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_registerSpecialCompound@CompoundItem@@AEAAXAEBVItemInstance@@W4CompoundType@@@Z
    MCAPI void _registerSpecialCompound(class ItemInstance const& item, ::CompoundType type);

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
