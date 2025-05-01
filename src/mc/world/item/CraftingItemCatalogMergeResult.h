#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogItemCategory.h"

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
        ::ll::UntypedStorage<8, 32>  mUnke23999;
        ::ll::UntypedStorage<8, 128> mUnk1a86f2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Identifier& operator=(Identifier const&);
        Identifier(Identifier const&);
        Identifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Identifier(::CraftingItemCatalogMergeResult::Identifier&&);

        MCNAPI ~Identifier();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CraftingItemCatalogMergeResult::Identifier&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Group {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 168> mUnk2581b5;
        ::ll::UntypedStorage<8, 24>  mUnk7e3c36;
        // NOLINTEND

    public:
        // prevent constructor by default
        Group& operator=(Group const&);
        Group(Group const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Group();

        MCNAPI ::CraftingItemCatalogMergeResult::Group& operator=(::CraftingItemCatalogMergeResult::Group&&);

        MCNAPI ~Group();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Category {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnke3ab8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Category& operator=(Category const&);
        Category(Category const&);
        Category();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Category();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk653287;
    ::ll::UntypedStorage<8, 24> mUnk983063;
    ::ll::UntypedStorage<8, 24> mUnk6119e7;
    ::ll::UntypedStorage<8, 24> mUnk51eea4;
    ::ll::UntypedStorage<8, 64> mUnk887091;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingItemCatalogMergeResult& operator=(CraftingItemCatalogMergeResult const&);
    CraftingItemCatalogMergeResult(CraftingItemCatalogMergeResult const&);
    CraftingItemCatalogMergeResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void insertAfterItemsGroup(
        ::SharedTypes::v1_21_60::CraftingCatalogItemCategory itemName,
        ::std::string_view                                   insertGroup,
        ::CraftingItemCatalogMergeResult::Group              itemCategory
    );

    MCNAPI ~CraftingItemCatalogMergeResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
