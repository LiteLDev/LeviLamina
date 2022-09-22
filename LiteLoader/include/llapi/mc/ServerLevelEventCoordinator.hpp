/**
 * @file  ServerLevelEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1509686283
     * @symbol ?sendLevelAddedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
     */
    MCAPI void sendLevelAddedPlayer(class Level &, class Player &);
    /**
     * @hash   -1673370635
     * @symbol ?sendLevelRemovedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
     */
    MCAPI void sendLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @hash   -1084135651
     * @symbol ?sendLevelSaveData@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVCompoundTag@@@Z
     */
    MCAPI void sendLevelSaveData(class Level &, class CompoundTag &);

};