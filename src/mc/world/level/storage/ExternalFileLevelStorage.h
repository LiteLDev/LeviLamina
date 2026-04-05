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
class IMinecraftEventing;
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
MCNAPI ::Bedrock::Result<void>
_readLevelDataFromFile(::Core::Path const& datFilename, ::std::string const& worldID, ::LevelData& levelData);

MCNAPI void copyLevelInfoToDiskCache(::Core::Path const& levelRootPath, bool onlyIfNotExisting);

MCNAPI ::std::unique_ptr<::PackAccessStrategy> getAccessStrategy(
    ::Core::Path const&                                               levelDirectory,
    ::ContentIdentity const&                                          contentIdentity,
    ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
);

MCNAPI ::std::vector<::std::string> const getImportantFiles();

MCNAPI void makeReadableLevelnameFile(::Core::Path const& fullPath, ::std::string const& name);

MCNAPI ::Core::Result readLevelDataFromData(::std::string const& dataStr, ::LevelData& levelData);

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Result<bool>
readLevelDataFromFile(::Core::Path const& directory, ::std::string const& levelId, ::LevelData& levelData);
#endif

MCNAPI ::Bedrock::Result<bool> readLevelDataFromFile(
    ::Core::Path const&   directory,
    ::std::string const&  levelId,
    ::LevelData&          levelData,
    ::IMinecraftEventing* eventing
);

MCNAPI bool readShallowLevelSummaryFromSyncFile(
    ::Core::Path const&  directory,
    ::std::string const& levelId,
    ::LevelSummary&      summary
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

#ifdef LL_PLAT_C
MCNAPI void syncLevelInfoCache(::std::unordered_set<::Core::PathBuffer<::std::string>> const& levelRootPaths);
#endif

MCNAPI ::Core::Result validateLevelDat(::Core::Path filePath);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::atomic<bool>& writingToCache();
// NOLINTEND

} // namespace ExternalFileLevelStorage
