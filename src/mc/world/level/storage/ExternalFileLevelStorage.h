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
MCNAPI ::Core::Result
_readLevelDataFromFile(::Core::Path const& datFilename, ::std::string const& worldID, ::LevelData& levelData);

MCNAPI bool _writeLevelDat(::Core::Path const& datFilename, ::LevelData const& levelData);

MCNAPI void copyLevelInfoToDiskCache(::Core::Path const& levelRootPath, bool onlyIfNotExisting);

MCNAPI ::std::unique_ptr<::PackAccessStrategy> getAccessStrategy(
    ::Core::Path const&                                               levelDirectory,
    ::ContentIdentity const&                                          contentIdentity,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
);

MCNAPI ::std::vector<::std::string> const getImportantFiles();

MCNAPI bool isLevelMarkedForSync(::Core::Path const& directory);

MCNAPI ::Core::Result readLevelDataFromData(::std::string const& dataStr, ::LevelData& levelData);

MCNAPI ::Core::Result
readLevelDataFromFile(::Core::Path const& directory, ::std::string const& levelId, ::LevelData& levelData);

MCNAPI bool readShallowLevelSummaryFromSyncFile(
    ::Core::Path const&  directory,
    ::std::string const& levelId,
    ::LevelSummary&      summary
);

MCNAPI bool readSyncFileData(
    ::Core::Path const& directory,
    ::std::string&      levelName,
    int64&              levelSize,
    int64&              remoteTimestamp,
    bool&               isSyncUsable
);

MCNAPI void saveLevelData(
    ::Core::Path const&  levelPath,
    ::std::string const& levelId,
    ::LevelData const&   levelData,
    bool                 ignoreCache
);

MCNAPI void
saveLevelDataToPath(::Core::Path const& fullPath, ::std::string const& levelId, ::LevelData const& levelData);

MCNAPI void saveLevelDisplayDataToCache(
    ::std::string const&          levelId,
    ::LevelData const&            levelData,
    ::gsl::not_null<::TaskGroup*> taskGroup
);

MCNAPI ::Core::Result validateLevelDat(::Core::Path filePath);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI char const* const& CLOUD_SYNC_LOCK();

MCNAPI char const* const& FN_CORRUPTED_WORLD_MARKER();

MCNAPI char const* const& FN_LEVEL_DAT();

MCNAPI ::std::atomic<bool>& writingToCache();
// NOLINTEND

} // namespace ExternalFileLevelStorage
