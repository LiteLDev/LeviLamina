#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class LevelStorageSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LevelStorageSource& operator=(LevelStorageSource const&);
    LevelStorageSource(LevelStorageSource const&);
    LevelStorageSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorageSource();

    // vIndex: 1
    virtual std::string const& getName() const = 0;

    // vIndex: 2
    virtual class Core::Result getLevelData(std::string const& levelId, class LevelData& levelDataOut) const = 0;

    // vIndex: 3
    virtual void saveLevelData(std::string const& levelId, class LevelData const& data) = 0;

    // vIndex: 4
    virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>>& paths) = 0;

    // vIndex: 5
    virtual class OwnerPtr<class LevelStorage> createLevelStorage(
        class Scheduler&                                                    scheduler,
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        std::chrono::nanoseconds const&                                     writeFlushInterval,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                       levelDbEnv,
        std::unique_ptr<class LevelStorageEventing>                         levelStorageEventing
    ) = 0;

    // vIndex: 6
    virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    ) = 0;

    // vIndex: 7
    virtual void deleteLevel(std::string const& levelId) = 0;

    // vIndex: 8
    virtual bool renameLevel(std::string const& levelId, std::string const& newLevelName) = 0;

    // vIndex: 9
    virtual void
    renameLevel(class LevelData& levelData, class Core::Path const& fullPath, std::string const& newLevelName) = 0;

    // vIndex: 10
    virtual bool
    createBackupCopyOfWorld(std::string const& levelId, std::string const& newLeveId, std::string const& newName) = 0;

    // vIndex: 11
    virtual bool isLevelMarkedForSync(class Core::Path const& levelPath) const = 0;

    // vIndex: 12
    virtual bool isLevelPartiallyCopied(class Core::Path const& levelPath) const = 0;

    // vIndex: 13
    virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const& levelPath) const = 0;

    // vIndex: 14
    virtual class Core::PathBuffer<std::string> const getBasePath() const = 0;

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const& levelId) const = 0;

    // vIndex: 16
    virtual class Core::PathBuffer<std::string> const
    getPathToLevelInfo(std::string const& levelId, bool forceInfo) const = 0;

    // vIndex: 17
    virtual bool isBetaRetailLevel(std::string const& levelId) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI static std::chrono::nanoseconds const& WORLD_SAVE_FLUSH_INTERVAL();

    MCAPI static std::chrono::nanoseconds const& WORLD_SAVE_MENU_FLUSH_INTERVAL();

    // NOLINTEND
};
