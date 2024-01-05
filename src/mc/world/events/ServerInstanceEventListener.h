#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

class ServerInstanceEventListener {
public:
    // prevent constructor by default
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&);
    ServerInstanceEventListener(ServerInstanceEventListener const&);
    ServerInstanceEventListener();

public:
    // NOLINTBEGIN
    // symbol: ?onServerInitializeEnd@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onServerInitializeEnd(class ServerInstance& instance);

    // symbol: ?onServerInitializeStart@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onServerInitializeStart(class ServerInstance& instance);

    // symbol:
    // ?onServerMinecraftInitialized@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@@Z
    MCVAPI ::EventResult onServerMinecraftInitialized(
        class ServerInstance&                               instance,
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft
    );

    // symbol: ?onServerResume@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onServerResume(class ServerInstance& instance);

    // symbol: ?onServerSuspend@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onServerSuspend(class ServerInstance& instance);

    // symbol: ?onServerUpdateEnd@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onServerUpdateEnd(class ServerInstance& instance);

    // symbol: ?onStartLeaveGame@ServerInstanceEventListener@@UEAA?AW4EventResult@@AEAVServerInstance@@@Z
    MCVAPI ::EventResult onStartLeaveGame(class ServerInstance& instance);

    // NOLINTEND
};
