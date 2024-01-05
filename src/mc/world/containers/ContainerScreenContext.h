#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerType.h"

class ContainerScreenContext {
public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&);
    ContainerScreenContext(ContainerScreenContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerScreenContext@@QEAA@XZ
    MCAPI ContainerScreenContext();

    // symbol: ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBVBlockPos@@@Z
    MCAPI ContainerScreenContext(class Player& player, ::ContainerType, class BlockPos const& blockPos);

    // symbol: ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBUActorUniqueID@@@Z
    MCAPI ContainerScreenContext(class Player& player, ::ContainerType, struct ActorUniqueID const& actorId);

    // symbol: ?getPlayer@ContainerScreenContext@@QEBAAEAVPlayer@@XZ
    MCAPI class Player& getPlayer() const;

    // symbol: ?getScreenContainerType@ContainerScreenContext@@QEBA?AW4ContainerType@@XZ
    MCAPI ::ContainerType getScreenContainerType() const;

    // symbol: ?tryGetActor@ContainerScreenContext@@QEBAPEAVActor@@XZ
    MCAPI class Actor* tryGetActor() const;

    // symbol: ?tryGetBlockActor@ContainerScreenContext@@QEBAPEAVBlockActor@@XZ
    MCAPI class BlockActor* tryGetBlockActor() const;

    // symbol: ?tryGetBlockActorPos@ContainerScreenContext@@QEBAPEBVBlockPos@@XZ
    MCAPI class BlockPos const* tryGetBlockActorPos() const;

    // NOLINTEND
};
