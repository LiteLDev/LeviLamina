#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"
#include "mc/world/events/ServerInstanceEventListener.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerInstance;
struct ChatEvent;
struct PlayerSayCommandEvent;
struct PlayerTellCommandEvent;
struct PlayerTellRawCommandEvent;
struct PlayerTitleCommandEvent;
struct PlayerTitleRawCommandEvent;
struct ServerInstanceLeaveGameDoneEvent;
// clang-format on

class ChatLoggingEventListener : public ::EventListenerDispatcher<::ServerInstanceEventListener>,
                                 public ::EventListenerDispatcher<::ServerNetworkEventListener>,
                                 public ::EventListenerDispatcher<::PlayerEventListener>,
                                 public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mLogFilePath;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>         mLogFile;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mPreviousFileWriteTask;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatLoggingEventListener() /*override*/;

    virtual ::EventResult onEvent(::ChatEvent const&) /*override*/;

    virtual ::EventResult onEvent(::ServerInstanceLeaveGameDoneEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerSayCommandEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerTellCommandEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerTellRawCommandEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerTitleCommandEvent const&) /*override*/;

    virtual ::EventResult onEvent(::PlayerTitleRawCommandEvent const&) /*override*/;

    virtual ::EventResult onServerInitializeStart(::ServerInstance& instance) /*override*/;

    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;

    virtual ::EventResult onLevelRemovedPlayer(::Player&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatLoggingEventListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
