#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlComponent {

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&) = delete;
    MoveControlComponent(MoveControlComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0MoveControlComponent\@\@QEAA\@XZ
     */
    MCAPI MoveControlComponent();
    /**
     * @symbol ?getHasWantedPosition\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @symbol ?getMaxTurn\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxTurn() const;
    /**
     * @symbol ?getShouldBreach\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldBreach() const;
    /**
     * @symbol ?getSpeedModifier\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeedModifier() const;
    /**
     * @symbol ?getWantedPosition\@MoveControlComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getWantedPosition() const;
    /**
     * @symbol
     * ?initMultiTypeMovementComponent\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeMovementComponent(class Mob&, class ActorDefinitionDescriptor&);
    /**
     * @symbol ?initializeFromDefinition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob&, struct MoveControlDescription*);
    /**
     * @symbol ??4MoveControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MoveControlComponent& operator=(class MoveControlComponent&&);
    /**
     * @symbol ?setHasWantedPosition\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @symbol
     * ?setInternalType\@MoveControlComponent\@\@QEAAXV?$unique_ptr\@VMoveControl\@\@U?$default_delete\@VMoveControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class MoveControl>);
    /**
     * @symbol ?setMaxTurn\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setMaxTurn(float);
    /**
     * @symbol ?setShouldBreach\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldBreach(bool);
    /**
     * @symbol ?setSpeedModifier\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeedModifier(float);
    /**
     * @symbol ?setWantedPosition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI void setWantedPosition(class Mob&, class Vec3 const&, float);
    /**
     * @symbol ?update\@MoveControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_setWantedPosition\@MoveControlComponent\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setWantedPosition(class Vec3 const&);
    // NOLINTEND
};
