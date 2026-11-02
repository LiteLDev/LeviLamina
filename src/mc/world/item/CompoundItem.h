#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/CompoundType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
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
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string _getName(::CompoundType type);

    MCNAPI static ::std::string getCompoundFormula(::ItemInstance const& instance);
#endif

    MCNAPI static ::CompoundType getCompoundType(::ItemDescriptor const& itemDescriptor);

    MCNAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType type);

    MCNAPI static ::ItemInstance getItemForCompound(::CompoundType type, int stackCount);

    MCNAPI static bool isCompoundItem(::ItemStackBase const& instance);

    MCNAPI static void registerSpecialCompounds();

    MCNAPI static void unregisterSpecialCompounds();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<int, int>& mIdToSpecialCompound();

    MCNAPI static ::std::unordered_map<int, ::ItemInstance>& mTypeToSpecialCompound();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
