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
    enum class CoreConfigFlavor : int {
        LegacyCores             = 0,
        ClientRenderServerCores = 1,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void configureMainThread();

    MCAPI static void configureServerThread();

    MCAPI static void createSingletons();

    MCAPI static void destroySingletons();

    MCAPI static void initializeDefaults(::MinecraftWorkerPool::CoreConfigFlavor nxCoreConfigFlavor);

    MCAPI static void loadWorkerConfigurations(uint highPowerCores, uint totalCores);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& ASYNC();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& CONNECTEDSTORAGE();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& DISK();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& GAMEFACE_LAYOUT();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& INPUT();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& LEVELDB_COMPACTION();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& NETWORK();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& PYTHONRUNTIME();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& RENDERING_HELPERS();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& VR();

    MCAPI static ::Bedrock::NonOwnerPointer<::WorkerPool>& WATCHDOG();
    // NOLINTEND
};
