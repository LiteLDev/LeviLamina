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
    MCNAPI void _flushTimestampsToDisk(::Bedrock::Threading::UniqueLock<::std::mutex> lock);

    MCNAPI void _updateTimestamp(uint64 id);

    MCAPI bool doesBlobExist(uint64 id) const;

    MCNAPI bool get(uint64 id, ::std::string& buffer);

    MCNAPI bool hasClientRecentlyRequestedBlobId(uint64 id);

    MCNAPI bool hasClientRequestedBlobId(uint64 id);

    MCNAPI void insert(::std::unordered_map<uint64, ::std::string> const& blobs);

    MCNAPI void pruneRecentlyReceivedBlobIds(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void recordReceivedBlobId(uint64 id);

    MCNAPI void recordRequestedBlobId(uint64 id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::DBStorage>
    _openDB(::Core::Path path, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);

    MCNAPI static void
    _writeTimestampsToDisk(::LevelStorage& db, ::std::unordered_map<uint64, uint64> const& timestamps);

    MCNAPI static ::Core::PathBuffer<::std::string> getPath();

    MCNAPI static ::std::shared_ptr<::ClientBlobCache::Cache>
    tryCreate(::WorkerPool& workers, ::Scheduler& context, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLowMemory(::LowMemorySeverity);

    MCNAPI void $onAppSuspended();
    // NOLINTEND
};

} // namespace ClientBlobCache
