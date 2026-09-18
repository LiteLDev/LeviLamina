#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/server/server_initialization/IServerInitializer.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ServerNetworkSystem;
class TaskGroup;
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {

class ServerInitializer : public ::ServerInitialization::IServerInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk4229a2;
    ::ll::UntypedStorage<8, 336> mUnk60f6f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInitializer& operator=(ServerInitializer const&);
    ServerInitializer(ServerInitializer const&);
    ServerInitializer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::TaskGroup& getTaskGroup() /*override*/;

    virtual ::ServerInitialization::ServerInitResult completeWithResult(
        ::Bedrock::Threading::Async<bool>        initialized,
        ::std::shared_ptr<::ServerNetworkSystem> network
    ) /*override*/;

    virtual ::ServerInitialization::ServerInitResult fail() /*override*/;

    virtual ::Bedrock::Threading::Async<void> createResourceLoadManager() /*override*/;

    virtual ::Bedrock::Threading::Async<void> executeResourceLoadTasks() /*override*/;

    virtual ::ResourceLoadManager* tryGetResourceLoadManager() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::TaskGroup& $getTaskGroup();

    MCNAPI ::ServerInitialization::ServerInitResult $completeWithResult(
        ::Bedrock::Threading::Async<bool>        initialized,
        ::std::shared_ptr<::ServerNetworkSystem> network
    );

    MCNAPI ::ServerInitialization::ServerInitResult $fail();

    MCNAPI ::Bedrock::Threading::Async<void> $createResourceLoadManager();

    MCNAPI ::Bedrock::Threading::Async<void> $executeResourceLoadTasks();

    MCNAPI ::ResourceLoadManager* $tryGetResourceLoadManager();


    // NOLINTEND
};

} // namespace ServerInitialization
