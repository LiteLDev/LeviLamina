/**
 * @file  MC/ServerInstanceEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerInstanceEventCoordinator.
 *
 */
class ServerInstanceEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCEEVENTCOORDINATOR
public:
    class ServerInstanceEventCoordinator& operator=(class ServerInstanceEventCoordinator const &) = delete;
    ServerInstanceEventCoordinator(class ServerInstanceEventCoordinator const &) = delete;
    ServerInstanceEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   43611668
     * @symbol ?registerServerInstanceEventHandler@ServerInstanceEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VServerInstanceEventHandler@@U?$default_delete@VServerInstanceEventHandler@@@std@@@std@@@Z
     */
    MCAPI void registerServerInstanceEventHandler(std::unique_ptr<class ServerInstanceEventHandler> &&);
    /**
     * @hash   1908631882
     * @symbol ?sendEvent@ServerInstanceEventCoordinator@@QEAAXAEBV?$EventRef@U?$ServerInstanceGameplayEvent@X@@@@@Z
     */
    MCAPI void sendEvent(class EventRef<struct ServerInstanceGameplayEvent<void>> const &);
    /**
     * @hash   -1672762314
     * @symbol ?sendServerInitializeEnd@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerInitializeEnd(class ServerInstance &);
    /**
     * @hash   -1525440008
     * @symbol ?sendServerInitializeStart@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerInitializeStart(class ServerInstance &);
    /**
     * @hash   1028644519
     * @symbol ?sendServerLevelInitialized@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@AEAVLevel@@@Z
     */
    MCAPI void sendServerLevelInitialized(class ServerInstance &, class Level &);
    /**
     * @hash   115979141
     * @symbol ?sendServerMinecraftInitialized@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@@Z
     */
    MCAPI void sendServerMinecraftInitialized(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const &);
    /**
     * @hash   1182949502
     * @symbol ?sendServerThreadStarted@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerThreadStarted(class ServerInstance &);
    /**
     * @hash   336633142
     * @symbol ?sendServerThreadStopped@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerThreadStopped(class ServerInstance &);
    /**
     * @hash   -1768228376
     * @symbol ?sendServerUpdateEnd@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerUpdateEnd(class ServerInstance &);
    /**
     * @hash   807648042
     * @symbol ?sendServerUpdateStart@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendServerUpdateStart(class ServerInstance &);
    /**
     * @hash   -890704870
     * @symbol ?sendStartLeaveGame@ServerInstanceEventCoordinator@@QEAAXAEAVServerInstance@@@Z
     */
    MCAPI void sendStartLeaveGame(class ServerInstance &);

};