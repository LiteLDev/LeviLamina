#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorAnnotationComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONCOMPONENT
public:
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&) = delete;
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0OpenDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI OpenDoorAnnotationComponent();
    /**
     * @symbol ??0OpenDoorAnnotationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent&&);
    /**
     * @symbol ?checkPath\@OpenDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void checkPath(class Mob&);
    /**
     * @symbol ?initFromDefinition\@OpenDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?onComponentRemoved\@OpenDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext&);

    // private:
    /**
     * @symbol ?_cleanUp\@OpenDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob&);

private:
};
