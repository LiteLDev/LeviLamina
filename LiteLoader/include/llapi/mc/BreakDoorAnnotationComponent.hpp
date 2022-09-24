/**
 * @file  BreakDoorAnnotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationComponent.
 *
 */
class BreakDoorAnnotationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONCOMPONENT
public:
    class BreakDoorAnnotationComponent& operator=(class BreakDoorAnnotationComponent const &) = delete;
    BreakDoorAnnotationComponent(class BreakDoorAnnotationComponent const &) = delete;
#endif

public:
    /**
     * @hash   -294495699
     * @symbol ??0BreakDoorAnnotationComponent@@QEAA@XZ
     */
    MCAPI BreakDoorAnnotationComponent();
    /**
     * @hash   -215094770
     * @symbol ?canMobBreakDoor@BreakDoorAnnotationComponent@@QEBA_NAEAVMob@@AEBVPath@@@Z
     */
    MCAPI bool canMobBreakDoor(class Mob &, class Path const &) const;
    /**
     * @hash   1667273830
     * @symbol ?clearProgress@BreakDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void clearProgress(class Mob &);
    /**
     * @hash   -1842233686
     * @symbol ?initFromDefinition@BreakDoorAnnotationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1846968316
     * @symbol ?obstructionCheck@BreakDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void obstructionCheck(class Mob &);
    /**
     * @hash   970406732
     * @symbol ?onComponentRemoved@BreakDoorAnnotationComponent@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @hash   -424569924
     * @symbol ?_cleanUp@BreakDoorAnnotationComponent@@AEAAXAEAVMob@@@Z
     */
    MCAPI void _cleanUp(class Mob &);
    /**
     * @hash   666583484
     * @symbol ?_shouldBreakDoor@BreakDoorAnnotationComponent@@AEAA_NAEAVMob@@@Z
     */
    MCAPI bool _shouldBreakDoor(class Mob &);

private:

};