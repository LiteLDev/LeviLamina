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
    DBStorageEnvironmentChain& operator=(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0DBStorageEnvironmentChain@@QEAA@AEBUDBStorageConfig@@AEBVPath@Core@@V?$not_null@V?$NonOwnerPointer@VLevelDbEnv@@@Bedrock@@@gsl@@@Z
    MCAPI DBStorageEnvironmentChain(
        struct DBStorageConfig const&                 config,
        class Core::Path const&                       dbPath,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv
    );

    // symbol: ?isChainValid@DBStorageEnvironmentChain@@QEBA?AVResult@Core@@_N@Z
    MCAPI class Core::Result isChainValid(bool bRequireFilePresence) const;

    // symbol: ??1DBStorageEnvironmentChain@@QEAA@XZ
    MCAPI ~DBStorageEnvironmentChain();

    // symbol:
    // ?isContentKeyValid@DBStorageEnvironmentChain@@SA_NPEAVEnv@leveldb@@AEBVPath@Core@@AEBVContentIdentity@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VFileStorageArea@Core@@@8@@Z
    MCAPI static bool isContentKeyValid(
        leveldb::Env*                                rootEnv,
        class Core::Path const&                      dbPath,
        class ContentIdentity const&                 contentIdentity,
        std::string const&                           contentKey,
        std::shared_ptr<class Core::FileStorageArea> storageArea
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?createFlushableEnv@DBStorageEnvironmentChain@@CA?AV?$unique_ptr@VFlushableEnv@@U?$default_delete@VFlushableEnv@@@std@@@std@@PEAVEnv@leveldb@@V?$shared_ptr@VFileStorageArea@Core@@@3@AEBVPath@Core@@@Z
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(
        leveldb::Env*                                currentEnv,
        std::shared_ptr<class Core::FileStorageArea> storageAreaForLevel,
        class Core::Path const&                      dbPath
    );

    // NOLINTEND
};
