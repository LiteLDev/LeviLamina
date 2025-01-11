#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
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
    class ResourceLoadTaskGroup;
    class TaskGroupState;
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
        ::ll::UntypedStorage<8, 48> mUnk7c73b1;
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
        MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(
            ::brstd::move_only_function<::TaskResult()> threadedCallback,
            ::std::function<void()>                     mainThreadCallback,
            uint                                        taskPriority
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
    // vIndex: 0
    virtual ~ResourceLoadManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool cancel(::ResourceLoadType resourceLoadType);

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(
        ::ResourceLoadType                          resourceLoadType,
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::function<void()> _wrapMainThreadCallback(
        ::ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        ::std::function<void()>&&                     mainThreadCallback
    );

    MCAPI static ::brstd::move_only_function<::TaskResult()> _wrapTaskCallback(
        ::ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        ::brstd::move_only_function<::TaskResult()>&& threadedCallback
    );

    MCAPI static void queueChild(
        ::brstd::move_only_function<::TaskResult()> threadedCallback,
        ::std::function<void()>                     mainThreadCallback,
        uint                                        taskPriority
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
