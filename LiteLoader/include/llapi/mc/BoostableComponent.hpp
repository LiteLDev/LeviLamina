/**
 * @file  BoostableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoostableComponent.
 *
 */
class BoostableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLECOMPONENT
public:
    class BoostableComponent& operator=(class BoostableComponent const &) = delete;
    BoostableComponent(class BoostableComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1676114820
     * @symbol ??0BoostableComponent@@QEAA@XZ
     */
    MCAPI BoostableComponent();
    /**
     * @hash   1800957288
     * @symbol ?getBoostTime@BoostableComponent@@QEBAHXZ
     */
    MCAPI int getBoostTime() const;
    /**
     * @hash   -1638922394
     * @symbol ?getBoostTimeTotal@BoostableComponent@@QEBAHXZ
     */
    MCAPI int getBoostTimeTotal() const;
    /**
     * @hash   -2125841010
     * @symbol ?getIsBoosting@BoostableComponent@@QEBA_NXZ
     */
    MCAPI bool getIsBoosting() const;
    /**
     * @hash   19638158
     * @symbol ?itemUseText@BoostableComponent@@QEAA_NAEBVPlayer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool itemUseText(class Player const &, std::string &);
    /**
     * @hash   438152703
     * @symbol ?onItemInteract@BoostableComponent@@QEAA_NAEAVActor@@AEAVItemStack@@AEAVPlayer@@@Z
     */
    MCAPI bool onItemInteract(class Actor &, class ItemStack &, class Player &);
    /**
     * @hash   -284851220
     * @symbol ?removePassenger@BoostableComponent@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void removePassenger(class Player &);
    /**
     * @hash   -2101305210
     * @symbol ?setBoostTime@BoostableComponent@@QEAAXH@Z
     */
    MCAPI void setBoostTime(int);
    /**
     * @hash   -1378693450
     * @symbol ?setIsBoosting@BoostableComponent@@QEAAX_N@Z
     */
    MCAPI void setIsBoosting(bool);
    /**
     * @hash   -2008168071
     * @symbol ?getSpeedModifierBoosting@BoostableComponent@@SA?AV?$shared_ptr@VAttributeModifier@@@std@@XZ
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> getSpeedModifierBoosting();

//private:

private:
    /**
     * @hash   1334484010
     * @symbol ?SPEED_MODIFIER_BOOSTING@BoostableComponent@@0V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_BOOSTING;
    /**
     * @hash   -627898219
     * @symbol ?SPEED_MODIFIER_BOOSTING_UUID@BoostableComponent@@0VUUID@mce@@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

};