/**
 * @file  BoostableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1683345884
     * @symbol  ??0BoostableComponent\@\@QEAA\@XZ
     */
    MCAPI BoostableComponent();
    /**
     * @hash   2051970488
     * @symbol  ?getBoostTime\@BoostableComponent\@\@QEBAHXZ
     */
    MCAPI int getBoostTime() const;
    /**
     * @hash   -1511486106
     * @symbol  ?getBoostTimeTotal\@BoostableComponent\@\@QEBAHXZ
     */
    MCAPI int getBoostTimeTotal() const;
    /**
     * @hash   -1993961058
     * @symbol  ?getIsBoosting\@BoostableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsBoosting() const;
    /**
     * @hash   -915868434
     * @symbol  ?itemUseText\@BoostableComponent\@\@QEAA_NAEBVPlayer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool itemUseText(class Player const &, std::string &);
    /**
     * @hash   -497353889
     * @symbol  ?onItemInteract\@BoostableComponent\@\@QEAA_NAEAVActor\@\@AEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool onItemInteract(class Actor &, class ItemStack &, class Player &);
    /**
     * @hash   -1969409882
     * @symbol  ?setBoostTime\@BoostableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setBoostTime(int);
    /**
     * @hash   -1246813498
     * @symbol  ?setIsBoosting\@BoostableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsBoosting(bool);
    /**
     * @hash   1351292633
     * @symbol  ?getSpeedModifierBoosting\@BoostableComponent\@\@SA?AV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> getSpeedModifierBoosting();

//private:

private:
    /**
     * @hash   -1856594118
     * @symbol  ?SPEED_MODIFIER_BOOSTING\@BoostableComponent\@\@0V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_BOOSTING;
    /**
     * @hash   475990949
     * @symbol  ?SPEED_MODIFIER_BOOSTING_UUID\@BoostableComponent\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

};