#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkQueue.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Bedrock::Threading::Burst::Strategy { class Console; }
namespace Bedrock::Threading::Burst::Strategy::Execution { class GreedyExecution; }
namespace Core { class DeferredTask; }
// clang-format on

namespace dragon::tasks {

class GraphicsTasks {
public:
    // GraphicsTasks inner types declare
    // clang-format off
    struct InitBgfx;
    struct InitEnd;
    struct InitFinalize;
    struct InitBegin;
    struct InitPending;
    struct InitializationState;
    // clang-format on

    // GraphicsTasks inner types define
    enum class ExecutionMode : int {
        Immediate          = 0,
        Deferred           = 1,
        RenderThreadLocked = 2,
        Unconstrained      = 3,
    };

    struct InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1e1d05;
        ::ll::UntypedStorage<1, 1>  mUnk6d4637;
        ::ll::UntypedStorage<4, 8>  mUnka149d7;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitBgfx& operator=(InitBgfx const&);
        InitBgfx(InitBgfx const&);
        InitBgfx();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~InitBgfx();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct InitEnd {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf9c94e;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitEnd& operator=(InitEnd const&);
        InitEnd(InitEnd const&);
        InitEnd();
    };

    struct InitFinalize {};

    struct InitBegin : public ::dragon::tasks::GraphicsTasks::InitBgfx {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~InitBegin();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct InitPending : public ::dragon::tasks::GraphicsTasks::InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk28428c;
        ::ll::UntypedStorage<8, 16> mUnk835481;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitPending& operator=(InitPending const&);
        InitPending(InitPending const&);
        InitPending();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::dragon::tasks::GraphicsTasks::InitPending& operator=(::dragon::tasks::GraphicsTasks::InitPending&&);

        MCNAPI_C ~InitPending();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

    struct InitializationState : public ::std::variant<
                                     ::std::monostate,
                                     ::dragon::tasks::GraphicsTasks::InitBegin,
                                     ::dragon::tasks::GraphicsTasks::InitPending,
                                     ::dragon::tasks::GraphicsTasks::InitFinalize,
                                     ::dragon::tasks::GraphicsTasks::InitEnd> {
    public:
        // prevent constructor by default
        InitializationState& operator=(InitializationState const&);
        InitializationState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C InitializationState(::dragon::tasks::GraphicsTasks::InitializationState&&);

        MCNAPI_C InitializationState(::dragon::tasks::GraphicsTasks::InitializationState const&);

        MCNAPI_C ~InitializationState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::dragon::tasks::GraphicsTasks::InitializationState&&);

        MCNAPI_C void* $ctor(::dragon::tasks::GraphicsTasks::InitializationState const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6a18a6;
    ::ll::UntypedStorage<1, 1>  mUnk8a7358;
    ::ll::UntypedStorage<1, 1>  mUnkcd79c5;
    ::ll::UntypedStorage<4, 4>  mUnk430d7c;
    ::ll::UntypedStorage<8, 8>  mUnk408564;
    ::ll::UntypedStorage<8, 24> mUnk81ab20;
    ::ll::UntypedStorage<8, 8>  mUnkc29824;
    ::ll::UntypedStorage<8, 16> mUnk98af7b;
    ::ll::UntypedStorage<8, 16> mUnke9e17e;
    ::ll::UntypedStorage<8, 16> mUnk540e7a;
    ::ll::UntypedStorage<8, 16> mUnke12cd2;
    ::ll::UntypedStorage<8, 16> mUnk58e5f1;
    ::ll::UntypedStorage<8, 16> mUnkc8a6de;
    ::ll::UntypedStorage<8, 16> mUnk9bafe7;
    ::ll::UntypedStorage<8, 88> mUnk6f2218;
    ::ll::UntypedStorage<8, 16> mUnka908bc;
    ::ll::UntypedStorage<8, 16> mUnk2c8251;
    ::ll::UntypedStorage<8, 8>  mUnk79ea81;
    ::ll::UntypedStorage<4, 4>  mUnk20cffb;
    ::ll::UntypedStorage<8, 8>  mUnkb1d24c;
    ::ll::UntypedStorage<8, 8>  mUnk6421c7;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsTasks& operator=(GraphicsTasks const&);
    GraphicsTasks(GraphicsTasks const&);
    GraphicsTasks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C GraphicsTasks(
        ::WorkerPool&                                       rendererPool,
        ::gsl::span<::std::reference_wrapper<::WorkerPool>> helperPools,
        ::Scheduler&                                        clientScheduler
    );

    MCNAPI_C bool _executeSynchronousRenderOperation(::std::function<void()> const& callback);

    MCNAPI_C void _forCounter(
        uint64                               count,
        ::std::function<void(uint64)> const& workerCallback,
        ::std::function<void(uint)> const&   resolveCallback
    );

    MCNAPI_C bool _queueMainFrameRenderTask(::std::function<void()> const& callback);

    MCNAPI_C void _waitUntilCompleted(::std::shared_ptr<::Core::DeferredTask> task);

    MCNAPI_C ::dragon::tasks::GraphicsTasks::InitializationState
    continueInit(::dragon::tasks::GraphicsTasks::InitializationState state);

    MCNAPI_C void frame(
        ::std::function<void()> const&                                                 frameContentCallback,
        ::std::function<::std::chrono::nanoseconds(::std::chrono::nanoseconds)> const& computeSleepDuration
    );

    MCNAPI_C bool previousFrameComplete();

    MCNAPI_C void queueResourcesTask(::std::function<void()> const& task);

    MCNAPI_C void waitForPreviousFrame();

    MCNAPI_C ~GraphicsTasks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::WorkerPool&                                       rendererPool,
        ::gsl::span<::std::reference_wrapper<::WorkerPool>> helperPools,
        ::Scheduler&                                        clientScheduler
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace dragon::tasks
