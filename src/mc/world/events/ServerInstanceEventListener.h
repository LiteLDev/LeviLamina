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
    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerInitializeEnd(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    MCNAPI ::EventResult $onServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    MCNAPI ::EventResult $onServerUpdateStart(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerUpdateEnd(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerSuspend(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerResume(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerThreadStarted(::ServerInstance& instance);

    MCNAPI ::EventResult $onServerThreadStopped(::ServerInstance& instance);

    MCNAPI ::EventResult $onStartLeaveGame(::ServerInstance& instance);

    MCNAPI ::EventResult $onEvent(::ServerInstanceNotificationEvent const& event);


    // NOLINTEND
};
