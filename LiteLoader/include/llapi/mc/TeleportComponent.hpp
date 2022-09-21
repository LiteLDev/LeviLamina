/**
 * @file  MC/TeleportComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportComponent.
 *
 */
class TeleportComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTCOMPONENT
public:
    class TeleportComponent& operator=(class TeleportComponent const &) = delete;
    TeleportComponent(class TeleportComponent const &) = delete;
#endif

public:
    /**
     * @hash   -731172866
     * @symbol ??0TeleportComponent@@QEAA@XZ
     */
    MCAPI TeleportComponent();
    /**
     * @hash   -1211858802
     * @symbol ?getDarkTeleportChance@TeleportComponent@@QEAAMXZ
     */
    MCAPI float getDarkTeleportChance();
    /**
     * @hash   -1021899260
     * @symbol ?getLightTeleportChance@TeleportComponent@@QEAAMXZ
     */
    MCAPI float getLightTeleportChance();
    /**
     * @hash   -520873164
     * @symbol ?getMaxTeleportTime@TeleportComponent@@QEAAHXZ
     */
    MCAPI int getMaxTeleportTime();
    /**
     * @hash   1037966960
     * @symbol ?getMinTeleportTime@TeleportComponent@@QEAAHXZ
     */
    MCAPI int getMinTeleportTime();
    /**
     * @hash   -1630084180
     * @symbol ?getRandomTeleports@TeleportComponent@@QEAA_NXZ
     */
    MCAPI bool getRandomTeleports();
    /**
     * @hash   -1255860096
     * @symbol ?getTargetDistance@TeleportComponent@@QEAAMXZ
     */
    MCAPI float getTargetDistance();
    /**
     * @hash   150290676
     * @symbol ?getTargetTeleportChance@TeleportComponent@@QEAAMXZ
     */
    MCAPI float getTargetTeleportChance();
    /**
     * @hash   -966354938
     * @symbol ?getTeleportTime@TeleportComponent@@QEAAHXZ
     */
    MCAPI int getTeleportTime();
    /**
     * @hash   1910760834
     * @symbol ?initFromDefinition@TeleportComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -276527789
     * @symbol ?randomTeleport@TeleportComponent@@QEAA_NAEAVActor@@@Z
     */
    MCAPI bool randomTeleport(class Actor &);
    /**
     * @hash   -17551710
     * @symbol ?setTeleportTime@TeleportComponent@@QEAAXH@Z
     */
    MCAPI void setTeleportTime(int);
    /**
     * @hash   1433457922
     * @symbol ?teleport@TeleportComponent@@QEAA_NAEAVActor@@AEBVVec3@@@Z
     */
    MCAPI bool teleport(class Actor &, class Vec3 const &);
    /**
     * @hash   -1674086469
     * @symbol ?teleportTowards@TeleportComponent@@QEAA_NAEAVActor@@AEBV2@@Z
     */
    MCAPI bool teleportTowards(class Actor &, class Actor const &);

};