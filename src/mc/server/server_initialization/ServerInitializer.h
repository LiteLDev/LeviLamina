#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/ResourceLoadType.h"
#include "mc/server/server_initialization/IServerInitializer.h"

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

class ServerInitializer : public ::ServerInitialization::IServerInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk158557;
    ::ll::UntypedStorage<8, 16>  mUnk51034f;
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

    virtual ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> createWorkQueue() /*override*/;

    virtual void executeWorkQueue(
        ::ResourceLoadType                                        type,
        ::AssetWorkExecutionPolicy                                policy,
        ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> work
    ) /*override*/;

    virtual void storeAbortToken(::std::shared_ptr<void> token) /*override*/;

    virtual ::std::shared_ptr<void> _abort() /*override*/;
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

    MCNAPI ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> $createWorkQueue();

    MCNAPI void $executeWorkQueue(
        ::ResourceLoadType                                        type,
        ::AssetWorkExecutionPolicy                                policy,
        ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> work
    );

    MCNAPI void $storeAbortToken(::std::shared_ptr<void> token);

    MCNAPI ::std::shared_ptr<void> $_abort();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ServerInitialization
