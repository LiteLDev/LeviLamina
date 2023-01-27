/**
 * @file  MinecraftWorkerPool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   -362357394
     * @symbol  ?ASYNC\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;
    /**
     * @hash   220380976
     * @symbol  ?CONNECTEDSTORAGE\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;
    /**
     * @hash   -1520865536
     * @symbol  ?DISK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;
    /**
     * @hash   -1438199906
     * @symbol  ?GAMEFACE_LAYOUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> GAMEFACE_LAYOUT;
    /**
     * @hash   1427153998
     * @symbol  ?INPUT\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;
    /**
     * @hash   1123934510
     * @symbol  ?LEVELDB\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;
    /**
     * @hash   1409902816
     * @symbol  ?LEVELDB_COMPACTION\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;
    /**
     * @hash   -813927538
     * @symbol  ?NETWORK\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;
    /**
     * @hash   1689496318
     * @symbol  ?PYTHONRUNTIME\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;
    /**
     * @hash   -2030135266
     * @symbol  ?RENDERING\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;
    /**
     * @hash   2006589392
     * @symbol  ?VR\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;
    /**
     * @hash   -1279479584
     * @symbol  ?WATCHDOG\@MinecraftWorkerPool\@\@2V?$NonOwnerPointer\@VWorkerPool\@\@\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;
    /**
     * @hash   -1507415963
     * @symbol  ?configureMainThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureMainThread();
    /**
     * @hash   -455828103
     * @symbol  ?configureServerThread\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void configureServerThread();
    /**
     * @hash   -2091988167
     * @symbol  ?createSingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void createSingletons();
    /**
     * @hash   -1206023257
     * @symbol  ?destroySingletons\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void destroySingletons();
    /**
     * @hash   2017702981
     * @symbol  ?initializeDefaults\@MinecraftWorkerPool\@\@SAXXZ
     */
    MCAPI static void initializeDefaults();
    /**
     * @hash   1327756715
     * @symbol  ?loadWorkerConfigurations\@MinecraftWorkerPool\@\@SAXII\@Z
     */
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int);

};