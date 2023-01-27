/**
 * @file  BreakDoorAnnotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1229371875
     * @symbol  ??0BreakDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI BreakDoorAnnotationComponent();
    /**
     * @hash   -1149955570
     * @symbol  ?canMobBreakDoor\@BreakDoorAnnotationComponent\@\@QEBA_NAEAVMob\@\@AEBVPath\@\@\@Z
     */
    MCAPI bool canMobBreakDoor(class Mob &, class Path const &) const;
    /**
     * @hash   732443782
     * @symbol  ?clearProgress\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void clearProgress(class Mob &);
    /**
     * @hash   1517918938
     * @symbol  ?initFromDefinition\@BreakDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1513184308
     * @symbol  ?obstructionCheck\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void obstructionCheck(class Mob &);
    /**
     * @hash   35684316
     * @symbol  ?onComponentRemoved\@BreakDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @hash   -1359446100
     * @symbol  ?_cleanUp\@BreakDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob &);
    /**
     * @hash   -268292692
     * @symbol  ?_shouldBreakDoor\@BreakDoorAnnotationComponent\@\@AEAA_NAEAVMob\@\@\@Z
     */
    MCAPI bool _shouldBreakDoor(class Mob &);

private:

};