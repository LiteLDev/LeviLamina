#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BoostableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLECOMPONENT
public:
    BoostableComponent& operator=(BoostableComponent const&) = delete;
    BoostableComponent(BoostableComponent const&)            = delete;
    BoostableComponent()                                     = delete;
#endif

public:
    /**
     * @symbol ?boost\@BoostableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void boost(class Actor&);
    /**
     * @symbol ?getBoostTime\@BoostableComponent\@\@QEBAHXZ
     */
    MCAPI int getBoostTime() const;
    /**
     * @symbol ?getBoostTimeTotal\@BoostableComponent\@\@QEBAHXZ
     */
    MCAPI int getBoostTimeTotal() const;
    /**
     * @symbol ?getIsBoosting\@BoostableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsBoosting() const;
    /**
     * @symbol
     * ?itemUseText\@BoostableComponent\@\@QEAA_NAEBVPlayer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool itemUseText(class Player const&, std::string&);
    /**
     * @symbol ?onItemInteract\@BoostableComponent\@\@QEAA_NAEAVActor\@\@AEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool onItemInteract(class Actor&, class ItemStack&, class Player&);
    /**
     * @symbol ?setBoostTime\@BoostableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setBoostTime(int);
    /**
     * @symbol ?setIsBoosting\@BoostableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsBoosting(bool);
    /**
     * @symbol ?getSpeedModifierUUID\@BoostableComponent\@\@SA?AVUUID\@mce\@\@XZ
     */
    MCAPI static class mce::UUID getSpeedModifierUUID();

    // private:

private:
    /**
     * @symbol ?SPEED_MODIFIER_BOOSTING_UUID\@BoostableComponent\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;
};
