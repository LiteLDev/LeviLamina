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
    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 0
    virtual ~CompoundItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerSpecialCompound(::ItemInstance const& item, ::CompoundType type);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _getName(::CompoundType type);

    MCNAPI static ::CompoundType getCompoundType(::ItemDescriptor const& itemDescriptor);

    MCNAPI static ::RecipeIngredient getIngredientForCompound(::CompoundType type);

    MCNAPI static ::ItemInstance getItemForCompound(::CompoundType type, int stackCount);

    MCNAPI static bool isCompoundItem(::ItemStackBase const& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<int, int>& mIdToSpecialCompound();

    MCAPI static ::std::unordered_map<int, ::ItemInstance>& mTypeToSpecialCompound();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
