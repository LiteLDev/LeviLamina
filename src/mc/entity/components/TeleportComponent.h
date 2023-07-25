#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTCOMPONENT
public:
    TeleportComponent& operator=(TeleportComponent const&) = delete;
    TeleportComponent(TeleportComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0TeleportComponent\@\@QEAA\@XZ
     */
    MCAPI TeleportComponent();
    /**
     * @symbol ?getDarkTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getDarkTeleportChance();
    /**
     * @symbol ?getLightTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getLightTeleportChance();
    /**
     * @symbol ?getMaxTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMaxTeleportTime();
    /**
     * @symbol ?getMinTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMinTeleportTime();
    /**
     * @symbol ?getRandomTeleports\@TeleportComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRandomTeleports();
    /**
     * @symbol ?getTargetDistance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetDistance();
    /**
     * @symbol ?getTargetTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetTeleportChance();
    /**
     * @symbol ?getTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getTeleportTime();
    /**
     * @symbol ?initFromDefinition\@TeleportComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?randomTeleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool randomTeleport(class Actor&);
    /**
     * @symbol ?setTeleportTime\@TeleportComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTeleportTime(int);
    /**
     * @symbol ?teleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool teleport(class Actor&, class Vec3 const&);
    /**
     * @symbol ?teleportTowards\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI bool teleportTowards(class Actor&, class Actor const&);
};
