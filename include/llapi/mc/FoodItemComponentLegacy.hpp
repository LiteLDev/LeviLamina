/**
 * @file  FoodItemComponentLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~FoodItemComponentLegacy();
    /**
     * @vftbl  1
     * @symbol  ?getNutrition\@FoodItemComponentLegacy\@\@UEBAHXZ
     */
    virtual int getNutrition() const;
    /**
     * @vftbl  2
     * @symbol  ?getSaturationModifier\@FoodItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float getSaturationModifier() const;
    /**
     * @vftbl  3
     * @symbol  ?canAlwaysEat\@FoodItemComponentLegacy\@\@UEBA_NXZ
     */
    virtual bool canAlwaysEat() const;
    /**
     * @vftbl  4
     * @symbol  ?eatItem\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    /**
     * @vftbl  5
     * @symbol  ?use\@FoodItemComponentLegacy\@\@UEAA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    virtual bool use(class ItemStack &, class Player &);
    /**
     * @vftbl  6
     * @symbol  ?useTimeDepleted\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
    /**
     * @symbol  ??0FoodItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI FoodItemComponentLegacy(class Item &);
    /**
     * @symbol  ?buildNetworkTag\@FoodItemComponentLegacy\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @symbol  ?init\@FoodItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    /**
     * @symbol  ?initializeFromNetwork\@FoodItemComponentLegacy\@\@SA?AVValue\@Json\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const &);

//private:
    /**
     * @symbol  ?_applyEatEffects\@FoodItemComponentLegacy\@\@AEAAXAEBVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _applyEatEffects(class ItemStack const &, class Actor &, class Level &);
    /**
     * @symbol  ?_loadEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadEffects(class Json::Value &);
    /**
     * @symbol  ?_loadRemoveEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadRemoveEffects(class Json::Value &);

private:

};