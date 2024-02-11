#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

class ActorTickNeededComponent {
public:
    // prevent constructor by default
    ActorTickNeededComponent& operator=(ActorTickNeededComponent const&);
    ActorTickNeededComponent(ActorTickNeededComponent const&);
    ActorTickNeededComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorTickNeededComponent@@QEAA@$$QEAV0@@Z
    MCAPI ActorTickNeededComponent(class ActorTickNeededComponent&& other);

    // symbol: ??0ActorTickNeededComponent@@QEAA@AEAVBlockSource@@@Z
    MCAPI explicit ActorTickNeededComponent(class BlockSource& region);

    // symbol: ?getBlockSource@ActorTickNeededComponent@@QEAA?AV?$WeakRef@VBlockSource@@@@XZ
    MCAPI class WeakRef<class BlockSource> getBlockSource();

    // symbol: ??4ActorTickNeededComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ActorTickNeededComponent& operator=(class ActorTickNeededComponent&& other);

    // symbol: ??1ActorTickNeededComponent@@QEAA@XZ
    MCAPI ~ActorTickNeededComponent();

    // NOLINTEND
};
