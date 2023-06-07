/**
 * @file  ServerLevelEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLevelEventCoordinator.
 *
 */
class ServerLevelEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVELEVENTCOORDINATOR
public:
    class ServerLevelEventCoordinator& operator=(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?sendLevelAddedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelAddedPlayer(class Level &, class Player &);
    /**
     * @symbol ?sendLevelRemovedPlayer\@ServerLevelEventCoordinator\@\@QEAAXAEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void sendLevelRemovedPlayer(class Level &, class Player &);

};
