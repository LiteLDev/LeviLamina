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
MCNAPI void copyLevelInfoToDiskCache(::Core::Path const& levelRootPath, bool onlyIfNotExisting);

MCNAPI ::std::unique_ptr<::PackAccessStrategy> getAccessStrategy(
    ::Core::Path const&                                               levelDirectory,
    ::ContentIdentity const&                                          contentIdentity,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
);

#ifdef LL_PLAT_C
MCNAPI bool isLevelCloudSave(::Core::Path const& directory);
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

#ifdef LL_PLAT_C
MCNAPI void syncLevelInfoCache(::std::unordered_set<::Core::PathBuffer<::std::string>> const& levelRootPaths);

MCNAPI ::Core::Result unMarkLevelAsCloudSave(::Core::Path const& directory);

MCNAPI ::Core::Result unMarkLevelForSync(::Core::Path const& directory, bool deleteWorldFolderIfEmpty);
#endif
// NOLINTEND

} // namespace ExternalFileLevelStorage
