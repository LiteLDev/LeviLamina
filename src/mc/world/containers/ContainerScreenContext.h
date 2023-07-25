#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENCONTEXT
public:
    ContainerScreenContext& operator=(ContainerScreenContext const&) = delete;
    ContainerScreenContext(ContainerScreenContext const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player&, enum class ContainerType, class BlockPos const&);
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player&, enum class ContainerType, struct ActorUniqueID const&);
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@XZ
     */
    MCAPI ContainerScreenContext();
    /**
     * @symbol ?getPlayer\@ContainerScreenContext\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player& getPlayer() const;
    /**
     * @symbol ?getScreenContainerType\@ContainerScreenContext\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getScreenContainerType() const;
    /**
     * @symbol ?tryGetActor\@ContainerScreenContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* tryGetActor() const;
    /**
     * @symbol ?tryGetBlockActor\@ContainerScreenContext\@\@QEBAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor* tryGetBlockActor() const;
};
