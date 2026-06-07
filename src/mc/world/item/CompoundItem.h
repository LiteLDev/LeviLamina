#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/CompoundContainerType.h"
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
    // prevent constructor by default
    CompoundItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundItem(::std::string const& name, int id, ::Experiments const& experiments);

    MCAPI void _registerSpecialCompound(::ItemInstance const& item, ::CompoundType type);

    MCAPI void _registerSpecialCompounds(::Experiments const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _getName(::CompoundType type);

#ifdef LL_PLAT_C
    MCAPI static ::CompoundContainerType getCompoundContainer(::ItemInstance const& instance);

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::Experiments const& experiments);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

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
