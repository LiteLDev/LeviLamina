#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/events/ServerInstanceGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ServerInstanceEventCoordinator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCEEVENTCOORDINATOR
public:
    ServerInstanceEventCoordinator& operator=(ServerInstanceEventCoordinator const&) = delete;
    ServerInstanceEventCoordinator(ServerInstanceEventCoordinator const&)            = delete;
    ServerInstanceEventCoordinator()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?registerServerInstanceEventHandler\@ServerInstanceEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VServerInstanceEventHandler\@\@U?$default_delete\@VServerInstanceEventHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerServerInstanceEventHandler(std::unique_ptr<class ServerInstanceEventHandler>&&);
    /**
     * @symbol
     * ?sendEvent\@ServerInstanceEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$ServerInstanceGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct ServerInstanceGameplayEvent<void>> const&);
    /**
     * @symbol ?sendServerInitializeEnd\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerInitializeEnd(class ServerInstance&);
    /**
     * @symbol ?sendServerInitializeStart\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerInitializeStart(class ServerInstance&);
    /**
     * @symbol
     * ?sendServerLevelInitialized\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void sendServerLevelInitialized(class ServerInstance&, class Level&);
    /**
     * @symbol
     * ?sendServerMinecraftInitialized\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void
    sendServerMinecraftInitialized(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&);
    /**
     * @symbol ?sendServerThreadStarted\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerThreadStarted(class ServerInstance&);
    /**
     * @symbol ?sendServerThreadStopped\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerThreadStopped(class ServerInstance&);
    /**
     * @symbol ?sendServerUpdateEnd\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerUpdateEnd(class ServerInstance&);
    /**
     * @symbol ?sendServerUpdateStart\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerUpdateStart(class ServerInstance&);
    /**
     * @symbol ?sendStartLeaveGame\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendStartLeaveGame(class ServerInstance&);
};
