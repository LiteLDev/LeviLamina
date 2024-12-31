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
    // prevent constructor by default
    CompoundItem& operator=(CompoundItem const&);
    CompoundItem(CompoundItem const&);
    CompoundItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 0
    virtual ~CompoundItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundItem(::std::string const& name, int id, ::Experiments const& experiments);

    MCAPI void _registerSpecialCompounds(::Experiments const& experiments);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _getName(::CompoundType type);

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidAuxValue(int auxValue) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
