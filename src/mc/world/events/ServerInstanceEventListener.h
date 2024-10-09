#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

class ServerInstanceEventListener {
public:
    // prevent constructor by default
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&);
    ServerInstanceEventListener(ServerInstanceEventListener const&);
    ServerInstanceEventListener();

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onServerInitializeEnd(class ServerInstance& instance);

    MCVAPI ::EventResult onServerInitializeStart(class ServerInstance& instance);

    MCVAPI ::EventResult onServerMinecraftInitialized(
        class ServerInstance&                               instance,
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft
    );

    MCVAPI ::EventResult onServerResume(class ServerInstance& instance);

    MCVAPI ::EventResult onServerSuspend(class ServerInstance& instance);

    MCVAPI ::EventResult onServerUpdateEnd(class ServerInstance& instance);

    MCVAPI ::EventResult onStartLeaveGame(class ServerInstance& instance);

    // NOLINTEND
};
