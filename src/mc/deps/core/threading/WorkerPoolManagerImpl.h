#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolManager.h"
#include "mc/deps/profiler/ThreadFrameType.h"

// auto generated forward declare list
// clang-format off
struct WorkerPoolConfig;
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class WorkerPoolManagerImpl : public ::Bedrock::WorkerPoolManager {
public:
    // WorkerPoolManagerImpl inner types declare
    // clang-format off
    struct PoolEntry;
    // clang-format on

    // WorkerPoolManagerImpl inner types define
    struct PoolEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk6f67eb;
        ::ll::UntypedStorage<8, 16> mUnke865a9;
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolEntry& operator=(PoolEntry const&);
        PoolEntry(PoolEntry const&);
        PoolEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2e7b67;
    ::ll::UntypedStorage<8, 80> mUnkf15882;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;

    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface>
    createWorkerPool(::std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&) /*override*/;

    virtual void tick() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
