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
    MCNAPI SaveTransactionManager(
        ::WorkerPool&               workerPool,
        ::Scheduler&                scheduler,
        ::std::function<void(bool)> showIconFunction
    );

    MCNAPI void _hideGlobalSaveIcon();

    MCNAPI void _showGlobalSaveIcon();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::function<void(bool)> showIconFunction);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
