#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class DBStorageEnvironmentChain {

public:
    // prevent constructor by default
    DBStorageEnvironmentChain& operator=(DBStorageEnvironmentChain const&) = delete;
    DBStorageEnvironmentChain(DBStorageEnvironmentChain const&)            = delete;
    DBStorageEnvironmentChain()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0DBStorageEnvironmentChain\@\@QEAA\@AEBUDBStorageConfig\@\@AEBVPath\@Core\@\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI
    DBStorageEnvironmentChain(struct DBStorageConfig const&, class Core::Path const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    /**
     * @symbol ?isChainValid\@DBStorageEnvironmentChain\@\@QEBA?AVResult\@Core\@\@_N\@Z
     */
    MCAPI class Core::Result isChainValid(bool) const;
    /**
     * @symbol ??1DBStorageEnvironmentChain\@\@QEAA\@XZ
     */
    MCAPI ~DBStorageEnvironmentChain();
    /**
     * @symbol
     * ?isContentKeyValid\@DBStorageEnvironmentChain\@\@SA_NPEAVEnv\@leveldb\@\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@8\@\@Z
     */
    MCAPI static bool
    isContentKeyValid(class leveldb::Env*, class Core::Path const&, class ContentIdentity const&, std::string const&, std::shared_ptr<class Core::FileStorageArea>);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createFlushableEnv\@DBStorageEnvironmentChain\@\@CA?AV?$unique_ptr\@VFlushableEnv\@\@U?$default_delete\@VFlushableEnv\@\@\@std\@\@\@std\@\@PEAVEnv\@leveldb\@\@V?$shared_ptr\@VFileStorageArea\@Core\@\@\@3\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI static std::unique_ptr<class FlushableEnv>
    createFlushableEnv(class leveldb::Env*, std::shared_ptr<class Core::FileStorageArea>, class Core::Path const&);
    // NOLINTEND
};
