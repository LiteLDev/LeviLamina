#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class MinecraftWorkerPool {
public:
    // prevent constructor by default
    MinecraftWorkerPool& operator=(MinecraftWorkerPool const&);
    MinecraftWorkerPool(MinecraftWorkerPool const&);
    MinecraftWorkerPool();

public:
    // NOLINTBEGIN
    // symbol: ?configureMainThread@MinecraftWorkerPool@@SAXXZ
    MCAPI static void configureMainThread();

    // symbol: ?configureServerThread@MinecraftWorkerPool@@SAXXZ
    MCAPI static void configureServerThread();

    // symbol: ?createSingletons@MinecraftWorkerPool@@SAXXZ
    MCAPI static void createSingletons();

    // symbol: ?destroySingletons@MinecraftWorkerPool@@SAXXZ
    MCAPI static void destroySingletons();

    // symbol: ?initializeDefaults@MinecraftWorkerPool@@SAXXZ
    MCAPI static void initializeDefaults();

    // symbol: ?loadWorkerConfigurations@MinecraftWorkerPool@@SAXII@Z
    MCAPI static void loadWorkerConfigurations(uint highPowerCores, uint totalCores);

    // symbol: ?ASYNC@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;

    // symbol: ?CONNECTEDSTORAGE@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;

    // symbol: ?DISK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;

    // symbol: ?GAMEFACE_LAYOUT@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> GAMEFACE_LAYOUT;

    // symbol: ?INPUT@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;

    // symbol: ?LEVELDB@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;

    // symbol: ?LEVELDB_COMPACTION@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;

    // symbol: ?NETWORK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;

    // symbol: ?PYTHONRUNTIME@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;

    // symbol: ?RENDERING@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;

    // symbol: ?RENDERING_HELPERS@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING_HELPERS;

    // symbol: ?VR@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;

    // symbol: ?WATCHDOG@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;

    // NOLINTEND
};
