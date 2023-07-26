#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class MinecraftWorkerPool {

public:
    // prevent constructor by default
    MinecraftWorkerPool& operator=(MinecraftWorkerPool const&) = delete;
    MinecraftWorkerPool(MinecraftWorkerPool const&)            = delete;
    MinecraftWorkerPool()                                      = delete;

public:
    /**
     * @symbol ?configureMainThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureMainThread(); // NOLINT
    /**
     * @symbol ?configureServerThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureServerThread(); // NOLINT
    /**
     * @symbol ?createSingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void createSingletons(); // NOLINT
    /**
     * @symbol ?destroySingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void destroySingletons(); // NOLINT
    /**
     * @symbol ?initializeDefaults\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void initializeDefaults(); // NOLINT
    /**
     * @symbol ?loadWorkerConfigurations\@MinecraftWorkerPool\@\@SAXII\@Z
     */
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ?ASYNC\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC; // NOLINT
    /**
     * @symbol ?CONNECTEDSTORAGE\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE; // NOLINT
    /**
     * @symbol ?DISK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK; // NOLINT
    /**
     * @symbol ?GAMEFACE_LAYOUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> GAMEFACE_LAYOUT; // NOLINT
    /**
     * @symbol ?INPUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT; // NOLINT
    /**
     * @symbol ?LEVELDB\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB; // NOLINT
    /**
     * @symbol ?LEVELDB_COMPACTION\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION; // NOLINT
    /**
     * @symbol ?NETWORK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK; // NOLINT
    /**
     * @symbol ?PYTHONRUNTIME\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME; // NOLINT
    /**
     * @symbol ?RENDERING\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING; // NOLINT
    /**
     * @symbol ?RENDERING_HELPERS\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING_HELPERS; // NOLINT
    /**
     * @symbol ?VR\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR; // NOLINT
    /**
     * @symbol ?WATCHDOG\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG; // NOLINT
};
