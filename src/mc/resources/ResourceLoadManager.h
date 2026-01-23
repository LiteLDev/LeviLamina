#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskResult;
class WorkerPool;
// clang-format on

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoadManager inner types declare
    // clang-format off
    struct LoadOrder;
    class TaskGroupState;
    class ResourceLoadTaskGroup;
    // clang-format on

    // ResourceLoadManager inner types define
    struct LoadOrder {};

    class TaskGroupState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkfc3423;
        ::ll::UntypedStorage<8, 8> mUnkeadda9;
        // NOLINTEND

    public:
        // prevent constructor by default
        TaskGroupState& operator=(TaskGroupState const&);
        TaskGroupState(TaskGroupState const&);
        TaskGroupState();
    };

    class ResourceLoadTaskGroup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 3>  mUnkb71d1e;
        ::ll::UntypedStorage<4, 4>  mUnkfb510f;
        ::ll::UntypedStorage<8, 8>  mUnk5decd4;
        ::ll::UntypedStorage<8, 24> mUnkbd7168;
        ::ll::UntypedStorage<8, 16> mUnkac15ed;
        ::ll::UntypedStorage<1, 1>  mUnkd78565;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceLoadTaskGroup& operator=(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ResourceLoadTaskGroup(
            ::std::string_view                groupName,
            ::ResourceLoadType                loadType,
            ::std::vector<::ResourceLoadType> dependencies,
            ::Scheduler&                      scheduler,
            ::WorkerPool&                     workerPool
        );

        MCNAPI ::Bedrock::Threading::Async<void> queue(
            ::brstd::move_only_function<::TaskResult()> threadedCallback,
            ::std::function<void()>                     mainThreadCallback,
            uint                                        taskPriority
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(
            ::std::string_view                groupName,
            ::ResourceLoadType                loadType,
            ::std::vector<::ResourceLoadType> dependencies,
            ::Scheduler&                      scheduler,
            ::WorkerPool&                     workerPool
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk641f6f;
    ::ll::UntypedStorage<8, 8>  mUnkbc3f4e;
    ::ll::UntypedStorage<8, 8>  mUnk833b4d;
    ::ll::UntypedStorage<8, 16> mUnk174289;
    ::ll::UntypedStorage<8, 8>  mUnkb77267;
    ::ll::UntypedStorage<1, 1>  mUnk8953d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ResourceLoadManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ResourceLoadManager() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _cancel();

    MCNAPI_C void _initializeResourceLoadTaskGroups();

    MCNAPI void
    _prepareTaskGroupToRunAgain(::gsl::not_null<::ResourceLoadManager::ResourceLoadTaskGroup*> resourceLoadTaskGroup);

    MCNAPI_C bool isComplete() const;

    MCNAPI_C bool isComplete(::ResourceLoadType resourceLoadType) const;

    MCNAPI_C void printRunningTasks();

    MCNAPI ::Bedrock::Threading::Async<void> queue(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );

    MCNAPI_C ::Bedrock::Threading::Async<void> queueAsync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI_C ::Bedrock::Threading::Async<void> queueSync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI_C void registerResourceLoadTaskGroup(
        ::std::string_view                groupName,
        ::ResourceLoadType                resourceLoadType,
        ::std::vector<::ResourceLoadType> dependencies
    );

    MCNAPI bool softCancel(::ResourceLoadType resourceLoadType);

    MCNAPI_C void sync(::ResourceLoadType resourceLoadType);

    MCNAPI_C void update();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::function<void()> _wrapMainThreadCallback(
        ::ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        ::std::function<void()>&&                     mainThreadCallback
    );

    MCNAPI static ::brstd::move_only_function<::TaskResult()> _wrapTaskCallback(
        ::ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        ::brstd::move_only_function<::TaskResult()>&& threadedCallback
    );

    MCNAPI static void queueChild(
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
