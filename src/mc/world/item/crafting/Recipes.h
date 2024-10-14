#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class Item;
class Block;

class Recipes {
public:
    // Recipes inner types declare
    // clang-format off
    struct FurnaceRecipeKey;
    struct NormalizedRectangularRecipeResults;
    class Type;
    // clang-format on

    // Recipes inner types define
    struct FurnaceRecipeKey {
    public:
        int          mID;
        HashedString mTag;

        [[nodiscard]] constexpr FurnaceRecipeKey(int aux, HashedString tag) : mID(aux), mTag(std::move(tag)) {}

    public:
        // NOLINTBEGIN
        MCAPI ~FurnaceRecipeKey();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct NormalizedRectangularRecipeResults {
    public:
        int         mWidth;
        int         mHeight;
        std::string mNormalizedResult;
        std::string mWarning;

        // prevent constructor by default
        NormalizedRectangularRecipeResults& operator=(NormalizedRectangularRecipeResults const&);
        NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&);
        NormalizedRectangularRecipeResults();

    public:
        // NOLINTBEGIN
        MCAPI ~NormalizedRectangularRecipeResults();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class Type {
    public:
        class Item const*  mItem;
        class Block const* mBlock;
        RecipeIngredient   mIngredient;
        char               mC;

        [[nodiscard]] inline Type(std::string const& name, char label, int aux, ushort count)
        : mIngredient(name, aux, count),
          mC(label) {
            mItem  = mIngredient.getItem();
            mBlock = mIngredient.getBlock();
        }

        Type(Type const&)            = default;
        Type& operator=(Type&&)      = default;
        Type& operator=(Type const&) = default;

    public:
        // NOLINTBEGIN
        MCAPI Type(class Recipes::Type&&);

        MCAPI ~Type();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Recipes& operator=(Recipes const&);
    Recipes(Recipes const&);
    Recipes();

public:
    // NOLINTBEGIN
    MCAPI explicit Recipes(class Level* level);

    MCAPI void addFurnaceRecipeAuxData(
        class ItemInstance const&              input,
        class ItemInstance const&              result,
        std::vector<class HashedString> const& tags
    );

    MCAPI void addShapedRecipe(
        std::string                             recipeId,
        class ItemInstance const&               result,
        std::string const&                      r0,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion,
        bool                                    assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        std::string                             recipeId,
        class ItemInstance const&               result,
        std::vector<std::string> const&         rows,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion,
        bool                                    assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        std::string                             recipeId,
        std::vector<class ItemInstance> const&  result,
        std::vector<std::string> const&         rows,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion,
        bool                                    assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        std::string                             recipeId,
        class ItemInstance const&               result,
        std::string const&                      r0,
        std::string const&                      r1,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion,
        bool                                    assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        std::string                             recipeId,
        class ItemInstance const&               result,
        std::string const&                      r0,
        std::string const&                      r1,
        std::string const&                      r2,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, bool, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion,
        bool                                    assumeSymmetry
    );

    MCAPI void addShapelessRecipe(
        std::string                             recipeId,
        class ItemInstance const&               result,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        int                                     priority,
        std::function<std::unique_ptr<
            class
            ShapelessRecipe>(std::string, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, class RecipeUnlockingRequirement const&, class SemVersion const&)>
                                                constructor,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion
    );

    MCAPI void addShulkerBoxRecipe(
        std::string&                            recipeId,
        class ItemInstance const&               result,
        std::vector<class Recipes::Type> const& types,
        std::vector<class HashedString> const&  tags,
        class RecipeUnlockingRequirement const& unlockingReq,
        class SemVersion const&                 formatVersion
    );

    MCAPI void clearRecipes();

    MCAPI std::pair<std::string, class Json::Value> extractRecipeObjInfo(class Json::Value const& obj);

    MCAPI void
    forEachRecipeFor(class HashedString const& tag, std::function<void(class Recipe const&)> const& callback) const;

    MCAPI void forEachUnlockableRecipe(std::function<void(class Recipe const&)> const& callback) const;

    MCAPI class ItemInstance
    getFurnaceRecipeResult(class ItemStackBase const& item, class HashedString const& tag) const;

    MCAPI uint getNumberOfUnlockableRecipes() const;

    MCAPI class Recipe const* getRecipeByNetId(RecipeNetId const& netId) const;

    MCAPI class Recipe* getRecipeFor(class ItemInstance const& result, class HashedString const& tag) const;

    MCAPI std::map<class HashedString, std::map<std::string, std::shared_ptr<class Recipe>>> const&
          getRecipesAllTags() const;

    MCAPI void init(
        class ResourcePackManager&   resourcePackManager,
        class ExternalRecipeStore&   recipeStorage,
        class BaseGameVersion const& baseGameVersion,
        class Experiments const&     experiments
    );

    MCAPI bool loadRecipe(
        std::pair<std::string, class Json::Value> const& recipeObjInfo,
        class SemVersion const&                          engineVersion,
        class SemVersion const&                          formatVersion,
        bool                                             isBaseGamePack
    );

    MCAPI ~Recipes();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _loadDataDrivenRecipes(std::vector<class PackInstance> const& resourcePacksNewestToOldest);

    MCAPI class RecipeIngredient const _loadIngredientFromJson(
        class Json::Value const& obj,
        class SemVersion const&  engineVersion,
        bool                     allowItemCount,
        bool                     allowItemGroup
    ) const;

    MCAPI std::optional<class RecipeUnlockingRequirement> _loadUnlockingRequirementFromJson(
        class Json::Value const& obj,
        class SemVersion const&  engineVersion,
        std::string const&       recipeId
    ) const;

    MCAPI class SemVersion extractRecipeFormatVersion(class Json::Value const& obj);

    MCAPI static struct Recipes::NormalizedRectangularRecipeResults
    _normalizeRectangularRecipe(std::vector<std::string> const& rows);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addItemRecipe(std::unique_ptr<class Recipe> recipe);

    MCAPI void _addMapRecipes();

    MCAPI bool _isRecipeValidToAdd(class Recipe const& recipe);

    MCAPI bool _loadBrewingMix(class Json::Value const& objData, class SemVersion const& engineVersion);

    MCAPI void _loadHardcodedRecipes(class BaseGameVersion const& baseGameVersion, class Experiments const&);

    MCAPI class RecipeIngredient const
    _loadInputIngredientFromJson(class Json::Value const& obj, class SemVersion const& engineVersion) const;

    MCAPI bool _loadSmithingTransform(
        class Json::Value const&               objData,
        class SemVersion const&                engineVersion,
        std::string const&                     recipeId,
        std::vector<class HashedString> const& tags
    );

    MCAPI bool _loadSmithingTrim(
        class Json::Value const&               objData,
        class SemVersion const&                engineVersion,
        std::string const&                     recipeId,
        std::vector<class HashedString> const& tags
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
