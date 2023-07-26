#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenContext {

public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&) = delete;
    ContainerScreenContext(ContainerScreenContext const&)            = delete;

public:
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player&, enum class ContainerType, class BlockPos const&); // NOLINT
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player&, enum class ContainerType, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ??0ContainerScreenContext\@\@QEAA\@XZ
     */
    MCAPI ContainerScreenContext(); // NOLINT
    /**
     * @symbol ?getPlayer\@ContainerScreenContext\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player& getPlayer() const; // NOLINT
    /**
     * @symbol ?getScreenContainerType\@ContainerScreenContext\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getScreenContainerType() const; // NOLINT
    /**
     * @symbol ?tryGetActor\@ContainerScreenContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* tryGetActor() const; // NOLINT
    /**
     * @symbol ?tryGetBlockActor\@ContainerScreenContext\@\@QEBAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor* tryGetBlockActor() const; // NOLINT
};
