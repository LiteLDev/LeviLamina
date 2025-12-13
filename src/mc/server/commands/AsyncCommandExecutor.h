#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

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
        ::ll::UntypedStorage<8, 80> mUnk8a8ae8;
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
    ::ll::UntypedStorage<8, 80> mUnk5416b7;
    ::ll::UntypedStorage<4, 4>  mUnke25e02;
    ::ll::UntypedStorage<8, 8>  mUnk262f82;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncCommandExecutor& operator=(AsyncCommandExecutor const&);
    AsyncCommandExecutor(AsyncCommandExecutor const&);
    AsyncCommandExecutor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncCommandExecutor() /*override*/ = default;
    // NOLINTEND
};
