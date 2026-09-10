#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class PackAccessStrategy;
struct LevelSummary;
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace ExternalFileLevelStorage {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<void>
_readLevelDataFromFile(::Core::Path const& datFilename, ::std::string const& worldID, ::LevelData& levelData);

MCNAPI bool _writeLevelDat(::Core::Path const& datFilename, ::LevelData const& levelData);

MCNAPI void copyLevelInfoToDiskCache(::Core::Path const& levelRootPath, bool onlyIfNotExisting);

MCNAPI ::std::unique_ptr<::PackAccessStrategy> getAccessStrategy(
    ::Core::Path const&                                               levelDirectory,
    ::ContentIdentity const&                                          contentIdentity,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
);

#ifdef LL_PLAT_C
MCNAPI int64 getLevelModifiedTimestamp(::Core::Path const& directory, ::std::string const& containerName);

MCNAPI bool isLevelCloudSave(::Core::Path const& directory);

MCNAPI bool isLevelCloudSaveOptOut(::Core::Path const& directory);

MCNAPI bool isLevelMarkedForSync(::Core::Path const& directory);
#endif

MCNAPI void makeReadableLevelnameFile(::Core::Path const& fullPath, ::std::string const& name);

#ifdef LL_PLAT_C
MCNAPI void markLevelAsCloudSave(::Core::Path const& directory);

MCNAPI void markLevelAsCloudSaveOptOut(::Core::Path const& directory);

MCNAPI void markLevelForSync(
    ::Core::Path const&  directory,
    ::std::string const& levelName,
    uint64               totalSize,
    int64                fileTimeUTC,
    bool                 isSyncInUsableState
);
#endif

MCNAPI ::Core::Result readLevelDataFromData(::std::string const& dataStr, ::LevelData& levelData);

MCNAPI ::Bedrock::Result<bool>
readLevelDataFromFile(::Core::Path const& directory, ::std::string const& levelId, ::LevelData& levelData);

MCNAPI bool readShallowLevelSummaryFromSyncFile(
    ::Core::Path const&  directory,
    ::std::string const& levelId,
    ::LevelSummary&      summary
);

#ifdef LL_PLAT_C
MCNAPI bool readSyncFileData(
    ::Core::Path const& directory,
    ::std::string&      levelName,
    int64&              levelSize,
    int64&              remoteTimestamp,
    bool&               isSyncUsable
);
#endif

MCNAPI void saveLevelData(
    ::Core::Path const&  levelPath,
    ::std::string const& levelId,
    ::LevelData const&   levelData,
    bool                 ignoreCache
);

MCNAPI void
saveLevelDataToPath(::Core::Path const& fullPath, ::std::string const& levelId, ::LevelData const& levelData);

#ifdef LL_PLAT_C
MCNAPI void syncLevelInfoCache(::std::unordered_set<::Core::PathBuffer<::std::string>> const& levelRootPaths);

MCNAPI ::Core::Result unMarkLevelAsCloudSave(::Core::Path const& directory);

MCNAPI ::Core::Result unMarkLevelAsCloudSaveOptOut(::Core::Path const& directory);

MCNAPI ::Core::Result unMarkLevelForSync(::Core::Path const& directory, bool deleteWorldFolderIfEmpty);
#endif

MCNAPI ::Core::Result validateLevelDat(::Core::Path filePath);
// NOLINTEND

} // namespace ExternalFileLevelStorage
