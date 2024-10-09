#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
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
    struct ConstructionContext {
    public:
        // prevent constructor by default
        ConstructionContext& operator=(ConstructionContext const&);
        ConstructionContext(ConstructionContext const&);
        ConstructionContext();

    public:
        // NOLINTBEGIN
        MCAPI ~ConstructionContext();

        // NOLINTEND
    };

    class Results {
    public:
        // prevent constructor by default
        Results& operator=(Results const&);
        Results(Results const&);
        Results();

    public:
        // NOLINTBEGIN
        MCAPI explicit Results(std::vector<class ItemInstance> const& results);

        MCAPI ~Results();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Recipe& operator=(Recipe const&);
    Recipe(Recipe const&);
    Recipe();

    std::string                   mRecipeId;      // this+0x8
    mce::UUID                     mMyId;          // this+0x28
    int                           mWidth;         // this+0x38
    int                           mHeight;        // this+0x3C
    int                           mPriority;      // this+0x40
    RecipeNetId                   mRecipeNetId;   // this+0x44
    std::vector<RecipeIngredient> mMyIngredients; // this+0x48
    RecipeUnlockingRequirement    mUnlockingRequirement;
    HashedString                  mTag;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Recipe();

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const = 0;

    // vIndex: 2
    virtual int getCraftingSize() const = 0;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int, int) const = 0;

    // vIndex: 4
    virtual bool isShapeless() const = 0;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const = 0;

    // vIndex: 6
    virtual int size() const = 0;

    // vIndex: 7
    virtual class mce::UUID const& getId() const;

    // vIndex: 8
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    // vIndex: 9
    virtual bool isMultiRecipe() const;

    // vIndex: 10
    virtual bool hasDataDrivenResult() const;

    // vIndex: 11
    virtual bool itemValidForRecipe(class ItemDescriptor const& recipeItem, class ItemStack const& item) const;

    // vIndex: 12
    virtual bool itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs) const;

    // vIndex: 13
    virtual bool
    itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs, class CompoundTag const* rhsTag) const;

    // vIndex: 14
    virtual uint64 getIngredientsHash() const;

    MCAPI int countQuantityOfIngredient(class ItemInstance const& ingredient) const;

    MCAPI struct Recipe::ConstructionContext getConstructionContext() const;

    MCAPI int getHeight() const;

    MCAPI RecipeNetId const& getNetId() const;

    MCAPI std::string const& getRecipeId() const;

    MCAPI class HashedString const& getTag() const;

    MCAPI class RecipeUnlockingRequirement const& getUnlockingRequirement() const;

    MCAPI int getWidth() const;

    MCAPI void setNetId(RecipeNetId const& recipeNetId);

    MCAPI static bool isAnyAuxValue(class ItemDescriptor const& ii);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI explicit Recipe(struct Recipe::ConstructionContext&& context);

    // NOLINTEND
};
