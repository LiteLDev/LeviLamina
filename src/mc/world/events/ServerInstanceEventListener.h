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
