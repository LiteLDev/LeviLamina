/**
 * @file  MC/FoodItemComponentLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FoodItemComponentLegacy.
 *
 */
class FoodItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENTLEGACY
public:
    class FoodItemComponentLegacy& operator=(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy(class FoodItemComponentLegacy const &) = delete;
    FoodItemComponentLegacy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FoodItemComponentLegacy();
    /**
     * @hash   -13565528
     * @vftbl  1
     * @symbol ?getNutrition@FoodItemComponentLegacy@@UEBAHXZ
     */
    virtual int getNutrition() const;
    /**
     * @hash   1662899032
     * @vftbl  2
     * @symbol ?getSaturationModifier@FoodItemComponentLegacy@@UEBAMXZ
     */
    virtual float getSaturationModifier() const;
    /**
     * @hash   2113221916
     * @vftbl  3
     * @symbol ?canAlwaysEat@FoodItemComponentLegacy@@UEBA_NXZ
     */
    virtual bool canAlwaysEat() const;
    /**
     * @hash   -437054693
     * @vftbl  4
     * @symbol ?eatItem@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVActor@@AEAVLevel@@@Z
     */
    virtual class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    /**
     * @hash   -758873689
     * @vftbl  5
     * @symbol ?use@FoodItemComponentLegacy@@UEAA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    virtual bool use(class ItemStack &, class Player &);
    /**
     * @hash   -1551660981
     * @vftbl  6
     * @symbol ?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z
     */
    virtual class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
    /**
     * @hash   -1715714942
     * @symbol ??0FoodItemComponentLegacy@@QEAA@AEAVItem@@@Z
     */
    MCAPI FoodItemComponentLegacy(class Item &);
    /**
     * @hash   849066552
     * @symbol ?buildNetworkTag@FoodItemComponentLegacy@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -405077326
     * @symbol ?init@FoodItemComponentLegacy@@QEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -724681357
     * @symbol ?initializeFromNetwork@FoodItemComponentLegacy@@SA?AVValue@Json@@AEBVCompoundTag@@@Z
     */
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const &);

//private:
    /**
     * @hash   1060311829
     * @symbol ?_applyEatEffects@FoodItemComponentLegacy@@AEAAXAEBVItemStack@@AEAVActor@@AEAVLevel@@@Z
     */
    MCAPI void _applyEatEffects(class ItemStack const &, class Actor &, class Level &);
    /**
     * @hash   -1150741153
     * @symbol ?_loadEffects@FoodItemComponentLegacy@@AEAAXAEAVValue@Json@@@Z
     */
    MCAPI void _loadEffects(class Json::Value &);
    /**
     * @hash   -1381436029
     * @symbol ?_loadRemoveEffects@FoodItemComponentLegacy@@AEAAXAEAVValue@Json@@@Z
     */
    MCAPI void _loadRemoveEffects(class Json::Value &);

private:

};