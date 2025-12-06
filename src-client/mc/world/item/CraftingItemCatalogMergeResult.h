#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"
#include "mc/world/item/ItemInstance.h"

class CraftingItemCatalogMergeResult {
public:
    // CraftingItemCatalogMergeResult inner types declare
    // clang-format off
    struct Category;
    struct Group;
    struct Identifier;
    // clang-format on

    // CraftingItemCatalogMergeResult inner types define
    struct Identifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>   mName;
        ::ll::TypedStorage<8, 128, ::ItemInstance> mIcon;
        // NOLINTEND

    public:
        // prevent constructor by default
        Identifier& operator=(Identifier const&);
        Identifier(Identifier const&);
        Identifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Identifier(::CraftingItemCatalogMergeResult::Identifier&&);

        MCAPI ~Identifier();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CraftingItemCatalogMergeResult::Identifier&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct Group {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 168, ::std::optional<::CraftingItemCatalogMergeResult::Identifier>> mIdentifier;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                                  mItems;
        // NOLINTEND

    public:
        // prevent constructor by default
        Group& operator=(Group const&);
        Group(Group const&);
        Group();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Group(::CraftingItemCatalogMergeResult::Group&&);

        MCAPI ::CraftingItemCatalogMergeResult::Group& operator=(::CraftingItemCatalogMergeResult::Group&&);

        MCAPI ~Group();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CraftingItemCatalogMergeResult::Group&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct Category {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::CraftingItemCatalogMergeResult::Group>> mGroups;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Category();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mConstructionCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mNatureCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mEquipmentCategory;
    ::ll::TypedStorage<8, 24, ::CraftingItemCatalogMergeResult::Category> mItemsCategory;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                  mUsedItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void insertAfterGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory itemCategory,
        ::std::string_view                                   groupName,
        ::CraftingItemCatalogMergeResult::Group              insertGroup
    );

    MCAPI void insertAfterItemsGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory itemCategory,
        ::std::string_view                                   itemName,
        ::CraftingItemCatalogMergeResult::Group              insertGroup
    );

    MCAPI ~CraftingItemCatalogMergeResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
