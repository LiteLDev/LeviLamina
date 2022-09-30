/**
 * @file  ContainerScreenContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2061656690
     * @symbol ??0ContainerScreenContext@@QEAA@XZ
     */
    MCAPI ContainerScreenContext();
    /**
     * @hash   -1531712175
     * @symbol ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBVBlockPos@@@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, class BlockPos const &);
    /**
     * @hash   1644171667
     * @symbol ??0ContainerScreenContext@@QEAA@AEAVPlayer@@W4ContainerType@@AEBUActorUniqueID@@@Z
     */
    MCAPI ContainerScreenContext(class Player &, enum class ContainerType, struct ActorUniqueID const &);
    /**
     * @hash   -121633642
     * @symbol ?getPlayer@ContainerScreenContext@@QEBAAEAVPlayer@@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @hash   1644193700
     * @symbol ?getScreenContainerType@ContainerScreenContext@@QEBA?AW4ContainerType@@XZ
     */
    MCAPI enum class ContainerType getScreenContainerType() const;
    /**
     * @hash   109670487
     * @symbol ?tryGetActor@ContainerScreenContext@@QEBAPEAVActor@@XZ
     */
    MCAPI class Actor * tryGetActor() const;
    /**
     * @hash   231210057
     * @symbol ?tryGetBlockActor@ContainerScreenContext@@QEBAPEAVBlockActor@@XZ
     */
    MCAPI class BlockActor * tryGetBlockActor() const;

};