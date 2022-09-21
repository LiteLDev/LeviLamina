/**
 * @file  MC/MoveControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   438976925
     * @symbol ??0MoveControlComponent@@QEAA@XZ
     */
    MCAPI MoveControlComponent();
    /**
     * @hash   -1310251196
     * @symbol ?getHasWantedPosition@MoveControlComponent@@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @hash   -2110118666
     * @symbol ?getMaxTurn@MoveControlComponent@@QEBAMXZ
     */
    MCAPI float getMaxTurn() const;
    /**
     * @hash   545505522
     * @symbol ?getShouldBreach@MoveControlComponent@@QEBA_NXZ
     */
    MCAPI bool getShouldBreach() const;
    /**
     * @hash   -1128946138
     * @symbol ?getSpeedModifier@MoveControlComponent@@QEBAMXZ
     */
    MCAPI float getSpeedModifier() const;
    /**
     * @hash   -1322747224
     * @symbol ?getWantedPosition@MoveControlComponent@@QEBAAEBVVec3@@XZ
     */
    MCAPI class Vec3 const & getWantedPosition() const;
    /**
     * @hash   2068087823
     * @symbol ?initMultiTypeMovementComponent@MoveControlComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
     */
    MCAPI void initMultiTypeMovementComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   364763636
     * @symbol ?initializeFromDefinition@MoveControlComponent@@QEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   782216526
     * @symbol ??4MoveControlComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class MoveControlComponent & operator=(class MoveControlComponent &&);
    /**
     * @hash   132874224
     * @symbol ?setHasWantedPosition@MoveControlComponent@@QEAAX_N@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @hash   11781054
     * @symbol ?setInternalType@MoveControlComponent@@QEAAXV?$unique_ptr@VMoveControl@@U?$default_delete@VMoveControl@@@std@@@std@@@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class MoveControl>);
    /**
     * @hash   -1764629900
     * @symbol ?setMaxTurn@MoveControlComponent@@QEAAXM@Z
     */
    MCAPI void setMaxTurn(float);
    /**
     * @hash   -1756286270
     * @symbol ?setShouldBreach@MoveControlComponent@@QEAAX_N@Z
     */
    MCAPI void setShouldBreach(bool);
    /**
     * @hash   1768103268
     * @symbol ?setSpeedModifier@MoveControlComponent@@QEAAXM@Z
     */
    MCAPI void setSpeedModifier(float);
    /**
     * @hash   -996688694
     * @symbol ?setWantedPosition@MoveControlComponent@@QEAAXAEAVMob@@AEBVVec3@@M@Z
     */
    MCAPI void setWantedPosition(class Mob &, class Vec3 const &, float);
    /**
     * @hash   1094547412
     * @symbol ?update@MoveControlComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void update(class Mob &);

//private:
    /**
     * @hash   1721411812
     * @symbol ?_setWantedPosition@MoveControlComponent@@AEAAXAEBVVec3@@@Z
     */
    MCAPI void _setWantedPosition(class Vec3 const &);

private:

};