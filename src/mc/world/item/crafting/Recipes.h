#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/SortItemInstanceIdAux.h"
#include "mc/world/item/crafting/ExternalRecipeStore.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class Experiments;
class Item;
class ItemStackBase;
class Level;
class MinEngineVersion;
class PackInstance;
class Recipe;
class RecipeUnlockingRequirement;
class ResourcePackManager;
class SemVersion;
class ShapedRecipe;
class ShapelessRecipe;
struct RecipeNetIdTag;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mID;
        ::ll::TypedStorage<8, 48, ::HashedString> mTag;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FurnaceRecipeKey();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class Type {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Item*>             mItem;
        ::ll::TypedStorage<8, 8, ::Block const*>      mBlock;
        ::ll::TypedStorage<8, 24, ::RecipeIngredient> mIngredient;
        ::ll::TypedStorage<1, 1, char>                mC;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Type();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using TypeList = ::std::vector<::Recipes::Type>;

    struct NormalizedRectangularRecipeResults {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mWidth;
        ::ll::TypedStorage<4, 4, int>            mHeight;
        ::ll::TypedStorage<8, 32, ::std::string> mNormalizedResult;
        ::ll::TypedStorage<8, 32, ::std::string> mWarning;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~NormalizedRectangularRecipeResults();
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
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ExternalRecipeStore>  mExternalRecipeStore;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::map<::std::string, ::std::shared_ptr<::Recipe>>>>
                                                                                       mRecipes;
    ::ll::TypedStorage<8, 16, ::std::map<::Recipes::FurnaceRecipeKey, ::ItemInstance>> mFurnaceRecipes;
    ::ll::TypedStorage<1, 1, bool>                                                     mInitializing;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::ItemInstance, ::std::unordered_map<::std::string, ::Recipe*>, ::SortItemInstanceIdAux>>
                                                                              mRecipesByOutput;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::RecipeNetId, ::Recipe*>> mRecipesByNetId;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint64, ::std::unordered_map<uint64, ::std::shared_ptr<::std::vector<::ItemInstance>>>>>
                                                                         mRecipesByInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Recipe*>>> mUnlockableRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::weak_ptr<bool>, ::std::function<void()>>>> mListeners;
    ::ll::TypedStorage<8, 8, ::Level*>                                                                    mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    Recipes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Recipes(::Level* level);

    MCAPI void _addItemRecipe(::std::unique_ptr<::Recipe> recipe);

    MCAPI void _addMapRecipes();

    MCAPI ::RecipeUnlockingRequirement
    _createUnlockingRequirementFromContext(::RecipeUnlockingRequirement::UnlockingContext context) const;

    MCAPI bool _isRecipeValidToAdd(::Recipe const& recipe);

    MCAPI bool _loadBrewingMix(::Json::Value const& objData, ::MinEngineVersion const& minEngineVersion);

    MCAPI void _loadDataDrivenRecipes(::std::vector<::PackInstance> const& resourcePacksNewestToOldest);

    MCAPI void _loadHardcodedRecipes(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

    MCAPI ::RecipeIngredient const _loadIngredientFromJson(
        ::Json::Value const& obj,
        ::MolangVersion      molangVersion,
        bool                 allowItemCount,
        bool                 allowItemGroup
    ) const;

    MCAPI ::RecipeIngredient const
    _loadInputIngredientFromJson(::Json::Value const& obj, ::MinEngineVersion const& minEngineVersion) const;

    MCAPI ::RecipeIngredient const
    _loadOutputIngredientFromJson(::Json::Value const& obj, ::MolangVersion molangVersion) const;

    MCAPI bool _loadSmithingTransform(
        ::Json::Value const&                 objData,
        ::MolangVersion                      molangVersion,
        ::std::string const&                 recipeId,
        ::std::vector<::HashedString> const& tags
    );

    MCAPI bool _loadSmithingTrim(
        ::Json::Value const&                 objData,
        ::MolangVersion                      molangVersion,
        ::std::string const&                 recipeId,
        ::std::vector<::HashedString> const& tags
    );

    MCAPI ::std::optional<::RecipeUnlockingRequirement> _loadUnlockingRequirementFromJson(
        ::Json::Value const& obj,
        ::MolangVersion      molangVersion,
        ::std::string const& recipeId
    ) const;

    MCAPI void addDyedItemRecipe(
        ::std::string                recipeId,
        ::ItemInstance const&        result,
        ::RecipeIngredient           itemToDye,
        ::RecipeIngredient           dye,
        ::RecipeUnlockingRequirement unlockingReq,
        int                          priority,
        ::SemVersion const&          formatVersion
    );

    MCAPI void addFurnaceRecipeAuxData(
        ::ItemInstance const&                input,
        ::ItemInstance const&                result,
        ::std::vector<::HashedString> const& tags
    );

    MCAPI void addShapedRecipe(
        ::std::string                         recipeId,
        ::ItemInstance const&                 result,
        ::std::string const&                  r0,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapedRecipe>(
            ::std::string,
            int,
            int,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            bool,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion,
        bool                                  assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        ::std::string                         recipeId,
        ::ItemInstance const&                 result,
        ::std::vector<::std::string> const&   rows,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapedRecipe>(
            ::std::string,
            int,
            int,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            bool,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion,
        bool                                  assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        ::std::string                         recipeId,
        ::std::vector<::ItemInstance> const&  result,
        ::std::vector<::std::string> const&   rows,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapedRecipe>(
            ::std::string,
            int,
            int,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            bool,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion,
        bool                                  assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        ::std::string                         recipeId,
        ::ItemInstance const&                 result,
        ::std::string const&                  r0,
        ::std::string const&                  r1,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapedRecipe>(
            ::std::string,
            int,
            int,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            bool,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion,
        bool                                  assumeSymmetry
    );

    MCAPI void addShapedRecipe(
        ::std::string                         recipeId,
        ::ItemInstance const&                 result,
        ::std::string const&                  r0,
        ::std::string const&                  r1,
        ::std::string const&                  r2,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapedRecipe>(
            ::std::string,
            int,
            int,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            bool,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion,
        bool                                  assumeSymmetry
    );

    MCAPI void addShapelessRecipe(
        ::std::string                         recipeId,
        ::ItemInstance const&                 result,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        int                                   priority,
        ::std::function<::std::unique_ptr<::ShapelessRecipe>(
            ::std::string,
            ::std::vector<::RecipeIngredient> const&,
            ::std::vector<::ItemInstance> const&,
            ::HashedString,
            int,
            ::mce::UUID const*,
            ::RecipeUnlockingRequirement const&,
            ::SemVersion const&
        )>                                    constructor,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion
    );

    MCAPI void addShulkerBoxRecipe(
        ::std::string&                        recipeId,
        ::ItemInstance const&                 result,
        ::std::vector<::Recipes::Type> const& types,
        ::std::vector<::HashedString> const&  tags,
        ::RecipeUnlockingRequirement const&   unlockingReq,
        ::SemVersion const&                   formatVersion
    );

    MCAPI void clearRecipes();

    MCAPI ::SemVersion extractRecipeFormatVersion(::Json::Value const& obj);

    MCAPI ::std::pair<::std::string, ::Json::Value> extractRecipeObjInfo(::Json::Value const& obj);

    MCAPI ::ItemInstance getFurnaceRecipeResult(::ItemStackBase const& item, ::HashedString const& tag) const;

    MCAPI ::Recipe const* getRecipeByNetId(::RecipeNetId const& netId) const;

    MCAPI ::Recipe* getRecipeFor(::ItemInstance const& result, ::HashedString const& tag) const;

    MCAPI void init(
        ::ResourcePackManager&   resourcePackManager,
        ::ExternalRecipeStore&   recipeStorage,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );

    MCAPI bool loadRecipe(
        ::std::pair<::std::string, ::Json::Value> const& recipeObjInfo,
        ::MinEngineVersion const&                        minEngineVersion,
        ::SemVersion const&                              formatVersion,
        bool                                             isBaseGamePack
    );

    MCAPI ~Recipes();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Recipes::NormalizedRectangularRecipeResults
    _normalizeRectangularRecipe(::std::vector<::std::string> const& rows);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level* level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
