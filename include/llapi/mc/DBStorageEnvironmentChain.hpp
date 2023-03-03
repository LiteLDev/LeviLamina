/**
 * @file  DBStorageEnvironmentChain.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DBStorageEnvironmentChain.
 *
 */
class DBStorageEnvironmentChain {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGEENVIRONMENTCHAIN
public:
    class DBStorageEnvironmentChain& operator=(class DBStorageEnvironmentChain const &) = delete;
    DBStorageEnvironmentChain(class DBStorageEnvironmentChain const &) = delete;
    DBStorageEnvironmentChain() = delete;
#endif

public:
    /**
     * @symbol  ??0DBStorageEnvironmentChain\@\@QEAA\@AEBUDBStorageConfig\@\@AEBVPath\@Core\@\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI DBStorageEnvironmentChain(struct DBStorageConfig const &, class Core::Path const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    /**
     * @symbol  ?getCompactionListenerEnv\@DBStorageEnvironmentChain\@\@QEBAPEAVCompactionListenerEnv\@\@XZ
     */
    MCAPI class CompactionListenerEnv * getCompactionListenerEnv() const;
    /**
     * @symbol  ?getFlushableEnv\@DBStorageEnvironmentChain\@\@QEBAPEAVFlushableEnv\@\@XZ
     */
    MCAPI class FlushableEnv * getFlushableEnv() const;
    /**
     * @symbol  ?getRootEnv\@DBStorageEnvironmentChain\@\@QEBAPEAVEnv\@leveldb\@\@XZ
     */
    MCAPI class leveldb::Env * getRootEnv() const;
    /**
     * @symbol  ?getSnapshotEnv\@DBStorageEnvironmentChain\@\@QEBAPEAVSnapshotEnv\@\@XZ
     */
    MCAPI class SnapshotEnv * getSnapshotEnv() const;
    /**
     * @symbol  ?isChainValid\@DBStorageEnvironmentChain\@\@QEBA?AVResult\@Core\@\@_N\@Z
     */
    MCAPI class Core::Result isChainValid(bool) const;
    /**
     * @symbol  ?onFlush\@DBStorageEnvironmentChain\@\@QEAAXXZ
     */
    MCAPI void onFlush();
    /**
     * @symbol  ??1DBStorageEnvironmentChain\@\@QEAA\@XZ
     */
    MCAPI ~DBStorageEnvironmentChain();
    /**
     * @symbol  ?isContentKeyValid\@DBStorageEnvironmentChain\@\@SA_NPEAVEnv\@leveldb\@\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@8\@\@Z
     */
    MCAPI static bool isContentKeyValid(class leveldb::Env *, class Core::Path const &, class ContentIdentity const &, std::string const &, class std::shared_ptr<class Core::FileStorageArea>);

//private:
    /**
     * @symbol  ?createFlushableEnv\@DBStorageEnvironmentChain\@\@CA?AV?$unique_ptr\@VFlushableEnv\@\@U?$default_delete\@VFlushableEnv\@\@\@std\@\@\@std\@\@PEAVEnv\@leveldb\@\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@3\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(class leveldb::Env *, class std::shared_ptr<class Core::FileStorageArea>, class Core::Path const &);

private:

};