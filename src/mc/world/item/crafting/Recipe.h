#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CraftingContainer;
class CraftingContext;
class HashedString;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class NetworkItemInstanceDescriptor;
class RecipeIngredient;
class RecipeUnlockingRequirement;
class SemVersion;
struct RecipeNetIdTag;
namespace mce { class UUID; }
// clang-format on

class Recipe {
public:
    // Recipe inner types declare
    // clang-format off
    struct ConstructionContext;
    class Results;
    // clang-format on

    // Recipe inner types define
    using Ingredients = ::std::vector<::RecipeIngredient>;

    using ResultList = ::std::vector<::ItemInstance>;

    using UnloadedItemInstanceResultList = ::std::vector<::NetworkItemInstanceDescriptor>;

    class Results {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                            mResultsAreLoaded;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                  mResults;
        ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemInstanceDescriptor>> mUnloadedResults;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Results();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ConstructionContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                     recipeId;
        ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> ingredients;
        ::ll::TypedStorage<8, 56, ::Recipe::Results>                 results;
        ::ll::TypedStorage<8, 48, ::HashedString>                    tag;
        ::ll::TypedStorage<4, 4, int>                                priority;
        ::ll::TypedStorage<8, 8, ::mce::UUID const*>                 uuid;
        ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>      unlockingRequirement;
        ::ll::TypedStorage<8, 24, ::SemVersion>                      formatVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ConstructionContext();
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
    ::ll::TypedStorage<8, 32, ::std::string>                     mRecipeId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                       mMyId;
    ::ll::TypedStorage<4, 4, int>                                mWidth;
    ::ll::TypedStorage<4, 4, int>                                mHeight;
    ::ll::TypedStorage<4, 4, int>                                mPriority;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                      mRecipeNetId;
    ::ll::TypedStorage<8, 24, ::std::vector<::RecipeIngredient>> mMyIngredients;
    ::ll::TypedStorage<8, 56, ::Recipe::Results>                 mResults;
    ::ll::TypedStorage<8, 32, ::RecipeUnlockingRequirement>      mUnlockingRequirement;
    ::ll::TypedStorage<8, 24, ::SemVersion>                      mRecipeDataVersion;
    ::ll::TypedStorage<8, 48, ::HashedString>                    mTag;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Recipe();

    // vIndex: 1
    virtual ::std::vector<::ItemInstance> const& assemble(::CraftingContainer&, ::CraftingContext&) const = 0;

    // vIndex: 2
    virtual int getCraftingSize() const = 0;

    // vIndex: 3
    virtual ::RecipeIngredient const& getIngredient(int, int) const = 0;

    // vIndex: 4
    virtual bool isShapeless() const = 0;

    // vIndex: 5
    virtual bool matches(::CraftingContainer const&, ::CraftingContext const&) const = 0;

    // vIndex: 6
    virtual int size() const = 0;

    // vIndex: 7
    virtual ::mce::UUID const& getId() const;

    // vIndex: 8
    virtual ::std::vector<::ItemInstance> const& getResultItems() const;

    // vIndex: 9
    virtual bool isMultiRecipe() const;

    // vIndex: 10
    virtual bool hasDataDrivenResult() const;

    // vIndex: 11
    virtual bool itemValidForRecipe(::ItemDescriptor const& recipeItem, ::ItemStack const& item) const;

    // vIndex: 13
    virtual bool itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;

    // vIndex: 12
    virtual bool
    itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs, ::CompoundTag const* rhsTag) const;

    // vIndex: 14
    virtual uint64 getIngredientsHash() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Recipe(::Recipe::ConstructionContext&& context);

    MCAPI int countQuantityOfIngredient(::ItemInstance const& ingredient) const;

    MCAPI void generateUUID();

    MCAPI ::Recipe::ConstructionContext getConstructionContext() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isAnyAuxValue(::ItemDescriptor const& ii);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Recipe::ConstructionContext&& context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::mce::UUID const& $getId() const;

    MCFOLD ::std::vector<::ItemInstance> const& $getResultItems() const;

    MCFOLD bool $isMultiRecipe() const;

    MCFOLD bool $hasDataDrivenResult() const;

    MCAPI bool $itemValidForRecipe(::ItemDescriptor const& recipeItem, ::ItemStack const& item) const;

    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs) const;

    MCAPI bool $itemsMatch(::ItemDescriptor const& lhs, ::ItemDescriptor const& rhs, ::CompoundTag const* rhsTag) const;

    MCAPI uint64 $getIngredientsHash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
