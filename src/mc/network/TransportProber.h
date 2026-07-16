#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

class TransportProber : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Result<::std::string>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk29e78d;
    ::ll::UntypedStorage<8, 336> mUnk515969;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportProber& operator=(TransportProber const&);
    TransportProber(TransportProber const&);
    TransportProber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportProber() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TransportProber(::std::vector<::std::string> urls, ::WorkerPool& workerPool, ::Scheduler& scheduler);

    MCNAPI void start();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::vector<::std::string> urls, ::WorkerPool& workerPool, ::Scheduler& scheduler);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
