/**
 * @file  MoveControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControlComponent.
 *
 */
class MoveControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLCOMPONENT
public:
    class MoveControlComponent& operator=(class MoveControlComponent const &) = delete;
    MoveControlComponent(class MoveControlComponent const &) = delete;
#endif

public:
    /**
     * @hash   -400383539
     * @symbol  ??0MoveControlComponent\@\@QEAA\@XZ
     */
    MCAPI MoveControlComponent();
    /**
     * @hash   -1178371244
     * @symbol  ?getHasWantedPosition\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @hash   1345488166
     * @symbol  ?getMaxTurn\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxTurn() const;
    /**
     * @hash   650585106
     * @symbol  ?getShouldBreach\@MoveControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldBreach() const;
    /**
     * @hash   -1968306602
     * @symbol  ?getSpeedModifier\@MoveControlComponent\@\@QEBAMXZ
     */
    MCAPI float getSpeedModifier() const;
    /**
     * @hash   -1190006216
     * @symbol  ?getWantedPosition\@MoveControlComponent\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getWantedPosition() const;
    /**
     * @hash   1228727359
     * @symbol  ?initMultiTypeMovementComponent\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeMovementComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   -477072364
     * @symbol  ?initializeFromDefinition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   1001293774
     * @symbol  ??4MoveControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class MoveControlComponent & operator=(class MoveControlComponent &&);
    /**
     * @hash   264754176
     * @symbol  ?setHasWantedPosition\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @hash   -830039570
     * @symbol  ?setInternalType\@MoveControlComponent\@\@QEAAXV?$unique_ptr\@VMoveControl\@\@U?$default_delete\@VMoveControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class MoveControl>);
    /**
     * @hash   1688532148
     * @symbol  ?setMaxTurn\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setMaxTurn(float);
    /**
     * @hash   1687757810
     * @symbol  ?setShouldBreach\@MoveControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldBreach(bool);
    /**
     * @hash   926298020
     * @symbol  ?setSpeedModifier\@MoveControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setSpeedModifier(float);
    /**
     * @hash   -1838493942
     * @symbol  ?setWantedPosition\@MoveControlComponent\@\@QEAAXAEAVMob\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI void setWantedPosition(class Mob &, class Vec3 const &, float);
    /**
     * @hash   252757540
     * @symbol  ?update\@MoveControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);

//private:
    /**
     * @hash   882051348
     * @symbol  ?_setWantedPosition\@MoveControlComponent\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setWantedPosition(class Vec3 const &);

private:

};