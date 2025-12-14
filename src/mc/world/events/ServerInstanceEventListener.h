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
    // ServerInstanceEventListener inner types define
    using EventType = ::ServerInstanceNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventListener() = default;

    virtual ::EventResult onServerInitializeStart(::ServerInstance& instance);

    virtual ::EventResult onServerInitializeEnd(::ServerInstance& instance);

    virtual ::EventResult onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    virtual ::EventResult onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    virtual ::EventResult onServerUpdateStart(::ServerInstance& instance);

    virtual ::EventResult onServerUpdateEnd(::ServerInstance& instance);

    virtual ::EventResult onServerSuspend(::ServerInstance& instance);

    virtual ::EventResult onServerResume(::ServerInstance& instance);

    virtual ::EventResult onServerThreadStarted(::ServerInstance& instance);

    virtual ::EventResult onServerThreadStopped(::ServerInstance& instance);

    virtual ::EventResult onStartLeaveGame(::ServerInstance& instance);

    virtual ::EventResult onEvent(::ServerInstanceNotificationEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onServerInitializeStart(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerInitializeEnd(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    MCFOLD ::EventResult $onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    MCFOLD ::EventResult $onServerUpdateStart(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerUpdateEnd(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerSuspend(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerResume(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerThreadStarted(::ServerInstance& instance);

    MCFOLD ::EventResult $onServerThreadStopped(::ServerInstance& instance);

    MCFOLD ::EventResult $onStartLeaveGame(::ServerInstance& instance);

    MCFOLD ::EventResult $onEvent(::ServerInstanceNotificationEvent const& event);


    // NOLINTEND
};
