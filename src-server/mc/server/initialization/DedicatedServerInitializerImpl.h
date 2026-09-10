#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/future.h"
#include "mc/server/initialization/IDedicatedServerInitializer.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TaskResult;
namespace DedicatedServerInitialization { struct ClassroomModeListenerDep; }
namespace DedicatedServerInitialization { struct NetworkSystemDep; }
namespace DedicatedServerInitialization { struct ServerInstanceDep; }
// clang-format on

namespace DedicatedServerInitialization {

class DedicatedServerInitializerImpl : public ::DedicatedServerInitialization::IDedicatedServerInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd6147c;
    ::ll::UntypedStorage<8, 64> mUnk9f0b58;
    ::ll::UntypedStorage<8, 64> mUnkd23692;
    ::ll::UntypedStorage<8, 24> mUnk335bce;
    ::ll::UntypedStorage<8, 8>  mUnk7059d0;
    ::ll::UntypedStorage<8, 8>  mUnkdc007d;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerInitializerImpl& operator=(DedicatedServerInitializerImpl const&);
    DedicatedServerInitializerImpl(DedicatedServerInitializerImpl const&);
    DedicatedServerInitializerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::DedicatedServerInitialization::IDedicatedServerInitializer::ServerInitTuple
    initializeServer(::TaskGroup& taskGroup) /*override*/;

    virtual ::Bedrock::Threading::Async<::std::error_code>
    signalingServiceSignIn(::DedicatedServerInitialization::NetworkSystemDep& system) /*override*/;

    virtual ::brstd::future<bool> initializeMultiplayerKeys() /*override*/;

    virtual ::std::unique_ptr<::DedicatedServerInitialization::ClassroomModeListenerDep>
    setupPostInitLevel(::DedicatedServerInitialization::ServerInstanceDep& server) /*override*/;

    virtual ::TaskResult requeueAfter(::std::chrono::milliseconds time) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::DedicatedServerInitialization::IDedicatedServerInitializer::ServerInitTuple
    $initializeServer(::TaskGroup& taskGroup);

    MCNAPI ::Bedrock::Threading::Async<::std::error_code>
    $signalingServiceSignIn(::DedicatedServerInitialization::NetworkSystemDep& system);

    MCNAPI ::brstd::future<bool> $initializeMultiplayerKeys();

    MCNAPI ::std::unique_ptr<::DedicatedServerInitialization::ClassroomModeListenerDep>
    $setupPostInitLevel(::DedicatedServerInitialization::ServerInstanceDep& server);

    MCNAPI ::TaskResult $requeueAfter(::std::chrono::milliseconds time);
    // NOLINTEND
};

} // namespace DedicatedServerInitialization
