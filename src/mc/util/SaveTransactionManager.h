#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

class SaveTransactionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnk5ac7c8;
    ::ll::UntypedStorage<8, 336> mUnk54446c;
    ::ll::UntypedStorage<8, 64>  mUnk97a76d;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveTransactionManager& operator=(SaveTransactionManager const&);
    SaveTransactionManager(SaveTransactionManager const&);
    SaveTransactionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaveTransactionManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SaveTransactionManager(
        ::WorkerPool&               workerPool,
        ::Scheduler&                scheduler,
        ::std::function<void(bool)> showIconFunction
    );

    MCAPI void _hideGlobalSaveIcon();

    MCAPI void _showGlobalSaveIcon();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::function<void(bool)> showIconFunction);
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
