#include "mc/world/item/crafting/Recipes.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GlobalService.h"
#include "ll/api/utils/StringUtils.h"
#include "magic_enum.hpp"
#include "mc/deps/json/Value.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemInstance.h"
#include "nlohmann/json.hpp"

#ifdef TestRecipes

LL_AUTO_TYPED_INSTANCE_HOOK(
    RecipesTest,
    ll::memory::HookPriority::Normal,
    ServerLevel,
    // &ServerInstance::startServerThread,
    "??1ServerLevel@@UEAA@XZ",
    void
) {

    using namespace ll::StringUtils;

    nlohmann::json json;

    for (auto& [type, rmap] : ll::Global<Level>->getRecipes().getRecipesAllTags()) {
        auto& mapjson = json[type.getString()];
        for (auto& [k, v] : rmap) {
            auto& rjson           = mapjson[k];
            auto& recipe          = *v;
            rjson["CraftingSize"] = recipe.getCraftingSize();
            auto& resitem         = rjson["ResultItem"];
            for (auto& item : recipe.getResultItem()) {
                resitem.push_back(nlohmann::json::parse(item.save()->toSnbt(SnbtFormat::Jsonify), nullptr, true, true));
            }
            rjson["size"]                = recipe.size();
            rjson["UUID"]                = recipe.getId().asString();
            rjson["isMultiRecipe"]       = recipe.isMultiRecipe();
            rjson["hasDataDrivenResult"] = recipe.hasDataDrivenResult();
            rjson["IngredientsHash"]     = recipe.getIngredientsHash();
            rjson["Height"]              = recipe.getHeight();
            rjson["Width"]               = recipe.getWidth();
            auto&  ingredient            = rjson["RecipeIngredient"];
            size_t i                     = 0;
            for (auto& ri : recipe.getIngredients()) {
                nlohmann::json rijson;
                rijson["StackSize"] = ri.getStackSize();
                rijson["base"]      = nlohmann::json::parse(
                    ri.save().value_or(CompoundTag{}).toSnbt(SnbtFormat::Jsonify),
                    nullptr,
                    true,
                    true
                );
                ingredient.push_back(rijson);
                i++;
            }
            rjson["RecipeNetId"]       = recipe.getNetId().mRawId;
            rjson["Priority"]          = recipe.getPriority();
            rjson["RecipeId"]          = recipe.getRecipeId();
            rjson["Tag"]               = recipe.getTag().getString();
            auto& rqjson               = rjson["UnlockingRequirement"];
            rqjson["UnlockingRule"]    = magic_enum::enum_name(recipe.getUnlockingRequirement().mRule);
            rqjson["UnlockingContext"] = magic_enum::enum_name(recipe.getUnlockingRequirement().mContext);
            i                          = 0;
            for (auto& ri : recipe.getUnlockingRequirement().mValidIngredients) {
                nlohmann::json rijson;
                rijson["StackSize"] = ri.getStackSize();
                rijson["base"]      = nlohmann::json::parse(
                    ri.save().value_or(CompoundTag{}).toSnbt(SnbtFormat::Jsonify),
                    nullptr,
                    true,
                    true
                );
                rqjson["ValidIngredients"].push_back(rijson);
                i++;
            }
        }
    }
    std::ofstream file("recipes.json");
    file << json.dump(4) << std::flush;
    file.close();

    origin();
}

#endif // TestRecipes
