/**
 * @file  TeleportComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1656946450
     * @symbol  ??0TeleportComponent\@\@QEAA\@XZ
     */
    MCAPI TeleportComponent();
    /**
     * @hash   -2063981346
     * @symbol  ?getDarkTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getDarkTeleportChance();
    /**
     * @hash   -771239708
     * @symbol  ?getLightTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getLightTeleportChance();
    /**
     * @hash   -393436876
     * @symbol  ?getMaxTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMaxTeleportTime();
    /**
     * @hash   1288980160
     * @symbol  ?getMinTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getMinTeleportTime();
    /**
     * @hash   -1498204228
     * @symbol  ?getRandomTeleports\@TeleportComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRandomTeleports();
    /**
     * @hash   -2095220560
     * @symbol  ?getTargetDistance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetDistance();
    /**
     * @hash   -775467532
     * @symbol  ?getTargetTeleportChance\@TeleportComponent\@\@QEAAMXZ
     */
    MCAPI float getTargetTeleportChance();
    /**
     * @hash   -1892113146
     * @symbol  ?getTeleportTime\@TeleportComponent\@\@QEAAHXZ
     */
    MCAPI int getTeleportTime();
    /**
     * @hash   985002626
     * @symbol  ?initFromDefinition\@TeleportComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1202285997
     * @symbol  ?randomTeleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool randomTeleport(class Actor &);
    /**
     * @hash   -943325294
     * @symbol  ?setTeleportTime\@TeleportComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTeleportTime(int);
    /**
     * @hash   507684338
     * @symbol  ?teleport\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool teleport(class Actor &, class Vec3 const &);
    /**
     * @hash   1695230251
     * @symbol  ?teleportTowards\@TeleportComponent\@\@QEAA_NAEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI bool teleportTowards(class Actor &, class Actor const &);

};