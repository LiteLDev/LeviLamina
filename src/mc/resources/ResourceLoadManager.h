#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
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
        ::ll::UntypedStorage<8, 8>  mUnk448294;
        ::ll::UntypedStorage<4, 4>  mUnkfb510f;
        ::ll::UntypedStorage<8, 8>  mUnk6c2afd;
        ::ll::UntypedStorage<8, 24> mUnk43122d;
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
#ifdef LL_PLAT_C
        MCNAPI ::Bedrock::Threading::Async<void>
        queueAsync(::brstd::move_only_function<::TaskResult()> callback, uint taskPriority);

        MCNAPI ::Bedrock::Threading::Async<void>
        queueSync(::brstd::move_only_function<::TaskResult()> callback, uint taskPriority);

        MCNAPI ~ResourceLoadTaskGroup();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk641f6f;
    ::ll::UntypedStorage<8, 8>  mUnkbc3f4e;
    ::ll::UntypedStorage<8, 8>  mUnk833b4d;
    ::ll::UntypedStorage<8, 16> mUnk2466a3;
    ::ll::UntypedStorage<8, 8>  mUnkb77267;
    ::ll::UntypedStorage<1, 1>  mUnk8953d0;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceLoadManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ResourceLoadManager();

    MCNAPI void _initializeResourceLoadTaskGroups();

    MCNAPI bool areDependenciesLoaded(::ResourceLoadType resourceLoadType) const;

    MCNAPI bool isComplete() const;

    MCNAPI bool isComplete(::ResourceLoadType resourceLoadType) const;

    MCNAPI void printRunningTasks();
#endif

    MCNAPI ::Bedrock::Threading::Async<void> queue(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<void> queueAsync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI ::Bedrock::Threading::Async<void> queueSync(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> callback,
        uint                                        taskPriority
    );

    MCNAPI void setAppSuspended(bool suspended);

    MCNAPI bool softCancel();

    MCNAPI void sync(::ResourceLoadType resourceLoadType);

    MCNAPI void update();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void queueChild(
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
