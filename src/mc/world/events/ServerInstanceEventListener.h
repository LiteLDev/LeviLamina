#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ServerInstanceEventListener {

public:
    // prevent constructor by default
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&) = delete;
    ServerInstanceEventListener(ServerInstanceEventListener const&)            = delete;
    ServerInstanceEventListener()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERINSTANCEEVENTLISTENER
    /**
     * @symbol ?onServerInitializeEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeEnd(class ServerInstance&); // NOLINT
    /**
     * @symbol ?onServerInitializeStart\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerInitializeStart(class ServerInstance&); // NOLINT
    /**
     * @symbol
     * ?onServerMinecraftInitialized\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCVAPI enum class EventResult
    onServerMinecraftInitialized(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&); // NOLINT
    /**
     * @symbol ?onServerResume\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerResume(class ServerInstance&); // NOLINT
    /**
     * @symbol ?onServerSuspend\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerSuspend(class ServerInstance&); // NOLINT
    /**
     * @symbol ?onServerUpdateEnd\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onServerUpdateEnd(class ServerInstance&); // NOLINT
    /**
     * @symbol ?onStartLeaveGame\@ServerInstanceEventListener\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onStartLeaveGame(class ServerInstance&); // NOLINT
#endif
};
