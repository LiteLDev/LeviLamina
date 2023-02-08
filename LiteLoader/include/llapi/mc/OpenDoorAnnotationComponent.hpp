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
     * @hash   -1914926750
     * @symbol  ??0OpenDoorAnnotationComponent\@\@QEAA\@XZ
     */
    MCAPI OpenDoorAnnotationComponent();
    /**
     * @hash   1556531461
     * @symbol  ??0OpenDoorAnnotationComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent &&);
    /**
     * @hash   -1243615910
     * @symbol  ?checkPath\@OpenDoorAnnotationComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void checkPath(class Mob &);
    /**
     * @hash   232513026
     * @symbol  ?initFromDefinition\@OpenDoorAnnotationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1530892806
     * @symbol  ?onComponentRemoved\@OpenDoorAnnotationComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @hash   1049616689
     * @symbol  ?_cleanUp\@OpenDoorAnnotationComponent\@\@AEAAXAEAVMob\@\@\@Z
     */
    MCAPI void _cleanUp(class Mob &);

private:

};