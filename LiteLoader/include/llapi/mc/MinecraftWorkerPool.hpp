/**
 * @file  MinecraftWorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1472804426
     * @symbol ?ASYNC@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;
    /**
     * @hash   -890066056
     * @symbol ?CONNECTEDSTORAGE@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;
    /**
     * @hash   1663654728
     * @symbol ?DISK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;
    /**
     * @hash   316706966
     * @symbol ?INPUT@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;
    /**
     * @hash   13487478
     * @symbol ?LEVELDB@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;
    /**
     * @hash   299455784
     * @symbol ?LEVELDB_COMPACTION@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;
    /**
     * @hash   -1924374570
     * @symbol ?NETWORK@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;
    /**
     * @hash   579049286
     * @symbol ?PYTHONRUNTIME@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;
    /**
     * @hash   1154384998
     * @symbol ?RENDERING@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;
    /**
     * @hash   896142360
     * @symbol ?VR@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;
    /**
     * @hash   1905040680
     * @symbol ?WATCHDOG@MinecraftWorkerPool@@2V?$NonOwnerPointer@VWorkerPool@@@Bedrock@@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;
    /**
     * @hash   -1766424683
     * @symbol ?configureMainThread@MinecraftWorkerPool@@SAXXZ
     */
    MCAPI static void configureMainThread();
    /**
     * @hash   -714836823
     * @symbol ?configureServerThread@MinecraftWorkerPool@@SAXXZ
     */
    MCAPI static void configureServerThread();
    /**
     * @hash   1943970409
     * @symbol ?createSingletons@MinecraftWorkerPool@@SAXXZ
     */
    MCAPI static void createSingletons();
    /**
     * @hash   -1465354873
     * @symbol ?destroySingletons@MinecraftWorkerPool@@SAXXZ
     */
    MCAPI static void destroySingletons();
    /**
     * @hash   1925816005
     * @symbol ?initializeDefaults@MinecraftWorkerPool@@SAXXZ
     */
    MCAPI static void initializeDefaults();
    /**
     * @hash   1070193339
     * @symbol ?loadWorkerConfigurations@MinecraftWorkerPool@@SAXII@Z
     */
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int);

};