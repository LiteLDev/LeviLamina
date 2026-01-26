#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/level/storage/LevelStorageSource.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class SaveTransactionManager;
class Scheduler;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class ExternalFileLevelStorageSource : public ::LevelStorageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::SaveTransactionManager>> mSaveTransactionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>  mFilePathManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalFileLevelStorageSource() /*override*/;

    virtual ::std::string const& getName() const /*override*/;

    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) /*override*/;

    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;

    virtual ::Bedrock::Result<bool> getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const
        /*override*/;

    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& data) /*override*/;

    virtual void getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths) /*override*/;

    virtual void deleteLevel(::std::string const& levelId) /*override*/;

    virtual bool renameLevel(::std::string const& levelId, ::std::string const& newLevelName) /*override*/;

    virtual void
    renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName) /*override*/;

    virtual bool createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    ) /*override*/;

    virtual bool isLevelMarkedForSync(::Core::Path const& levelPath) const /*override*/;

    virtual bool isLevelPartiallyCopied(::Core::Path const& levelPath) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getLevelDatFoundPath(::Core::Path const& levelPath) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getBasePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getPathToLevelInfo(::std::string const& levelId, bool) const
        /*override*/;

    virtual bool isBetaRetailLevel(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_S void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&  pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::SaveTransactionManager> const& saveTransactionManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI ::Bedrock::UniqueOwnerPointer<::LevelStorage> $createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    );

    MCAPI ::std::unique_ptr<::LevelLooseFileStorage> $createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCAPI ::Bedrock::Result<bool> $getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const;

    MCAPI void $saveLevelData(::std::string const& levelId, ::LevelData const& data);

    MCAPI void $getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths);

    MCAPI void $deleteLevel(::std::string const& levelId);

    MCAPI bool $renameLevel(::std::string const& levelId, ::std::string const& newLevelName);

    MCAPI void $renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName);

    MCAPI bool $createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    );

    MCAPI bool $isLevelMarkedForSync(::Core::Path const& levelPath) const;

    MCAPI bool $isLevelPartiallyCopied(::Core::Path const& levelPath) const;

    MCAPI ::Core::PathBuffer<::std::string> $getLevelDatFoundPath(::Core::Path const& levelPath) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getBasePath() const;

    MCAPI ::Core::PathBuffer<::std::string> const $getPathToLevel(::std::string const& levelId) const;

    MCFOLD ::Core::PathBuffer<::std::string> const $getPathToLevelInfo(::std::string const& levelId, bool) const;

    MCFOLD bool $isBetaRetailLevel(::std::string const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
