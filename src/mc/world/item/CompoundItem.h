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

    // vIndex: 56, symbol: ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104, symbol: ?getIconInfo@CompoundItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // symbol:
    // ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
    MCAPI CompoundItem(std::string const& name, int id, class Experiments const& experiments);

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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mIdToSpecialCompound@CompoundItem@@0V?$unordered_map@HHU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@A
    MCAPI static std::unordered_map<int, int> mIdToSpecialCompound;

    // symbol:
    // ?mTypeToSpecialCompound@CompoundItem@@0V?$unordered_map@HVItemInstance@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHVItemInstance@@@std@@@3@@std@@A
    MCAPI static std::unordered_map<int, class ItemInstance> mTypeToSpecialCompound;

    // NOLINTEND
};
