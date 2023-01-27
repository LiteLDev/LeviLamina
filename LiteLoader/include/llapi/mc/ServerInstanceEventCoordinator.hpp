/**
 * @file  ServerInstanceEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   -536909212
     * @symbol  ?registerServerInstanceEventHandler\@ServerInstanceEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VServerInstanceEventHandler\@\@U?$default_delete\@VServerInstanceEventHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerServerInstanceEventHandler(std::unique_ptr<class ServerInstanceEventHandler> &&);
    /**
     * @hash   1328126378
     * @symbol  ?sendEvent\@ServerInstanceEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$ServerInstanceGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct ServerInstanceGameplayEvent<void>> const &);
    /**
     * @hash   2041745606
     * @symbol  ?sendServerInitializeEnd\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerInitializeEnd(class ServerInstance &);
    /**
     * @hash   -2105930136
     * @symbol  ?sendServerInitializeStart\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerInitializeStart(class ServerInstance &);
    /**
     * @hash   448123639
     * @symbol  ?sendServerLevelInitialized\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void sendServerLevelInitialized(class ServerInstance &, class Level &);
    /**
     * @hash   -464541739
     * @symbol  ?sendServerMinecraftInitialized\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void sendServerMinecraftInitialized(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const &);
    /**
     * @hash   602428622
     * @symbol  ?sendServerThreadStarted\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerThreadStarted(class ServerInstance &);
    /**
     * @hash   -243918490
     * @symbol  ?sendServerThreadStopped\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerThreadStopped(class ServerInstance &);
    /**
     * @hash   1946156536
     * @symbol  ?sendServerUpdateEnd\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerUpdateEnd(class ServerInstance &);
    /**
     * @hash   227034906
     * @symbol  ?sendServerUpdateStart\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendServerUpdateStart(class ServerInstance &);
    /**
     * @hash   -1471348758
     * @symbol  ?sendStartLeaveGame\@ServerInstanceEventCoordinator\@\@QEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendStartLeaveGame(class ServerInstance &);

};