/**
 * @file  MC/OpenDoorAnnotationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1030360846
     * @symbol ??0OpenDoorAnnotationComponent@@QEAA@XZ
     */
    MCAPI OpenDoorAnnotationComponent();
    /**
     * @hash   1408598965
     * @symbol ??0OpenDoorAnnotationComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent &&);
    /**
     * @hash   -359050006
     * @symbol ?checkPath@OpenDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void checkPath(class Mob &);
    /**
     * @hash   1117063554
     * @symbol ?initFromDefinition@OpenDoorAnnotationComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -646342278
     * @symbol ?onComponentRemoved@OpenDoorAnnotationComponent@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void onComponentRemoved(class EntityContext &);

//private:
    /**
     * @hash   1934182593
     * @symbol ?_cleanUp@OpenDoorAnnotationComponent@@AEAAXAEAVMob@@@Z
     */
    MCAPI void _cleanUp(class Mob &);

private:

};