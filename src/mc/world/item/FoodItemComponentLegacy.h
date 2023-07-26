#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    struct Effect {

    public:
        // prevent constructor by default
        Effect& operator=(Effect const&) = delete;
        Effect(Effect const&)            = delete;
        Effect()                         = delete;

    public:
        /**
         * @symbol ??1Effect\@FoodItemComponentLegacy\@\@QEAA\@XZ
         */
        MCAPI ~Effect(); // NOLINT
    };

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&) = delete;
    FoodItemComponentLegacy(FoodItemComponentLegacy const&)            = delete;
    FoodItemComponentLegacy()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getNutrition\@FoodItemComponentLegacy\@\@UEBAHXZ
     */
    virtual int getNutrition() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getSaturationModifier\@FoodItemComponentLegacy\@\@UEBAMXZ
     */
    virtual float getSaturationModifier() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canAlwaysEat\@FoodItemComponentLegacy\@\@UEBA_NXZ
     */
    virtual bool canAlwaysEat() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?eatItem\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const* eatItem(class ItemStack&, class Actor&, class Level&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?use\@FoodItemComponentLegacy\@\@UEAA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    virtual bool use(class ItemStack&, class Player&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?useTimeDepleted\@FoodItemComponentLegacy\@\@UEAAPEBVItem\@\@AEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    virtual class Item const* useTimeDepleted(class ItemStack&, class Player&, class Level&); // NOLINT
    /**
     * @symbol ??0FoodItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI FoodItemComponentLegacy(class Item&); // NOLINT
    /**
     * @symbol
     * ?buildNetworkTag\@FoodItemComponentLegacy\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @symbol ?init\@FoodItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?initializeFromNetwork\@FoodItemComponentLegacy\@\@SA?AVValue\@Json\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class Json::Value initializeFromNetwork(class CompoundTag const&); // NOLINT

    // private:
    /**
     * @symbol ?_applyEatEffects\@FoodItemComponentLegacy\@\@AEAAXAEBVItemStack\@\@AEAVActor\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _applyEatEffects(class ItemStack const&, class Actor&, class Level&); // NOLINT
    /**
     * @symbol ?_loadEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadEffects(class Json::Value&); // NOLINT
    /**
     * @symbol ?_loadRemoveEffects\@FoodItemComponentLegacy\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _loadRemoveEffects(class Json::Value&); // NOLINT

private:
};
