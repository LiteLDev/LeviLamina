#include "mc/world/item/crafting/Recipes.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/StringUtils.h"
#include "magic_enum.hpp"
#include "mc/deps/json/Value.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemInstance.h"
#include "nlohmann/json.hpp"

// #define TestRecipes

#ifdef TestRecipes

LL_AUTO_TYPE_INSTANCE_HOOK(
    TestRecipesHook,
    HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    using namespace ll::string_utils;

    nlohmann::json json;

    for (auto& [type, rmap] : ll::service::getLevel()->getRecipes().getRecipesAllTags()) {
        auto& mapjson = json[type.getString()];
        for (auto& [k, v] : rmap) {
            auto& rjson           = mapjson[k];
            auto& recipe          = *v;
            rjson["CraftingSize"] = recipe.getCraftingSize();
            auto& resitem         = rjson["ResultItem"];
            for (auto& item : recipe.getResultItem()) {
                resitem[item.getItem()->getFullItemName()] =
                    (nlohmann::json::parse(item.save()->toSnbt(SnbtFormat::Jsonify), nullptr, true, true));
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
                ri.forEachItemUntil([&](class Item const& item, short data) -> bool {
                    // nlohmann::json ukj;
                    // ukj["Item"] = item.getFullItemName();
                    // ukj["Data"] = data;
                    std::string iname = item.getFullItemName();
                    if (data != 32767) {
                        iname += ":" + std::to_string(data);
                    }
                    rijson["BaseMap"].push_back(iname);
                    return false;
                });
                if (rijson["BaseMap"].size() <= 1) {
                    rijson["Base"] = rijson["BaseMap"][0];
                    rijson.erase("BaseMap");
                } else {
                    rijson["Base"] = nlohmann::json::parse(
                        ri.save().value_or(CompoundTag{}).toSnbt(SnbtFormat::Jsonify),
                        nullptr,
                        true,
                        true
                    );
                    std::string key;
                    if (rijson["Base"].contains("ItemTag")) {
                        key = rijson["Base"]["ItemTag"];
                    } else {
                        key = rijson["Base"]["Name"];
                    }
                    rijson["Base"] = key;
                }
                // if (rijson["BaseMap"].size() > 1) { std::cout << rijson["Base"] << std::endl; }

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
            // for (auto& ri : recipe.getUnlockingRequirement().mValidIngredients) {
            //     nlohmann::json rijson;
            //     rijson["StackSize"] = ri.getStackSize();
            //     rijson["Base"]      = nlohmann::json::parse(
            //         ri.save().value_or(CompoundTag{}).toSnbt(SnbtFormat::Jsonify),
            //         nullptr,
            //         true,
            //         true
            //     );
            //     rqjson["ValidIngredients"].push_back(rijson);
            //     i++;
            // }
        }
    }
    {
        std::ofstream file("recipes.json");
        file << json.dump(4) << std::flush;
        file.close();
    }

    nlohmann::json multitable;

    for (auto& recipe : json["crafting_table"].items()) {
        for (auto& i : recipe.value()["RecipeIngredient"]) {
            if (i["StackSize"] < 1) {
                continue;
            }
            std::string key;
            if (i.contains("BaseMap")) {
                for (auto& name : i["BaseMap"]) {
                    auto& table = multitable[name];
                    for (auto item : recipe.value()["ResultItem"]) {
                        item.erase("Count");
                        if (!table.contains(item)) {
                            table.push_back(item);
                        }
                    }
                }
            }
            key         = i["Base"];
            auto& table = multitable[key];
            for (auto item : recipe.value()["ResultItem"]) {
                item.erase("Count");
                if (!table.contains(item)) {
                    table.push_back(item);
                }
            }
        }
    }
    {
        std::ofstream file("multitable.json");
        file << multitable.dump(4) << std::flush;
        file.close();
    }
}

#endif // TestRecipes
