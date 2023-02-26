/**
 * @file  MinecraftWorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftWorkerPool.
 *
 */
class MinecraftWorkerPool {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTWORKERPOOL
public:
    class MinecraftWorkerPool& operator=(class MinecraftWorkerPool const &) = delete;
    MinecraftWorkerPool(class MinecraftWorkerPool const &) = delete;
    MinecraftWorkerPool() = delete;
#endif

public:
    /**
     * @symbol  ?ASYNC\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;
    /**
     * @symbol  ?CONNECTEDSTORAGE\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;
    /**
     * @symbol  ?DISK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;
    /**
     * @symbol  ?GAMEFACE_LAYOUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> GAMEFACE_LAYOUT;
    /**
     * @symbol  ?INPUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;
    /**
     * @symbol  ?LEVELDB\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;
    /**
     * @symbol  ?LEVELDB_COMPACTION\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;
    /**
     * @symbol  ?NETWORK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;
    /**
     * @symbol  ?PYTHONRUNTIME\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;
    /**
     * @symbol  ?RENDERING\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;
    /**
     * @symbol  ?VR\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;
    /**
     * @symbol  ?WATCHDOG\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;
    /**
     * @symbol  ?configureMainThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureMainThread();
    /**
     * @symbol  ?configureServerThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureServerThread();
    /**
     * @symbol  ?createSingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void createSingletons();
    /**
     * @symbol  ?destroySingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void destroySingletons();
    /**
     * @symbol  ?initializeDefaults\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void initializeDefaults();
    /**
     * @symbol  ?loadWorkerConfigurations\@MinecraftWorkerPool\@\@SAXII\@Z
     */
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int);

};