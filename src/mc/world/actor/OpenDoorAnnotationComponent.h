#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OpenDoorAnnotationComponent {
public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&);
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0OpenDoorAnnotationComponent@@QEAA@XZ
    MCAPI OpenDoorAnnotationComponent();

    // symbol: ??0OpenDoorAnnotationComponent@@QEAA@$$QEAV0@@Z
    MCAPI OpenDoorAnnotationComponent(class OpenDoorAnnotationComponent&&);

    // symbol: ?checkPath@OpenDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
    MCAPI void checkPath(class Mob& mob);

    // symbol: ?initFromDefinition@OpenDoorAnnotationComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?onComponentRemoved@OpenDoorAnnotationComponent@@QEAAXAEAVEntityContext@@@Z
    MCAPI void onComponentRemoved(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_cleanUp@OpenDoorAnnotationComponent@@AEAAXAEAVMob@@@Z
    MCAPI void _cleanUp(class Mob& mob);

    // NOLINTEND
};
