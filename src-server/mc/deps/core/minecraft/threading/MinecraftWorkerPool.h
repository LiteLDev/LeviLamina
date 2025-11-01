#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
// clang-format on

class MinecraftWorkerPool {
public:
    // MinecraftWorkerPool inner types define
    enum class UseAsyncOrDiskPoolForLoading : int {
        Async = 0,
        Disk = 1,
    };
    
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void configureMainThread();

    MCNAPI static void createSingletons();

    MCNAPI static void destroySingletons();

    MCNAPI static void loadWorkerConfigurations(uint highPowerCores, uint totalCores);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& ASYNC();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& CONNECTEDSTORAGE();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& DISK();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& GAMEFACE_LAYOUT();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& INPUT();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB_COMPACTION();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& NETWORK();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& PYTHONRUNTIME();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING_HELPERS();

    MCNAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& WATCHDOG();
    // NOLINTEND

};
