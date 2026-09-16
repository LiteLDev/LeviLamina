#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/IBackgroundTaskOwner.h"
#include "mc/deps/core/threading/TaskStartInfo.h"
#include "mc/platform/brstd/move_only_function.h"

// clang-format off
class TaskResult;
// clang-format on

template <typename T0, typename T1>
class BackgroundTask : public ::BackgroundTaskBase {
public:
    // The task details base, the lock and the completion-handler vector are containers this
    // repository has not reconstructed, so they are pinned down by size only. Everything after them
    // has to sit at the offset the game gives it.
    ::ll::UntypedStorage<8, 88> mUnkDetails;          // 0x70 TaskDetails::BackgroundTaskDetails<T0, T1>
    ::ll::UntypedStorage<8, 80> mUnkLock;             // 0xC8 Bedrock::Threading::Mutex
    ::ll::UntypedStorage<4, 4>  mUnkStatus;           // 0x118 TaskStatus
    ::ll::UntypedStorage<8, 24> mUnkComplete;         // 0x120 vector<CompletionHandlerInfo>
    ::ll::UntypedStorage<1, 1>  mUnkLinkCancellation; // 0x138 bool
    ::ll::UntypedStorage<8, 16> mUnkPredecessor;      // 0x140 Bedrock::Threading::SharedAsync<T1>

public:
    MCAPI static ::std::shared_ptr<::BackgroundTask<T0, T1>> create(
        ::gsl::not_null<::IBackgroundTaskOwner*> owner,
        ::TaskStartInfo const&                   startInfo,
        ::Bedrock::Threading::Async<T1>          predecessor,
        bool                                     isAsync,
        ::brstd::move_only_function<T0()>        task
    );
};
