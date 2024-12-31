#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
class ServerInstance;
struct ServerInstanceNotificationEvent;
// clang-format on

class ServerInstanceEventListener {
public:
    // prevent constructor by default
    ServerInstanceEventListener& operator=(ServerInstanceEventListener const&);
    ServerInstanceEventListener(ServerInstanceEventListener const&);
    ServerInstanceEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerInstanceEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onServerInitializeStart(::ServerInstance& instance);

    // vIndex: 2
    virtual ::EventResult onServerInitializeEnd(::ServerInstance& instance);

    // vIndex: 3
    virtual ::EventResult onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    // vIndex: 4
    virtual ::EventResult onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    // vIndex: 5
    virtual ::EventResult onServerUpdateStart(::ServerInstance& instance);

    // vIndex: 6
    virtual ::EventResult onServerUpdateEnd(::ServerInstance& instance);

    // vIndex: 7
    virtual ::EventResult onServerSuspend(::ServerInstance& instance);

    // vIndex: 8
    virtual ::EventResult onServerResume(::ServerInstance& instance);

    // vIndex: 9
    virtual ::EventResult onServerThreadStarted(::ServerInstance& instance);

    // vIndex: 10
    virtual ::EventResult onServerThreadStopped(::ServerInstance& instance);

    // vIndex: 11
    virtual ::EventResult onStartLeaveGame(::ServerInstance& instance);

    // vIndex: 12
    virtual ::EventResult onEvent(::ServerInstanceNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onServerInitializeStart(::ServerInstance& instance);

    MCAPI ::EventResult $onServerInitializeEnd(::ServerInstance& instance);

    MCAPI ::EventResult $onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    MCAPI ::EventResult $onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    MCAPI ::EventResult $onServerUpdateStart(::ServerInstance& instance);

    MCAPI ::EventResult $onServerUpdateEnd(::ServerInstance& instance);

    MCAPI ::EventResult $onServerSuspend(::ServerInstance& instance);

    MCAPI ::EventResult $onServerResume(::ServerInstance& instance);

    MCAPI ::EventResult $onServerThreadStarted(::ServerInstance& instance);

    MCAPI ::EventResult $onServerThreadStopped(::ServerInstance& instance);

    MCAPI ::EventResult $onStartLeaveGame(::ServerInstance& instance);

    MCAPI ::EventResult $onEvent(::ServerInstanceNotificationEvent const& event);
    // NOLINTEND
};
