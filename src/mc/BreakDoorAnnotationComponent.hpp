/**
 * @file  BreakDoorAnnotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0BreakDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI BreakDoorAnnotationComponent();
    /**
     * @symbol  ?canMobBreakDoor\@BreakDoorAnnotationComponent\@\@QEBA_NAEAVMob\@\@AEBVPath\@\@\@Z
     */
    MCAPI bool canMobBreakDoor(class Mob &, class Path const &) const;
    /**
     * @symbol  ?clearProgress\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void clearProgress(class Mob &);
    /**
     * @symbol  ?initFromDefinition\@BreakDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?obstructionCheck\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void obstructionCheck(class Mob &);
    /**
     * @symbol  ?onComponentRemoved\@BreakDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @symbol  ?_cleanUp\@BreakDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob &);
    /**
     * @symbol  ?_shouldBreakDoor\@BreakDoorAnnotationComponent\@\@AEAA_NAEAVMob\@\@\@Z
     */
    MCAPI bool _shouldBreakDoor(class Mob &);

private:

};