#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorAnnotationComponent {

public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&) = delete;
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent const&)            = delete;

public:
    /**
     * @symbol ??0OpenDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI OpenDoorAnnotationComponent(); // NOLINT
    /**
     * @symbol ??0OpenDoorAnnotationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent&&); // NOLINT
    /**
     * @symbol ?checkPath\@OpenDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void checkPath(class Mob&); // NOLINT
    /**
     * @symbol ?initFromDefinition\@OpenDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?onComponentRemoved\@OpenDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext&); // NOLINT

    // private:
    /**
     * @symbol ?_cleanUp\@OpenDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob&); // NOLINT

private:
};
