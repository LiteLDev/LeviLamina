/**
 * @file  ContainerScreenContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1589978766
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@XZ
     */
    MCAPI ContainerScreenContext();
    /**
     * @hash   2119923281
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, class BlockPos const &);
    /**
     * @hash   1000839827
     * @symbol  ??0ContainerScreenContext\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, struct ActorUniqueID const &);
    /**
     * @hash   11322630
     * @symbol  ?getPlayer\@ContainerScreenContext\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @hash   793608756
     * @symbol  ?getScreenContainerType\@ContainerScreenContext\@\@QEBA?AW4ContainerType\@\@XZ
     */
    MCAPI enum class ContainerType getScreenContainerType() const;
    /**
     * @hash   -533661353
     * @symbol  ?tryGetActor\@ContainerScreenContext\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor * tryGetActor() const;
    /**
     * @hash   -412106407
     * @symbol  ?tryGetBlockActor\@ContainerScreenContext\@\@QEBAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor * tryGetBlockActor() const;

};