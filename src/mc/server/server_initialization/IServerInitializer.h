#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ServerNetworkSystem;
class TaskGroup;
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {

class IServerInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerInitializer() = default;

    virtual ::TaskGroup& getTaskGroup() = 0;

    virtual ::Bedrock::Threading::Async<void> createResourceLoadManager() = 0;

    virtual ::Bedrock::Threading::Async<void> executeResourceLoadTasks() = 0;

    virtual ::ResourceLoadManager* tryGetResourceLoadManager() = 0;

    virtual ::ServerInitialization::ServerInitResult completeWithResult(
        ::Bedrock::Threading::Async<bool>        initialized,
        ::std::shared_ptr<::ServerNetworkSystem> network
    ) = 0;

    virtual ::ServerInitialization::ServerInitResult fail() = 0;
    // NOLINTEND
};

} // namespace ServerInitialization
