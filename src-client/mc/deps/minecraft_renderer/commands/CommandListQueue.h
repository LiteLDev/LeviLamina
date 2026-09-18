#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/deps/core_graphics/tasks/LambdaExecutor.h"
#include "mc/deps/core_graphics/tasks/SpecializedScopedFrame.h"
#include "mc/deps/core_graphics/tasks/TaskDispatcher.h"
#include "mc/deps/core_graphics/tasks/TaskPoolGroupExecutionPolicy.h"
#include "mc/deps/core_graphics/tasks/TaskScheduler.h"
#include "mc/deps/minecraft_renderer/commands/CommandListTaskContext.h"

// auto generated forward declare list
// clang-format off
class CommandListFuture;
class Scheduler;
class WorkerPool;
struct ThreadedFrameConstantsContainer;
namespace cg { struct GroupPoolDescription; }
namespace mce { class RenderDevice; }
// clang-format on

class CommandListQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CommandListTaskContext> mGlobalContext;
    ::ll::TypedStorage<1, 1, bool>                      mIsAsync;
    ::ll::TypedStorage<
        8,
        16,
        ::cg::TaskDispatcher<::cg::TaskScheduler<::cg::LambdaExecutor<
            nullptr_t,
            ::cg::TaskPoolGroupExecutionPolicy<nullptr_t, 1>,
            ::std::string const&,
            ::std::vector<::cg::GroupPoolDescription> const&,
            ::std::vector<::std::thread::id> const&>>>>
        mDragonDispatcher;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::cg::details::SpecializedScopedFrame<
            ::cg::TaskDispatcher<::cg::TaskScheduler<::cg::LambdaExecutor<
                nullptr_t,
                ::cg::TaskPoolGroupExecutionPolicy<nullptr_t, 1>,
                ::std::string const&,
                ::std::vector<::cg::GroupPoolDescription> const&,
                ::std::vector<::std::thread::id> const&>>>::TaskDispatcherExecution,
            void>>>
        mDragonDispatcherScope;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::ThreadedFrameConstantsContainer,
            ::std::allocator<::ThreadedFrameConstantsContainer>>>
        mPerThreadContextConstants;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandListQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandListQueue(
        ::mce::RenderDevice&,
        ::Scheduler&                                        renderingScheduler,
        ::WorkerPool*                                       renderingPool,
        ::gsl::span<::std::reference_wrapper<::WorkerPool>> helperPools
    );

    MCAPI void generateAndQueue(::std::function<void(::CommandListTaskContext&)> func);

    MCAPI ::CommandListFuture generateAsync(::std::function<void(::CommandListTaskContext&)> func);

    MCAPI bool isAsync() const;

    MCAPI void processCommandLists();

    MCAPI void queue(::buffer_span_mut<::CommandListFuture> futures);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::RenderDevice&,
        ::Scheduler&                                        renderingScheduler,
        ::WorkerPool*                                       renderingPool,
        ::gsl::span<::std::reference_wrapper<::WorkerPool>> helperPools
    );
    // NOLINTEND
};
