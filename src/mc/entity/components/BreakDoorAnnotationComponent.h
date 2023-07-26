#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationComponent {

public:
    // prevent constructor by default
    BreakDoorAnnotationComponent& operator=(BreakDoorAnnotationComponent const&) = delete;
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent const&)            = delete;

public:
    /**
     * @symbol ??0BreakDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI BreakDoorAnnotationComponent(); // NOLINT
    /**
     * @symbol ?canMobBreakDoor\@BreakDoorAnnotationComponent\@\@QEBA_NAEAVMob\@\@AEBVPath\@\@\@Z
     */
    MCAPI bool canMobBreakDoor(class Mob&, class Path const&) const; // NOLINT
    /**
     * @symbol ?clearProgress\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void clearProgress(class Mob&); // NOLINT
    /**
     * @symbol ?initFromDefinition\@BreakDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?obstructionCheck\@BreakDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void obstructionCheck(class Mob&); // NOLINT
    /**
     * @symbol ?onComponentRemoved\@BreakDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext&); // NOLINT

    // private:
    /**
     * @symbol ?_cleanUp\@BreakDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob&); // NOLINT
    /**
     * @symbol ?_shouldBreakDoor\@BreakDoorAnnotationComponent\@\@AEAA_NAEAVMob\@\@\@Z
     */
    MCAPI bool _shouldBreakDoor(class Mob&); // NOLINT

private:
};
