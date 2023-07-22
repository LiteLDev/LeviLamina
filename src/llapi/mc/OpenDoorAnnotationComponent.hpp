/**
 * @file  OpenDoorAnnotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpenDoorAnnotationComponent.
 *
 */
class OpenDoorAnnotationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONCOMPONENT
public:
    class OpenDoorAnnotationComponent& operator=(class OpenDoorAnnotationComponent const &) = delete;
    OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0OpenDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI OpenDoorAnnotationComponent();
    /**
     * @symbol  ??0OpenDoorAnnotationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent &&);
    /**
     * @symbol  ?checkPath\@OpenDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void checkPath(class Mob &);
    /**
     * @symbol  ?initFromDefinition\@OpenDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?onComponentRemoved\@OpenDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @symbol  ?_cleanUp\@OpenDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob &);

private:

};