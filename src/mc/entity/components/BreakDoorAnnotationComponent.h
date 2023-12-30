#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationComponent {
public:
    // prevent constructor by default
    BreakDoorAnnotationComponent& operator=(BreakDoorAnnotationComponent const&);
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BreakDoorAnnotationComponent@@QEAA@XZ
    MCAPI BreakDoorAnnotationComponent();

    // symbol: ?canMobBreakDoor@BreakDoorAnnotationComponent@@QEBA_NAEAVMob@@AEBVPath@@@Z
    MCAPI bool canMobBreakDoor(class Mob& mob, class Path const& path) const;

    // symbol: ?clearProgress@BreakDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
    MCAPI void clearProgress(class Mob& mob);

    // symbol: ?initFromDefinition@BreakDoorAnnotationComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?obstructionCheck@BreakDoorAnnotationComponent@@QEAAXAEAVMob@@@Z
    MCAPI void obstructionCheck(class Mob& mob);

    // symbol: ?onComponentRemoved@BreakDoorAnnotationComponent@@QEAAXAEAVEntityContext@@@Z
    MCAPI void onComponentRemoved(class EntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_cleanUp@BreakDoorAnnotationComponent@@AEAAXAEAVMob@@@Z
    MCAPI void _cleanUp(class Mob& mob);

    // symbol: ?_shouldBreakDoor@BreakDoorAnnotationComponent@@AEAA_NAEAVMob@@@Z
    MCAPI bool _shouldBreakDoor(class Mob& mob);

    // NOLINTEND
};
