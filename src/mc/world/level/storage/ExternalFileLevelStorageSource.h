#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/storage/LevelStorageSource.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class ExternalFileLevelStorageSource : public ::LevelStorageSource {
public:
    // prevent constructor by default
    ExternalFileLevelStorageSource& operator=(ExternalFileLevelStorageSource const&);
    ExternalFileLevelStorageSource(ExternalFileLevelStorageSource const&);
    ExternalFileLevelStorageSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalFileLevelStorageSource();

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual class Core::Result getLevelData(std::string const& levelId, class LevelData& levelDataOut) const;

    // vIndex: 3
    virtual void saveLevelData(std::string const& levelId, class LevelData const& data);

    // vIndex: 4
    virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>>& paths);

    // vIndex: 5
    virtual class OwnerPtr<class LevelStorage> createLevelStorage(
        class Scheduler&                                                    scheduler,
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        std::chrono::nanoseconds const&                                     writeFlushInterval,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                       levelDbEnv,
        std::unique_ptr<class LevelStorageEventing>                         levelStorageEventing
    );

    // vIndex: 6
    virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // vIndex: 7
    virtual void deleteLevel(std::string const& levelId);

    // vIndex: 8
    virtual bool renameLevel(std::string const& levelId, std::string const& newLevelName);

    // vIndex: 9
    virtual void
    renameLevel(class LevelData& levelData, class Core::Path const& fullPath, std::string const& newLevelName);

    // vIndex: 10
    virtual bool
    createBackupCopyOfWorld(std::string const& levelId, std::string const& newLeveId, std::string const& newName);

    // vIndex: 11
    virtual bool isLevelMarkedForSync(class Core::Path const& levelPath) const;

    // vIndex: 12
    virtual bool isLevelPartiallyCopied(class Core::Path const& levelPath) const;

    // vIndex: 13
    virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const& levelPath) const;

    // vIndex: 14
    virtual class Core::PathBuffer<std::string> const getBasePath() const;

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const& levelId) const;

    // vIndex: 16
    virtual class Core::PathBuffer<std::string> const
    getPathToLevelInfo(std::string const& levelId, bool forceInfo) const;

    // vIndex: 17
    virtual bool isBetaRetailLevel(std::string const& levelId) const;

    MCAPI ExternalFileLevelStorageSource(
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&  pathManager,
        Bedrock::NotNullNonOwnerPtr<class SaveTransactionManager> const& saveTransactionManager
    );

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

    MCAPI bool
    createBackupCopyOfWorld$(std::string const& levelId, std::string const& newLeveId, std::string const& newName);

    MCAPI std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage$(
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    MCAPI class OwnerPtr<class LevelStorage> createLevelStorage$(
        class Scheduler&                                                    scheduler,
        std::string const&                                                  levelId,
        class ContentIdentity const&                                        contentIdentity,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        std::chrono::nanoseconds const&                                     writeFlushInterval,
        Bedrock::NotNullNonOwnerPtr<class LevelDbEnv>                       levelDbEnv,
        std::unique_ptr<class LevelStorageEventing>                         levelStorageEventing
    );

    MCAPI void deleteLevel$(std::string const& levelId);

    MCAPI class Core::PathBuffer<std::string> const getBasePath$() const;

    MCAPI class Core::PathBuffer<std::string> getLevelDatFoundPath$(class Core::Path const& levelPath) const;

    MCAPI class Core::Result getLevelData$(std::string const& levelId, class LevelData& levelDataOut) const;

    MCAPI void getLevelList$(std::vector<class Core::PathBuffer<std::string>>& paths);

    MCAPI std::string const& getName$() const;

    MCAPI class Core::PathBuffer<std::string> const getPathToLevel$(std::string const& levelId) const;

    MCAPI class Core::PathBuffer<std::string> const
    getPathToLevelInfo$(std::string const& levelId, bool forceInfo) const;

    MCAPI bool isBetaRetailLevel$(std::string const& levelId) const;

    MCAPI bool isLevelMarkedForSync$(class Core::Path const& levelPath) const;

    MCAPI bool isLevelPartiallyCopied$(class Core::Path const& levelPath) const;

    MCAPI bool renameLevel$(std::string const& levelId, std::string const& newLevelName);

    MCAPI void
    renameLevel$(class LevelData& levelData, class Core::Path const& fullPath, std::string const& newLevelName);

    MCAPI void saveLevelData$(std::string const& levelId, class LevelData const& data);

    // NOLINTEND
};
