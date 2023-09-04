#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"

class ContainerScreenContext {
public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&) = delete;
    ContainerScreenContext(ContainerScreenContext const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBUActorUniqueID@@@Z
    MCAPI ContainerScreenContext(class Player&, ::ContainerType, struct ActorUniqueID const&);

    // symbol: ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBVBlockPos@@@Z
    MCAPI ContainerScreenContext(class Player&, ::ContainerType, class BlockPos const&);

    // symbol: ??0ContainerScreenContext@@QEAA@XZ
    MCAPI ContainerScreenContext();

    // symbol: ?getPlayer@ContainerScreenContext@@QEBAAEAVPlayer@@XZ
    MCAPI class Player& getPlayer() const;

    // symbol: ?getScreenContainerType@ContainerScreenContext@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getScreenContainerType() const;

    // symbol: ?tryGetActor@ContainerScreenContext@@QEBAPEAVActor@@XZ
    MCAPI class Actor* tryGetActor() const;

    // symbol: ?tryGetBlockActor@ContainerScreenContext@@QEBAPEAVBlockActor@@XZ
    MCAPI class BlockActor* tryGetBlockActor() const;

    // NOLINTEND
};
