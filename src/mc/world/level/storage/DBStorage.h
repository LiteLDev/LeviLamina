#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/storage/LevelStorage.h"
#include "mc/world/level/storage/LevelStorageWriteBatch.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { struct LevelStorageResult; }
// clang-format on

class DBStorage : public ::LevelStorage {
public:
    // DBStorage inner types declare
    // clang-format off
    struct CommitOperation;
    class DBStorageToken;
    struct PendingWriteResult;
    // clang-format on

    // DBStorage inner types define
    struct CommitOperation {
    public:
        // prevent constructor by default
        CommitOperation& operator=(CommitOperation const&);
        CommitOperation(CommitOperation const&);
        CommitOperation();

    public:
        // NOLINTBEGIN
        MCAPI ~CommitOperation();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class DBStorageToken {
    public:
        // prevent constructor by default
        DBStorageToken& operator=(DBStorageToken const&);
        DBStorageToken(DBStorageToken const&);
        DBStorageToken();

    public:
        // NOLINTBEGIN
        MCAPI ~DBStorageToken();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct PendingWriteResult {
    public:
        // prevent constructor by default
        PendingWriteResult& operator=(PendingWriteResult const&);
        PendingWriteResult(PendingWriteResult const&);
        PendingWriteResult();

    public:
        // NOLINTBEGIN
        MCAPI PendingWriteResult(std::shared_ptr<std::string const>, bool);

        MCAPI ~PendingWriteResult();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DBStorage& operator=(DBStorage const&);
    DBStorage(DBStorage const&);
    DBStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DBStorage();

    // vIndex: 1
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver> observer);

    // vIndex: 2
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const& key, ::DBHelpers::Category category);

    // vIndex: 3
    virtual bool hasKey(std::string_view key, ::DBHelpers::Category category) const;

    // vIndex: 4
    virtual void forEachKeyWithPrefix(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const;

    // vIndex: 5
    virtual bool loadLevelData(class LevelData& data);

    // vIndex: 6
    virtual std::unique_ptr<class ChunkSource>
    createChunkStorage(std::unique_ptr<class ChunkSource> generator, ::StorageVersion);

    // vIndex: 7
    virtual void saveLevelData(class LevelData const& levelData);

    // vIndex: 8
    virtual class Core::PathBuffer<std::string> const& getFullPath() const;

    // vIndex: 9
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(std::string const& key, std::string&& data, ::DBHelpers::Category category);

    // vIndex: 10
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    saveData(class LevelStorageWriteBatch const& batch);

    // vIndex: 11
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
    deleteData(std::string const& key, ::DBHelpers::Category category);

    // vIndex: 12
    virtual void getStatistics(std::string& outStats, ::LevelStorage::StatsType statsType) const;

    // vIndex: 14
    virtual struct Core::LevelStorageResult getLevelStorageState() const;

    // vIndex: 15
    virtual void startShutdown();

    // vIndex: 16
    virtual bool isShuttingDown() const;

    // vIndex: 17
    virtual bool checkShutdownDone();

    // vIndex: 18
    virtual bool loadData(std::string_view key, std::string& buffer, ::DBHelpers::Category category) const;

    // vIndex: 19
    virtual struct Core::LevelStorageResult getState() const;

    // vIndex: 20
    virtual std::vector<struct SnapshotFilenameAndLength>
    createSnapshot(std::string const& filePrefix, bool flushWriteCache);

    // vIndex: 21
    virtual void releaseSnapshot();

    // vIndex: 22
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> compactStorage();

    // vIndex: 23
    virtual void syncAndSuspendStorage();

    // vIndex: 24
    virtual void resumeStorage();

    // vIndex: 25
    virtual void setFlushAllowed(bool flushAllowed);

    // vIndex: 26
    virtual void flushToPermanentStorage();

    // vIndex: 27
    virtual void freeCaches();

    // vIndex: 28
    virtual void setCompactionCallback(std::function<void(::CompactionStatus)> callback);

    // vIndex: 29
    virtual void setCriticalSyncSaveCallback(std::function<void()> callback);

    MCAPI DBStorage(struct DBStorageConfig config, Bedrock::NotNullNonOwnerPtr<class LevelDbEnv> levelDbEnv);

    MCAPI bool tryRepair(class Core::Path const& path) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::pair<class LevelStorageWriteBatch*, LevelStorageWriteBatch::BatchEntryMap::iterator>
          _findCacheEntry(std::string const& key);

    MCAPI std::map<std::string, struct DBStorage::PendingWriteResult> _getAllPendingWrites() const;

    MCAPI void _handleErrorStatus(leveldb::Status const& status);

    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const& batchToMerge);

    MCAPI void _queueSaveCallback(bool invokeImmediately);

    MCAPI void _read(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const;

    MCAPI struct DBStorage::PendingWriteResult
    _readPendingWrite(std::string const& key, ::DBHelpers::Category category) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class TaskResult _flushWriteCacheToLevelDB();

    MCAPI std::string _getTelemetryMessage(leveldb::Status const& status) const;

    MCAPI void _markAsCorrupted(std::string_view message) const;

    MCAPI void _removeCorruptedMark() const;

    MCAPI void _scheduleNextAutoCompaction();

    MCAPI bool _suspendAndPerformSaveAction(std::function<class TaskResult()> action, std::function<void()> callback);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void addStorageObserver$(std::unique_ptr<class LevelStorageObserver> observer);

    MCAPI bool checkShutdownDone$();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> compactStorage$();

    MCAPI std::unique_ptr<class ChunkSource>
          createChunkStorage$(std::unique_ptr<class ChunkSource> generator, ::StorageVersion);

    MCAPI std::vector<struct SnapshotFilenameAndLength>
          createSnapshot$(std::string const& filePrefix, bool flushWriteCache);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          deleteData$(std::string const& key, ::DBHelpers::Category category);

    MCAPI void flushToPermanentStorage$();

    MCAPI void forEachKeyWithPrefix$(
        std::string_view                                               prefix,
        ::DBHelpers::Category                                          category,
        std::function<void(std::string_view, std::string_view)> const& callback
    ) const;

    MCAPI void freeCaches$();

    MCAPI std::unique_ptr<class CompoundTag> getCompoundTag$(std::string const& key, ::DBHelpers::Category category);

    MCAPI class Core::PathBuffer<std::string> const& getFullPath$() const;

    MCAPI struct Core::LevelStorageResult getLevelStorageState$() const;

    MCAPI struct Core::LevelStorageResult getState$() const;

    MCAPI void getStatistics$(std::string& outStats, ::LevelStorage::StatsType statsType) const;

    MCAPI bool hasKey$(std::string_view key, ::DBHelpers::Category category) const;

    MCAPI bool isShuttingDown$() const;

    MCAPI bool loadData$(std::string_view key, std::string& buffer, ::DBHelpers::Category category) const;

    MCAPI bool loadLevelData$(class LevelData& data);

    MCAPI void releaseSnapshot$();

    MCAPI void resumeStorage$();

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          saveData$(std::string const& key, std::string&& data, ::DBHelpers::Category category);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>>
          saveData$(class LevelStorageWriteBatch const& batch);

    MCAPI void saveLevelData$(class LevelData const& levelData);

    MCAPI void setCompactionCallback$(std::function<void(::CompactionStatus)> callback);

    MCAPI void setCriticalSyncSaveCallback$(std::function<void()> callback);

    MCAPI void setFlushAllowed$(bool flushAllowed);

    MCAPI void startShutdown$();

    MCAPI void syncAndSuspendStorage$();

    // NOLINTEND
};
