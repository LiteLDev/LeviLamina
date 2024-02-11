#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    struct Effect {
    public:
        // prevent constructor by default
        Effect& operator=(Effect const&);
        Effect(Effect const&);
        Effect();

    public:
        // NOLINTBEGIN
        // symbol: ??1Effect@FoodItemComponentLegacy@@QEAA@XZ
        MCAPI ~Effect();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FoodItemComponentLegacy@@UEAA@XZ
    virtual ~FoodItemComponentLegacy() = default;

    // vIndex: 1, symbol: ?getNutrition@FoodItemComponentLegacy@@UEBAHXZ
    virtual int getNutrition() const;

    // vIndex: 2, symbol: ?getSaturationModifier@FoodItemComponentLegacy@@UEBAMXZ
    virtual float getSaturationModifier() const;

    // vIndex: 3, symbol: ?canAlwaysEat@FoodItemComponentLegacy@@UEBA_NXZ
    virtual bool canAlwaysEat() const;

    // vIndex: 4, symbol: ?eatItem@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVActor@@AEAVLevel@@@Z
    virtual class Item const* eatItem(class ItemStack& instance, class Actor& actor, class Level& level);

    // vIndex: 5, symbol: ?use@FoodItemComponentLegacy@@UEAA_NAEAVItemStack@@AEAVPlayer@@@Z
    virtual bool use(class ItemStack& instance, class Player& player);

    // vIndex: 6, symbol:
    // ?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
    virtual class Item const* useTimeDepleted(class ItemStack& instance, class Player& player, class Level& level);

    // symbol: ??0FoodItemComponentLegacy@@QEAA@AEAVItem@@@Z
    MCAPI explicit FoodItemComponentLegacy(class Item& owner);

    // symbol:
    // ?buildNetworkTag@FoodItemComponentLegacy@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // symbol: ?init@FoodItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool init(class Json::Value& data, class SemVersion const& engineVersion);

    // symbol: ?initializeFromNetwork@FoodItemComponentLegacy@@SA?AVValue@Json@@AEBVCompoundTag@@@Z
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyEatEffects@FoodItemComponentLegacy@@AEAAXAEBVItemStack@@AEAVActor@@AEAVLevel@@@Z
    MCAPI void _applyEatEffects(class ItemStack const& instance, class Actor& actor, class Level& level);

    // symbol: ?_loadEffects@FoodItemComponentLegacy@@AEAAXAEAVValue@Json@@@Z
    MCAPI void _loadEffects(class Json::Value& effectsData);

    // symbol: ?_loadRemoveEffects@FoodItemComponentLegacy@@AEAAXAEAVValue@Json@@@Z
    MCAPI void _loadRemoveEffects(class Json::Value& removeEffectsData);

    // NOLINTEND
};
