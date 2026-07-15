#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/CompoundType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Experiments;
class Item;
class ItemDescriptor;
class ItemInstance;
class ItemStackBase;
class RecipeIngredient;
struct ResolvedItemIconInfo;
// clang-format on

class CompoundItem : public ::ChemistryItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _registerSpecialCompound(::ItemInstance const& item, ::CompoundType type);

    MCAPI void _registerSpecialCompounds(::Experiments const& experiments);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string getCompoundFormula(::ItemInstance const& instance);
#endif

    MCAPI static ::CompoundType getCompoundType(::ItemDescriptor const& itemDescriptor);

    MCAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType type);

    MCAPI static ::ItemInstance getItemForCompound(::CompoundType type, int stackCount);

    MCAPI static bool isCompoundItem(::ItemStackBase const& instance);

    MCAPI static void unregisterSpecialCompounds();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, int>& mIdToSpecialCompound();

    MCAPI static ::std::unordered_map<int, ::ItemInstance>& mTypeToSpecialCompound();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
