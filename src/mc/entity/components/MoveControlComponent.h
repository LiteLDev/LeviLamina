#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlComponent {

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&) = delete;
    MoveControlComponent(MoveControlComponent const&)            = delete;

public:
    /**
     * @symbol ??0MoveControlComponent\@\@QEAA\@XZ
     */
    MCAPI MoveControlComponent(); // NOLINT
    /**
     * @symbol ?getHasWantedPosition\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const; // NOLINT
    /**
     * @symbol ?getMaxTurn\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxTurn() const; // NOLINT
    /**
     * @symbol ?getShouldBreach\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldBreach() const; // NOLINT
    /**
     * @symbol ?getSpeedModifier\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeedModifier() const; // NOLINT
    /**
     * @symbol ?getWantedPosition\@MoveControlComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getWantedPosition() const; // NOLINT
    /**
     * @symbol
     * ?initMultiTypeMovementComponent\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeMovementComponent(class Mob&, class ActorDefinitionDescriptor&); // NOLINT
    /**
     * @symbol ?initializeFromDefinition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob&, struct MoveControlDescription*); // NOLINT
    /**
     * @symbol ??4MoveControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MoveControlComponent& operator=(class MoveControlComponent&&); // NOLINT
    /**
     * @symbol ?setHasWantedPosition\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool); // NOLINT
    /**
     * @symbol
     * ?setInternalType\@MoveControlComponent\@\@QEAAXV?$unique_ptr\@VMoveControl\@\@U?$default_delete\@VMoveControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class MoveControl>); // NOLINT
    /**
     * @symbol ?setMaxTurn\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setMaxTurn(float); // NOLINT
    /**
     * @symbol ?setShouldBreach\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldBreach(bool); // NOLINT
    /**
     * @symbol ?setSpeedModifier\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeedModifier(float); // NOLINT
    /**
     * @symbol ?setWantedPosition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI void setWantedPosition(class Mob&, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?update\@MoveControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_setWantedPosition\@MoveControlComponent\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setWantedPosition(class Vec3 const&); // NOLINT

private:
};
