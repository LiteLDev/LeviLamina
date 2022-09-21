/**
 * @file  MC/Recipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "RecipeIngredient.hpp"
#include "Item.hpp"
#include "Block.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class Recipes.
 *
 */
class Recipes {

#define AFTER_EXTRA
// Add Member There
public:
class Type {
    Item const* item;
    Block const* block;
    RecipeIngredient ingredient;
    char label;
public:
    inline Type(string const& name, char label, int aux, unsigned short count) :ingredient(name, aux, count), label(label) {
        item = ingredient.descriptor.getItem();
        block = ingredient.descriptor.getBlock();
    }
};
struct NormalizedRectangularRecipeResults {
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
     * @hash   -2088861507
     * @symbol ??0Recipes@@QEAA@PEAVLevel@@@Z
     */
    MCAPI Recipes(class Level *);
    /**
     * @hash   1718066274
     * @symbol ?addShapedRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapedRecipe@@U?$default_delete@VShapedRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapedRecipe(std::string, std::vector<class ItemInstance> const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   -1510829369
     * @symbol ?addShapedRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV23@22AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapedRecipe@@U?$default_delete@VShapedRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   1906352429
     * @symbol ?addShapedRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV23@2AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapedRecipe@@U?$default_delete@VShapedRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   1047212071
     * @symbol ?addShapedRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV23@AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapedRecipe@@U?$default_delete@VShapedRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   787866772
     * @symbol ?addShapedRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapedRecipe@@U?$default_delete@VShapedRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   1535627728
     * @symbol ?addShapelessRecipe@Recipes@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@HV?$function@$$A6A?AV?$unique_ptr@VShapelessRecipe@@U?$default_delete@VShapelessRecipe@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@2@VHashedString@@@Z@3@@Z
     */
    MCAPI void addShapelessRecipe(std::string, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapelessRecipe> (std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    /**
     * @hash   -652070327
     * @symbol ?addShulkerBoxRecipe@Recipes@@QEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@AEBV?$vector@VType@Recipes@@V?$allocator@VType@Recipes@@@std@@@3@AEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@@Z
     */
    MCAPI void addShulkerBoxRecipe(std::string &, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &);
    /**
     * @hash   1396160163
     * @symbol ?clearRecipes@Recipes@@QEAAXXZ
     */
    MCAPI void clearRecipes();
    /**
     * @hash   -724344104
     * @symbol ?extractRecipeObjInfo@Recipes@@QEAA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@@std@@AEBVValue@Json@@@Z
     */
    MCAPI struct std::pair<std::string, class Json::Value> extractRecipeObjInfo(class Json::Value const &);
    /**
     * @hash   -1566605996
     * @symbol ?getFurnaceRecipeResult@Recipes@@QEBA?AVItemInstance@@AEBVItemStackBase@@AEBVHashedString@@@Z
     */
    MCAPI class ItemInstance getFurnaceRecipeResult(class ItemStackBase const &, class HashedString const &) const;
    /**
     * @hash   1669944991
     * @symbol ?getRecipeByNetId@Recipes@@QEBAPEBVRecipe@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI class Recipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @hash   1432093151
     * @symbol ?getRecipeFor@Recipes@@QEBAPEAVRecipe@@AEBVItemInstance@@AEBVHashedString@@@Z
     */
    MCAPI class Recipe * getRecipeFor(class ItemInstance const &, class HashedString const &) const;
    /**
     * @hash   2105840536
     * @symbol ?getRecipesAllTags@Recipes@@QEBAAEBV?$map@VHashedString@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VRecipe@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VRecipe@@@2@@std@@@2@@std@@U?$less@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VRecipe@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VRecipe@@@2@@std@@@2@@std@@@std@@@3@@std@@XZ
     */
    MCAPI class std::map<class HashedString, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>>>> const & getRecipesAllTags() const;
    /**
     * @hash   1072210519
     * @symbol ?init@Recipes@@QEAAXAEAVResourcePackManager@@AEAVExternalRecipeStore@@@Z
     */
    MCAPI void init(class ResourcePackManager &, class ExternalRecipeStore &);
    /**
     * @hash   607954687
     * @symbol ?loadRecipe@Recipes@@QEAA_NAEBU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@@std@@AEBVSemVersion@@@Z
     */
    MCAPI bool loadRecipe(struct std::pair<std::string, class Json::Value> const &, class SemVersion const &);
    /**
     * @hash   1686329569
     * @symbol ??1Recipes@@QEAA@XZ
     */
    MCAPI ~Recipes();
    /**
     * @hash   1680276298
     * @symbol ?Shape@Recipes@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@00@Z
     */
    MCAPI static std::vector<std::string> Shape(std::string const &, std::string const &, std::string const &);

//protected:
    /**
     * @hash   -1601876185
     * @symbol ?_loadDataDrivenRecipes@Recipes@@IEAAXAEBV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@std@@@Z
     */
    MCAPI void _loadDataDrivenRecipes(std::vector<class PackInstance> const &);
    /**
     * @hash   2072961013
     * @symbol ?_normalizeRectangularRecipe@Recipes@@KA?AUNormalizedRectangularRecipeResults@1@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI static struct Recipes::NormalizedRectangularRecipeResults _normalizeRectangularRecipe(std::vector<std::string> const &);

//private:
    /**
     * @hash   711102283
     * @symbol ?_addItemRecipe@Recipes@@AEAAXV?$unique_ptr@VRecipe@@U?$default_delete@VRecipe@@@std@@@std@@@Z
     */
    MCAPI void _addItemRecipe(std::unique_ptr<class Recipe>);
    /**
     * @hash   1479092946
     * @symbol ?_addMapRecipes@Recipes@@AEAAXXZ
     */
    MCAPI void _addMapRecipes();
    /**
     * @hash   1440504649
     * @symbol ?_isRecipeValidToAdd@Recipes@@AEAA_NAEBVRecipe@@@Z
     */
    MCAPI bool _isRecipeValidToAdd(class Recipe const &);
    /**
     * @hash   1736479502
     * @symbol ?_loadBrewingMix@Recipes@@AEAA_NAEBVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool _loadBrewingMix(class Json::Value const &, class SemVersion const &);
    /**
     * @hash   -1440304171
     * @symbol ?_loadHardcodedRecipes@Recipes@@AEAAXXZ
     */
    MCAPI void _loadHardcodedRecipes();
    /**
     * @symbol ?_loadIngredientFromJson@Recipes@@AEBA?BVRecipeIngredient@@AEBVValue@Json@@AEBVSemVersion@@_N2@Z
     */
    MCAPI class RecipeIngredient const _loadIngredientFromJson(class Json::Value const &, class SemVersion const &, bool, bool) const;

protected:

private:

};