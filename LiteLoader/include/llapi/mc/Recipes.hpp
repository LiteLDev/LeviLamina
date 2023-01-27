/**
 * @file  Recipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "RecipeIngredient.hpp"
#include "Item.hpp"
#include "Block.hpp"
#include  "HashedString.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class Recipes.
 *
 */
class Recipes {

#define AFTER_EXTRA
// Add Member There
public:
public:
struct FurnaceRecipeKey {
public:
    int mID;
    HashedString mTag;

public:
    inline FurnaceRecipeKey(int aux, HashedString tag) : mID(aux), mTag(tag) {}
};

class Type {
public:
    const Item* mItem;
    const Block* mBlock;
    RecipeIngredient mIngredient;
    char mLabel;

public:
    class Type& operator=(class Type const&) = default;

    inline Type(string const& name, char label, int aux, unsigned short count)
    : mIngredient(name, aux, count), mLabel(label) {
        mItem = mIngredient.getItem();
        mBlock = mIngredient.getBlock();
    }
};

struct NormalizedRectangularRecipeResults {
public:
    int mWidth;
    int mHeight;
    std::string mNormalizedResult;
    std::string mWarning;

    NormalizedRectangularRecipeResults() = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&) = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&&) = delete;
};



#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPES
public:
    class Recipes& operator=(class Recipes const &) = delete;
    Recipes(class Recipes const &) = delete;
    Recipes() = delete;
#endif

public:
    /**
     * @hash   -1231434243
     * @symbol  ??0Recipes\@\@QEAA\@PEAVLevel\@\@\@Z
     */
    MCAPI Recipes(class Level *);
    /**
     * @hash   507390982
     * @symbol  ?addFurnaceRecipeAuxData\@Recipes\@\@QEAAXAEBVItemInstance\@\@0AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addFurnaceRecipeAuxData(class ItemInstance const &, class ItemInstance const &, std::vector<class HashedString> const &);
    /**
     * @hash   -1720550078
     * @symbol  ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@3\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, std::vector<class ItemInstance> const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   -654724441
     * @symbol  ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@22AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   -1532494563
     * @symbol  ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@2AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   1903347751
     * @symbol  ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV23\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   1644017828
     * @symbol  ?addShapedRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapedRecipe\@\@U?$default_delete\@VShapedRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@HHAEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   -1903219264
     * @symbol  ?addShapelessRecipe\@Recipes\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@HV?$function\@$$A6A?AV?$unique_ptr\@VShapelessRecipe\@\@U?$default_delete\@VShapelessRecipe\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@2\@VHashedString\@\@\@Z\@3\@\@Z
     */
    MCAPI void addShapelessRecipe(std::string, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapelessRecipe> (std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   203711705
     * @symbol  ?addShulkerBoxRecipe\@Recipes\@\@QEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@AEBV?$vector\@VType\@Recipes\@\@V?$allocator\@VType\@Recipes\@\@\@std\@\@\@3\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void addShulkerBoxRecipe(std::string &, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &);
    /**
     * @hash   -2043086605
     * @symbol  ?clearRecipes\@Recipes\@\@QEAAXXZ
     */
    MCAPI void clearRecipes();
    /**
     * @hash   131376424
     * @symbol  ?extractRecipeObjInfo\@Recipes\@\@QEAA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI struct std::pair<std::string, class Json::Value> extractRecipeObjInfo(class Json::Value const &);
    /**
     * @hash   -710885468
     * @symbol  ?getFurnaceRecipeResult\@Recipes\@\@QEBA?AVItemInstance\@\@AEBVItemStackBase\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemInstance getFurnaceRecipeResult(class ItemStackBase const &, class HashedString const &) const;
    /**
     * @hash   -1769301777
     * @symbol  ?getRecipeByNetId\@Recipes\@\@QEBAPEBVRecipe\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class Recipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @hash   -2007153617
     * @symbol  ?getRecipeFor\@Recipes\@\@QEBAPEAVRecipe\@\@AEBVItemInstance\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Recipe * getRecipeFor(class ItemInstance const &, class HashedString const &) const;
    /**
     * @hash   -850595240
     * @symbol  ?getRecipesAllTags\@Recipes\@\@QEBAAEBV?$map\@VHashedString\@\@V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@\@std\@\@\@2\@\@std\@\@U?$less\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VRecipe\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::map<class HashedString, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>>>> const & getRecipesAllTags() const;
    /**
     * @hash   1927946423
     * @symbol  ?init\@Recipes\@\@QEAAXAEAVResourcePackManager\@\@AEAVExternalRecipeStore\@\@\@Z
     */
    MCAPI void init(class ResourcePackManager &, class ExternalRecipeStore &);
    /**
     * @hash   1463675215
     * @symbol  ?loadRecipe\@Recipes\@\@QEAA_NAEBU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VValue\@Json\@\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool loadRecipe(struct std::pair<std::string, class Json::Value> const &, class SemVersion const &);
    /**
     * @hash   -1750503167
     * @symbol  ??1Recipes\@\@QEAA\@XZ
     */
    MCAPI ~Recipes();

//protected:
    /**
     * @hash   -739113449
     * @symbol  ?_loadDataDrivenRecipes\@Recipes\@\@IEAAXAEBV?$vector\@VPackInstance\@\@V?$allocator\@VPackInstance\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _loadDataDrivenRecipes(std::vector<class PackInstance> const &);
    /**
     * @hash   -1366408763
     * @symbol  ?_normalizeRectangularRecipe\@Recipes\@\@KA?AUNormalizedRectangularRecipeResults\@1\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static struct Recipes::NormalizedRectangularRecipeResults _normalizeRectangularRecipe(std::vector<std::string> const &);

//private:
    /**
     * @hash   1570851323
     * @symbol  ?_addItemRecipe\@Recipes\@\@AEAAXV?$unique_ptr\@VRecipe\@\@U?$default_delete\@VRecipe\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addItemRecipe(std::unique_ptr<class Recipe>);
    /**
     * @hash   -1956094558
     * @symbol  ?_addMapRecipes\@Recipes\@\@AEAAXXZ
     */
    MCAPI void _addMapRecipes();
    /**
     * @hash   -1994682855
     * @symbol  ?_isRecipeValidToAdd\@Recipes\@\@AEAA_NAEBVRecipe\@\@\@Z
     */
    MCAPI bool _isRecipeValidToAdd(class Recipe const &);
    /**
     * @hash   -1696001826
     * @symbol  ?_loadBrewingMix\@Recipes\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool _loadBrewingMix(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   -577479931
     * @symbol  ?_loadHardcodedRecipes\@Recipes\@\@AEAAXXZ
     */
    MCAPI void _loadHardcodedRecipes();
    /**
     * @hash   1907307233
     * @symbol  ?_loadIngredientFromJson\@Recipes\@\@AEBA?BVRecipeIngredient\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@_N2\@Z
     */
    MCAPI class RecipeIngredient const _loadIngredientFromJson(class Json::Value const &, class SemVersion const &, bool, bool) const;
    /**
     * @symbol  ?_loadInputIngredientFromJson\@Recipes\@\@AEBA?BVRecipeIngredient\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI class RecipeIngredient const _loadInputIngredientFromJson(class Json::Value const &, class SemVersion const &) const;
    /**
     * @symbol  ?_loadSmithingTransform\@Recipes\@\@AEAA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@6\@\@Z
     */
    MCAPI bool _loadSmithingTransform(class Json::Value const &, class SemVersion const &, std::string const &, std::vector<class HashedString> const &);

protected:

private:

};