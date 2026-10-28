#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class IAssetLoadWorkQueue;
class ResourceLoadManager;
class ServerNetworkSystem;
class TaskGroup;
struct AssetWorkExecutionPolicy;
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

    virtual ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> createWorkQueue() = 0;

    virtual void executeWorkQueue(
        ::ResourceLoadType                                        type,
        ::AssetWorkExecutionPolicy                                policy,
        ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> work
    ) = 0;

    virtual ::ServerInitialization::ServerInitResult completeWithResult(
        ::Bedrock::Threading::Async<bool>        initialized,
        ::std::shared_ptr<::ServerNetworkSystem> network
    ) = 0;

    virtual ::ServerInitialization::ServerInitResult fail() = 0;

    virtual void storeAbortToken(::std::shared_ptr<void> token) = 0;

    virtual ::std::shared_ptr<void> _abort() = 0;
    // NOLINTEND
};

} // namespace ServerInitialization
