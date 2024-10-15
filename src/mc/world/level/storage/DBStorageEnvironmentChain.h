#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    MCAPI DBStorageEnvironmentChain(
        struct DBStorageConfig const&                 config,
        class Core::Path const&                       dbPath,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv
    );

    MCAPI class CompactionListenerEnv* getCompactionListenerEnv() const;

    MCAPI class FlushableEnv* getFlushableEnv() const;

    MCAPI leveldb::Env* getRootEnv() const;

    MCAPI class SnapshotEnv* getSnapshotEnv() const;

    MCAPI class Core::Result isChainValid(bool bRequireFilePresence) const;

    MCAPI void onFlush();

    MCAPI ~DBStorageEnvironmentChain();

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
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(
        leveldb::Env*                                currentEnv,
        std::shared_ptr<class Core::FileStorageArea> storageAreaForLevel,
        class Core::Path const&                      dbPath
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct DBStorageConfig const&                 config,
        class Core::Path const&                       dbPath,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv
    );

    MCAPI void dtor$();

    // NOLINTEND
};
