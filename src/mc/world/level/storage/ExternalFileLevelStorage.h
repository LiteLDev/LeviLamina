#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class PackAccessStrategy;
class TaskGroup;
struct LevelSummary;
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace ExternalFileLevelStorage {
// functions
// NOLINTBEGIN
MCAPI ::Core::Result
_readLevelDataFromFile(::Core::Path const& datFilename, ::std::string const& worldID, ::LevelData& levelData);

MCAPI bool _writeLevelDat(::Core::Path const& datFilename, ::LevelData const& levelData);

MCAPI void copyLevelInfoToDiskCache(::Core::Path const& levelRootPath, bool onlyIfNotExisting);

MCAPI ::std::unique_ptr<::PackAccessStrategy> getAccessStrategy(
    ::Core::Path const&                                               levelDirectory,
    ::ContentIdentity const&                                          contentIdentity,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
);

MCAPI ::std::vector<::std::string> const getImportantFiles();

MCAPI bool isLevelMarkedForSync(::Core::Path const& directory);

MCAPI ::Core::Result readLevelDataFromData(::std::string const& dataStr, ::LevelData& levelData);

MCAPI ::Core::Result
readLevelDataFromFile(::Core::Path const& directory, ::std::string const& levelId, ::LevelData& levelData);

MCAPI bool readShallowLevelSummaryFromSyncFile(
    ::Core::Path const&  directory,
    ::std::string const& levelId,
    ::LevelSummary&      summary
);

MCAPI bool readSyncFileData(
    ::Core::Path const& directory,
    ::std::string&      levelName,
    int64&              levelSize,
    int64&              remoteTimestamp,
    bool&               isSyncUsable
);

MCAPI void saveLevelData(
    ::Core::Path const&  levelPath,
    ::std::string const& levelId,
    ::LevelData const&   levelData,
    bool                 ignoreCache
);

MCAPI void
saveLevelDataToPath(::Core::Path const& fullPath, ::std::string const& levelData, ::LevelData const& levelId);

MCAPI void saveLevelDisplayDataToCache(
    ::std::string const&          levelId,
    ::LevelData const&            levelData,
    ::gsl::not_null<::TaskGroup*> taskGroup
);

MCAPI ::Core::Result validateLevelDat(::Core::Path filePath);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const* const& CLOUD_SYNC_LOCK();

MCAPI char const* const& FN_CORRUPTED_WORLD_MARKER();

MCAPI char const* const& FN_LEVEL_DAT();

MCAPI ::std::atomic<bool>& writingToCache();
// NOLINTEND

} // namespace ExternalFileLevelStorage
