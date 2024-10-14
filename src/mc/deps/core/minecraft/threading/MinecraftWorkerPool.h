#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class MinecraftWorkerPool {
public:
    // prevent constructor by default
    MinecraftWorkerPool& operator=(MinecraftWorkerPool const&);
    MinecraftWorkerPool(MinecraftWorkerPool const&);
    MinecraftWorkerPool();

public:
    // NOLINTBEGIN
    MCAPI static void configureMainThread();

    MCAPI static void configureServerThread();

    MCAPI static void createSingletons();

    MCAPI static void destroySingletons();

    MCAPI static void initializeDefaults();

    MCAPI static void loadWorkerConfigurations(uint highPowerCores, uint totalCores);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& ASYNC();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& CONNECTEDSTORAGE();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& DISK();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& GAMEFACE_LAYOUT();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& INPUT();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& LEVELDB();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& LEVELDB_COMPACTION();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& NETWORK();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& PYTHONRUNTIME();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& RENDERING();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& RENDERING_HELPERS();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& VR();

    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool>& WATCHDOG();

    // NOLINTEND
};
