#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class AsyncCommandExecutor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // AsyncCommandExecutor inner types declare
    // clang-format off
    struct OperationData;
    // clang-format on

    // AsyncCommandExecutor inner types define
    enum class State : int {
        Idle       = 0,
        InProgress = 1,
    };

    struct OperationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::std::optional<::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>>>
            mResult;
        // NOLINTEND
    };

    using ExternalOperationCallback = ::std::function<void(::std::shared_ptr<::AsyncCommandExecutor::OperationData>)>;

    using Operation = ::std::function<::Bedrock::Result<void>()>;

    using Result = ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>;

    using ResultOperationCallback =
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>   mStateLock;
    ::ll::TypedStorage<4, 4, ::AsyncCommandExecutor::State>  mCurrentState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mAsyncTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncCommandExecutor() /*override*/ = default;
    // NOLINTEND
};
