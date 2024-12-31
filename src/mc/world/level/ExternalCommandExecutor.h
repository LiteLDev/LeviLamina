#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
// clang-format on

class ExternalCommandExecutor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ExternalCommandExecutor inner types declare
    // clang-format off
    struct OperationData;
    // clang-format on

    // ExternalCommandExecutor inner types define
    enum class State : int {
        Idle       = 0,
        InProgress = 1,
    };

    struct OperationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk494696;
        // NOLINTEND

    public:
        // prevent constructor by default
        OperationData& operator=(OperationData const&);
        OperationData(OperationData const&);
        OperationData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkaf12a0;
    ::ll::UntypedStorage<4, 4>  mUnk86b87f;
    ::ll::UntypedStorage<8, 8>  mUnk6814a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalCommandExecutor& operator=(ExternalCommandExecutor const&);
    ExternalCommandExecutor(ExternalCommandExecutor const&);
    ExternalCommandExecutor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalCommandExecutor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExternalCommandExecutor(::Scheduler& scheduler);

    MCAPI ::std::shared_ptr<
        ::Bedrock::Threading::IAsyncResult<::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>>>
    _enqueueExternalOperationTasks(
        ::std::function<void(::std::shared_ptr<::ExternalCommandExecutor::OperationData>)> externalTask
    );

    MCAPI bool buildDataDirectory(
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>&)> operationCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scheduler& scheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
