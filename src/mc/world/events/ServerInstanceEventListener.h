#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ServerInstanceEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCEEVENTLISTENER
public:
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&) = delete;
    ServerInstanceEventListener(ServerInstanceEventListener const&)            = delete;
    ServerInstanceEventListener()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCEEVENTLISTENER
    /**
     * @symbol ?onServerInitializeEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeEnd(class ServerInstance&);
    /**
     * @symbol ?onServerInitializeStart\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeStart(class ServerInstance&);
    /**
     * @symbol
     * ?onServerMinecraftInitialized\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI enum class EventResult
    onServerMinecraftInitialized(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&);
    /**
     * @symbol ?onServerResume\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerResume(class ServerInstance&);
    /**
     * @symbol ?onServerSuspend\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerSuspend(class ServerInstance&);
    /**
     * @symbol ?onServerUpdateEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerUpdateEnd(class ServerInstance&);
    /**
     * @symbol ?onStartLeaveGame\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onStartLeaveGame(class ServerInstance&);
#endif
};
