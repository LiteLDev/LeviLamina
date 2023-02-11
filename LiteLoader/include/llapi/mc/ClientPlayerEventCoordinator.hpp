/**
 * @file  ClientPlayerEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientPlayerEventCoordinator.
 *
 */
class ClientPlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYEREVENTCOORDINATOR
public:
    class ClientPlayerEventCoordinator& operator=(class ClientPlayerEventCoordinator const &) = delete;
    ClientPlayerEventCoordinator(class ClientPlayerEventCoordinator const &) = delete;
    ClientPlayerEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   1402146255
     * @symbol  ?sendPlayerDestroyedBlock\@ClientPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void sendPlayerDestroyedBlock(class Player &, class Block const &);
    /**
     * @hash   640507771
     * @symbol  ?sendPlayerInput\@ClientPlayerEventCoordinator\@\@QEAAXAEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@\@Z
     */
    MCAPI void sendPlayerInput(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @hash   554863660
     * @symbol  ?sendStartDestroyBlock\@ClientPlayerEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@AEAE\@Z
     */
    MCAPI void sendStartDestroyBlock(class Player &, class BlockPos const &, unsigned char &);

};