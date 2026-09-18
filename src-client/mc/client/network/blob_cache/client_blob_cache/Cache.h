#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class DBStorage;
class LevelDbEnv;
class LevelStorage;
class Scheduler;
class TaskGroup;
class WorkerPool;
namespace Core { class Path; }
// clang-format on

namespace ClientBlobCache {

class Cache : public ::AppPlatformListener {
public:
    // Cache inner types define
    using Timestamp = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DBStorage>>         mDB;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>          mTaskGroup;
    ::ll::TypedStorage<8, 80, ::std::mutex>                           mTimestampMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, uint64>>   mTimestamps;
    ::ll::TypedStorage<8, 8, uint64>                                  mBaseTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mCacheLoadingTime;
    ::ll::TypedStorage<8, 80, ::std::mutex>                           mValidatorMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<uint64>>           mRequestedBlobIds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::chrono::steady_clock::time_point>>
        mRecentlyReceivedBlobIds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLowMemory(::LowMemorySeverity) /*override*/;

    virtual void onAppSuspended() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _flushTimestampsToDisk(::Bedrock::Threading::UniqueLock<::std::mutex> lock);

    MCAPI void _updateTimestamp(uint64 id);

    MCAPI bool doesBlobExist(uint64 id) const;

    MCAPI bool get(uint64 id, ::std::string& buffer);

    MCAPI bool hasClientRecentlyRequestedBlobId(uint64 id);

    MCAPI bool hasClientRequestedBlobId(uint64 id);

    MCAPI void insert(::std::unordered_map<uint64, ::std::string> const& blobs);

    MCAPI void pruneRecentlyReceivedBlobIds(::std::chrono::steady_clock::time_point currentTime);

    MCAPI void recordReceivedBlobId(uint64 id);

    MCAPI void recordRequestedBlobId(uint64 id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::DBStorage>
    _openDB(::Core::Path path, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);

    MCAPI static void
    _writeTimestampsToDisk(::LevelStorage& db, ::std::unordered_map<uint64, uint64> const& timestamps);

    MCAPI static ::Core::PathBuffer<::std::string> getPath();

    MCAPI static ::std::shared_ptr<::ClientBlobCache::Cache>
    tryCreate(::WorkerPool& workers, ::Scheduler& context, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLowMemory(::LowMemorySeverity);

    MCAPI void $onAppSuspended();
    // NOLINTEND
};

} // namespace ClientBlobCache
