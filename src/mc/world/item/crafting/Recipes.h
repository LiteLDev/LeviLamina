#pragma once

#include <utility>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/crafting/RecipeIngredient.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
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
        int          mID;
        HashedString mTag;

        inline FurnaceRecipeKey(int aux, HashedString tag) : mID(aux), mTag(std::move(tag)) {}

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1FurnaceRecipeKey\@Recipes\@\@QEAA\@XZ
         */
        MCAPI ~FurnaceRecipeKey();
        // NOLINTEND
    };

    struct NormalizedRectangularRecipeResults {

    public:
        int         mWidth;
        int         mHeight;
        std::string mNormalizedResult;
        std::string mWarning;

        // prevent constructor by default
        NormalizedRectangularRecipeResults& operator=(NormalizedRectangularRecipeResults const&) = delete;
        NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&)            = delete;
        NormalizedRectangularRecipeResults()                                                     = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1NormalizedRectangularRecipeResults\@Recipes\@\@QEAA\@XZ
         */
        MCAPI ~NormalizedRectangularRecipeResults();
        // NOLINTEND
    };

    class Type {

    public:
        class Item const*  mItem;
        class Block const* mBlock;
        RecipeIngredient   mIngredient;
        char               mC;

        inline Type(std::string const& name, char label, int aux, unsigned short count)
        : mIngredient(name, aux, count), mC(label) {
            mItem  = mIngredient.getItem();
            mBlock = mIngredient.getBlock();
        }

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Type\@Recipes\@\@QEAA\@$$QEAV01\@\@Z
         */
        MCAPI Type(class Recipes::Type&&);
        /**
         * @symbol ??1Type\@Recipes\@\@QEAA\@XZ
         */
        MCAPI ~Type();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    Recipes& operator=(Recipes const&) = delete;
    Recipes(Recipes const&)            = delete;
    Recipes()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Recipes\@\@QEAA\@PEAVLevel\@\@\@Z
     */
    MCAPI Recipes(class Level*);
    /**
     * @symbol
     * ?addFurnaceRecipeAuxData\@Recipes\@\@QEAAXAEBVItemInstance\@\@0AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    addFurnaceRecipeAuxData(class ItemInstance const&, class ItemInstance const&, std::vector<class HashedString> const&);
    /**
     * @symbol
     * ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@22AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@2AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const&, std::string const&, std::string const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    addShapedRecipe(std::string, class ItemInstance const&, std::string const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    addShapedRecipe(std::string, class ItemInstance const&, std::vector<std::string> const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@3\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    addShapedRecipe(std::string, std::vector<class ItemInstance> const&, std::vector<std::string> const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapedRecipe>(std::string, int, int, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShapelessRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapelessRecipe\@\@U?$default_delete\@VShapelessRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@HPEBVUUID\@mce\@\@V?$optional\@VRecipeUnlockingRequirement\@\@\@2\@AEBVSemVersion\@\@\@Z\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    addShapelessRecipe(std::string, class ItemInstance const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, int, std::function<std::unique_ptr<class ShapelessRecipe>(std::string, std::vector<class RecipeIngredient> const&, std::vector<class ItemInstance> const&, class HashedString, int, class mce::UUID const*, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&)>, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol
     * ?addShulkerBoxRecipe\@Recipes\@\@QEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@V?$optional\@VRecipeUnlockingRequirement\@\@\@3\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    addShulkerBoxRecipe(std::string&, class ItemInstance const&, std::vector<class Recipes::Type> const&, std::vector<class HashedString> const&, std::optional<class RecipeUnlockingRequirement>, class SemVersion const&);
    /**
     * @symbol ?clearRecipes\@Recipes\@\@QEAAXXZ
     */
    MCAPI void clearRecipes();
    /**
     * @symbol
     * ?extractRecipeObjInfo\@Recipes\@\@QEAA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI std::pair<std::string, class Json::Value> extractRecipeObjInfo(class Json::Value const&);
    /**
     * @symbol ?forEachUnlockableRecipe\@Recipes\@\@QEBAXAEBV?$function\@$$A6AXAEBVRecipe\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachUnlockableRecipe(std::function<void(class Recipe const&)> const&) const;
    /**
     * @symbol ?getFurnaceRecipeResult\@Recipes\@\@QEBA?AVItemInstance\@\@AEBVItemStackBase\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemInstance getFurnaceRecipeResult(class ItemStackBase const&, class HashedString const&) const;
    /**
     * @symbol ?getNumberOfUnlockableRecipes\@Recipes\@\@QEBAIXZ
     */
    MCAPI unsigned int getNumberOfUnlockableRecipes() const;
    /**
     * @symbol ?getRecipeByNetId\@Recipes\@\@QEBAPEBVRecipe\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class Recipe const*
    getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&) const;
    /**
     * @symbol ?getRecipeFor\@Recipes\@\@QEBAPEAVRecipe\@\@AEBVItemInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Recipe* getRecipeFor(class ItemInstance const&, class HashedString const&) const;
    /**
     * @symbol
     * ?getRecipesAllTags\@Recipes\@\@QEBAAEBV?$map\@VHashedString\@\@V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@\@std\@\@\@2\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::map<class HashedString, std::map<std::string, std::shared_ptr<class Recipe>>> const&
          getRecipesAllTags() const;
    /**
     * @symbol
     * ?init\@Recipes\@\@QEAAXAEAVResourcePackManager\@\@AEAVExternalRecipeStore\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void
    init(class ResourcePackManager&, class ExternalRecipeStore&, class BaseGameVersion const&, class Experiments const&);
    /**
     * @symbol
     * ?loadRecipe\@Recipes\@\@QEAA_NAEBU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@AEBVSemVersion\@\@1_N\@Z
     */
    MCAPI bool loadRecipe(
        std::pair<std::string, class Json::Value> const&,
        class SemVersion const&,
        class SemVersion const&,
        bool
    );
    /**
     * @symbol ??1Recipes\@\@QEAA\@XZ
     */
    MCAPI ~Recipes();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_createUnlockingRequirementFromContext\@Recipes\@\@IEBA?AV?$optional\@VRecipeUnlockingRequirement\@\@\@std\@\@W4UnlockingContext\@RecipeUnlockingRequirement\@\@\@Z
     */
    MCAPI std::optional<class RecipeUnlockingRequirement>
          _createUnlockingRequirementFromContext(enum class RecipeUnlockingRequirement::UnlockingContext) const;
    /**
     * @symbol
     * ?_loadDataDrivenRecipes\@Recipes\@\@IEAAXAEBV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _loadDataDrivenRecipes(std::vector<class PackInstance> const&);
    /**
     * @symbol
     * ?_loadUnlockingRequirementFromJson\@Recipes\@\@IEBA?AV?$optional\@VRecipeUnlockingRequirement\@\@\@std\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::optional<class RecipeUnlockingRequirement>
    _loadUnlockingRequirementFromJson(class Json::Value const&, class SemVersion const&, std::string const&) const;
    /**
     * @symbol ?extractRecipeFormatVersion\@Recipes\@\@IEAA?AVSemVersion\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI class SemVersion extractRecipeFormatVersion(class Json::Value const&);
    /**
     * @symbol
     * ?_normalizeRectangularRecipe\@Recipes\@\@KA?AUNormalizedRectangularRecipeResults\@1\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static struct Recipes::NormalizedRectangularRecipeResults
    _normalizeRectangularRecipe(std::vector<std::string> const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addItemRecipe\@Recipes\@\@AEAAXV?$unique_ptr\@VRecipe\@\@U?$default_delete\@VRecipe\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addItemRecipe(std::unique_ptr<class Recipe>);
    /**
     * @symbol ?_addMapRecipes\@Recipes\@\@AEAAXXZ
     */
    MCAPI void _addMapRecipes();
    /**
     * @symbol ?_isRecipeValidToAdd\@Recipes\@\@AEAA_NAEBVRecipe\@\@\@Z
     */
    MCAPI bool _isRecipeValidToAdd(class Recipe const&);
    /**
     * @symbol ?_loadBrewingMix\@Recipes\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _loadBrewingMix(class Json::Value const&, class SemVersion const&);
    /**
     * @symbol ?_loadHardcodedRecipes\@Recipes\@\@AEAAXAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void _loadHardcodedRecipes(class BaseGameVersion const&, class Experiments const&);
    /**
     * @symbol
     * ?_loadIngredientFromJson\@Recipes\@\@AEBA?BVRecipeIngredient\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@_N2\@Z
     */
    MCAPI class RecipeIngredient const
    _loadIngredientFromJson(class Json::Value const&, class SemVersion const&, bool, bool) const;
    /**
     * @symbol
     * ?_loadInputIngredientFromJson\@Recipes\@\@AEBA?BVRecipeIngredient\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI class RecipeIngredient const
    _loadInputIngredientFromJson(class Json::Value const&, class SemVersion const&) const;
    /**
     * @symbol
     * ?_loadSmithingTransform\@Recipes\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@6\@\@Z
     */
    MCAPI bool
    _loadSmithingTransform(class Json::Value const&, class SemVersion const&, std::string const&, std::vector<class HashedString> const&);
    /**
     * @symbol
     * ?_loadSmithingTrim\@Recipes\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@6\@\@Z
     */
    MCAPI bool
    _loadSmithingTrim(class Json::Value const&, class SemVersion const&, std::string const&, std::vector<class HashedString> const&);
    // NOLINTEND
};
