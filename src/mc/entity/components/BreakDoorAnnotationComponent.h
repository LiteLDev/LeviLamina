#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationComponent {

public:
    // prevent constructor by default
    BreakDoorAnnotationComponent& operator=(BreakDoorAnnotationComponent const&) = delete;
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BreakDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI BreakDoorAnnotationComponent();
    /**
     * @symbol ?canMobBreakDoor\@BreakDoorAnnotationComponent\@\@QEBA_NAEAVMob\@\@AEBVPath\@\@\@Z
     */
    MCAPI bool canMobBreakDoor(class Mob&, class Path const&) const;
    /**
     * @symbol ?clearProgress\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void clearProgress(class Mob&);
    /**
     * @symbol ?initFromDefinition\@BreakDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?obstructionCheck\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void obstructionCheck(class Mob&);
    /**
     * @symbol ?onComponentRemoved\@BreakDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_cleanUp\@BreakDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob&);
    /**
     * @symbol ?_shouldBreakDoor\@BreakDoorAnnotationComponent\@\@AEAA_NAEAVMob\@\@\@Z
     */
    MCAPI bool _shouldBreakDoor(class Mob&);
    // NOLINTEND
};
