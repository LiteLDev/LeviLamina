#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportComponent {

public:
    // prevent constructor by default
    TeleportComponent& operator=(TeleportComponent const&) = delete;
    TeleportComponent(TeleportComponent const&)            = delete;

public:
    /**
     * @symbol ??0TeleportComponent\@\@QEAA\@XZ
     */
    MCAPI TeleportComponent(); // NOLINT
    /**
     * @symbol ?getDarkTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getDarkTeleportChance(); // NOLINT
    /**
     * @symbol ?getLightTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getLightTeleportChance(); // NOLINT
    /**
     * @symbol ?getMaxTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMaxTeleportTime(); // NOLINT
    /**
     * @symbol ?getMinTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMinTeleportTime(); // NOLINT
    /**
     * @symbol ?getRandomTeleports\@TeleportComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRandomTeleports(); // NOLINT
    /**
     * @symbol ?getTargetDistance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetDistance(); // NOLINT
    /**
     * @symbol ?getTargetTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetTeleportChance(); // NOLINT
    /**
     * @symbol ?getTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getTeleportTime(); // NOLINT
    /**
     * @symbol ?initFromDefinition\@TeleportComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?randomTeleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool randomTeleport(class Actor&); // NOLINT
    /**
     * @symbol ?setTeleportTime\@TeleportComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTeleportTime(int); // NOLINT
    /**
     * @symbol ?teleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool teleport(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?teleportTowards\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI bool teleportTowards(class Actor&, class Actor const&); // NOLINT
};
