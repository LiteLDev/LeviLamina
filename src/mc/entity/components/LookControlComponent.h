#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControlComponent {

public:
    // prevent constructor by default
    LookControlComponent& operator=(LookControlComponent const&) = delete;
    LookControlComponent(LookControlComponent const&)            = delete;

public:
    /**
     * @symbol ??0LookControlComponent\@\@QEAA\@XZ
     */
    MCAPI LookControlComponent(); // NOLINT
    /**
     * @symbol ?getHasWantedPosition\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const; // NOLINT
    /**
     * @symbol ?getHasWantedRotation\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedRotation() const; // NOLINT
    /**
     * @symbol ?getWantedPosition\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedPosition() const; // NOLINT
    /**
     * @symbol ?getWantedRotation\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedRotation() const; // NOLINT
    /**
     * @symbol ?getXMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getXMax() const; // NOLINT
    /**
     * @symbol ?getYMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getYMax() const; // NOLINT
    /**
     * @symbol ?initialize\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void initialize(class Mob&); // NOLINT
    /**
     * @symbol ??4LookControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LookControlComponent& operator=(class LookControlComponent&&); // NOLINT
    /**
     * @symbol ?setHasWantedPosition\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool); // NOLINT
    /**
     * @symbol ?setHasWantedRotation\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedRotation(bool); // NOLINT
    /**
     * @symbol
     * ?setInternalType\@LookControlComponent\@\@QEAAXV?$unique_ptr\@VLookControl\@\@U?$default_delete\@VLookControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class LookControl>); // NOLINT
    /**
     * @symbol ?setLookAtPosition\@LookControlComponent\@\@QEAAXPEBVActor\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Actor const*, float, float); // NOLINT
    /**
     * @symbol ?setLookAtPosition\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?setLookAtRotation\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtRotation(class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?setYMax\@LookControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setYMax(float); // NOLINT
    /**
     * @symbol ?update\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob&); // NOLINT
};
