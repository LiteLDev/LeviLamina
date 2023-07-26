/**
 * @file  ContainerScreenContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenContext.
 *
 */
class ContainerScreenContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENCONTEXT
public:
    class ContainerScreenContext& operator=(class ContainerScreenContext const &) = delete;
    ContainerScreenContext(class ContainerScreenContext const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@XZ
     */
    MCAPI ContainerScreenContext();
    /**
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, class BlockPos const &);
    /**
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, struct ActorUniqueID const &);
    /**
     * @symbol  ?getPlayer\@ContainerScreenContext\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @symbol  ?getScreenContainerType\@ContainerScreenContext\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getScreenContainerType() const;
    /**
     * @symbol  ?tryGetActor\@ContainerScreenContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * tryGetActor() const;
    /**
     * @symbol  ?tryGetBlockActor\@ContainerScreenContext\@\@QEBAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor * tryGetBlockActor() const;

};