#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace ExternalFileLevelStorage {
// NOLINTBEGIN
MCAPI class Core::Result
_readLevelDataFromFile(class Core::Path const& datFilename, std::string const& worldID, class LevelData& levelData);

MCAPI bool _writeLevelDat(class Core::Path const& datFilename, class LevelData const& levelData);

MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy(
    class Core::Path const&                                             levelDirectory,
    class ContentIdentity const&                                        contentIdentity,
    Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
);

MCAPI std::vector<std::string> const getImportantFiles();

MCAPI std::string getLevelIDFromPath(class Core::Path const& levelRootPath, class Core::Path const& worldsPath);

MCAPI bool isLevelMarkedForSync(class Core::Path const& directory);

MCAPI void makeReadableLevelnameFile(class Core::Path const& fullPath, std::string const& name);

MCAPI class Core::Result readLevelDataFromData(std::string const& dataStr, class LevelData& levelData);

MCAPI class Core::Result
readLevelDataFromFile(class Core::Path const& directory, std::string const& levelId, class LevelData& levelData);

MCAPI bool readShallowLevelSummaryFromSyncFile(
    class Core::Path const& directory,
    std::string const&      levelId,
    struct LevelSummary&    summary
);

MCAPI bool readSyncFileData(
    class Core::Path const& directory,
    std::string&            levelName,
    int64&                  levelSize,
    int64&                  remoteTimestamp,
    bool&                   isSyncUsable
);

MCAPI void saveLevelData(
    class Core::Path const& levelPath,
    std::string const&      levelId,
    class LevelData const&  levelData,
    bool                    ignoreCache
);

MCAPI void
saveLevelDataToPath(class Core::Path const& fullPath, std::string const& levelId, class LevelData const& levelData);

MCAPI void saveLevelDisplayDataToCache(
    std::string const&              levelId,
    class LevelData const&          levelData,
    gsl::not_null<class TaskGroup*> taskGroup
);

MCAPI class Core::Result validateLevelDat(class Core::Path filePath);
// NOLINTEND

}; // namespace ExternalFileLevelStorage
