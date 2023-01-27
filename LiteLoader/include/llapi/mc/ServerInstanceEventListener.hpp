/**
 * @file  ServerInstanceEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerInstanceEventListener.
 *
 */
class ServerInstanceEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCEEVENTLISTENER
public:
    class ServerInstanceEventListener& operator=(class ServerInstanceEventListener const &) = delete;
    ServerInstanceEventListener(class ServerInstanceEventListener const &) = delete;
    ServerInstanceEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCEEVENTLISTENER
    /**
     * @hash   698594617
     * @symbol  ?onServerInitializeEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeEnd(class ServerInstance &);
    /**
     * @hash   -335016782
     * @symbol  ?onServerInitializeStart\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeStart(class ServerInstance &);
    /**
     * @hash   104782349
     * @symbol  ?onServerMinecraftInitialized\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI enum class EventResult onServerMinecraftInitialized(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const &);
    /**
     * @hash   -22895629
     * @symbol  ?onServerResume\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerResume(class ServerInstance &);
    /**
     * @hash   -2012795352
     * @symbol  ?onServerSuspend\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerSuspend(class ServerInstance &);
    /**
     * @hash   -2065563246
     * @symbol  ?onServerUpdateEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerUpdateEnd(class ServerInstance &);
    /**
     * @hash   -40747140
     * @symbol  ?onStartLeaveGame\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onStartLeaveGame(class ServerInstance &);
#endif

};