#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/FileArchiverOutcome.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class FilePickerSettings;
class IContentKeyProvider;
class IContentManager;
class ILevelListCache;
class LevelData;
class LevelDbEnv;
class LevelSettings;
class TaskGroup;
struct LevelSummary;
namespace Social { class IUserManager; }
// clang-format on

namespace World {

class WorldStorageHandler : public ::World::IWorldStorageHandler,
                            public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // WorldStorageHandler inner types declare
    // clang-format off
    struct ExporWorldTaskData;
    // clang-format on

    // WorldStorageHandler inner types define
    struct ExporWorldTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::World::WorldID> mBackupWorldId;
        ::ll::TypedStorage<4, 8, ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>>
                                                                     mStartClearPlayerDataError;
        ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mClearPlayerDataTask;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>                    mWorkingDirectory;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                          mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::FileArchiver&>                                             mFileArchiver;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                                     mUserManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mDiskTaskGroup;
    ::ll::TypedStorage<1, 1, ::World::IWorldStorageHandler::ExportWorldStatus>            mExportWorldStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageHandler& operator=(WorldStorageHandler const&);
    WorldStorageHandler(WorldStorageHandler const&);
    WorldStorageHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::
        variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>
        readWorld(::World::WorldID const& id) const /*override*/;

    virtual ::std::optional<::World::IWorldStorageHandler::WriteWorldError> updateOrCreateWorld(
        ::LevelData&                       levelData,
        ::LevelSummary&                    levelSummary,
        ::std::shared_ptr<::LevelSettings> levelSettings
    ) const /*override*/;

    virtual void deleteWorld(::World::WorldID const& id) /*override*/;

    virtual void reloadWorld(::World::WorldID const& id) /*override*/;

    virtual ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&                                                    worldId,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    ) /*override*/;

    virtual void duplicateWorld(
        ::World::WorldID const&                                                                             worldId,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)> onComplete
    ) /*override*/;

    virtual void exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) /*override*/;

    virtual void exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) /*override*/;

    virtual ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const /*override*/;

    virtual void updateWorldIcon(
        ::World::WorldID const&                        worldId,
        ::Core::PathBuffer<::std::string> const&       screenshotPath,
        ::std::string const&                           id,
        ::std::function<void(::World::WorldID const&)> onComplete
    ) /*override*/;

    virtual void resetWorldIcon(
        ::World::WorldID const&                        worldId,
        ::std::function<void(::World::WorldID const&)> onComplete
    ) /*override*/;

    virtual ~WorldStorageHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldStorageHandler(
        ::Core::PathBuffer<::std::string> const&                          workingDirectory,
        ::ILevelListCache&                                                levelListCache,
        ::IContentManager&                                                contentManager,
        ::FileArchiver&                                                   fileArchiver,
        ::Social::IUserManager&                                           userManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
    );

    MCAPI void _exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::FileArchiver::ExportType                                              exportType,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCAPI ::std::string _makeBackupOfLevel(::World::WorldID const& id);

    MCAPI void _onDuplicateWorldSuccess(
        ::std::string const&                     worldId,
        ::Core::PathBuffer<::std::string> const& worldPath,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)> const&
            onComplete
    ) const;

    MCAPI void _onExportComplete(
        ::FileArchiverOutcome                                                   outcome,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete,
        ::std::shared_ptr<::FilePickerSettings>                                 settings
    );

    MCAPI void _scheduleCheckUserStorageAsync() const;

    MCAPI void _setupExportWorld(
        ::World::WorldID const&                                                 worldId,
        ::FileArchiver::ExportType                                              exportType,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const&                          workingDirectory,
        ::ILevelListCache&                                                levelListCache,
        ::IContentManager&                                                contentManager,
        ::FileArchiver&                                                   fileArchiver,
        ::Social::IUserManager&                                           userManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
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
    MCAPI ::std::variant<::World::IWorldStorageHandler::ReadWorldError, ::World::IWorldStorageHandler::CachedWorldData>
    $readWorld(::World::WorldID const& id) const;

    MCAPI ::std::optional<::World::IWorldStorageHandler::WriteWorldError> $updateOrCreateWorld(
        ::LevelData&                       levelData,
        ::LevelSummary&                    levelSummary,
        ::std::shared_ptr<::LevelSettings> levelSettings
    ) const;

    MCAPI void $deleteWorld(::World::WorldID const& id);

    MCAPI void $reloadWorld(::World::WorldID const& id);

    MCAPI ::Bedrock::Threading::Async<void> $clearPlayerData(
        ::World::WorldID const&                                                    worldId,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    );

    MCAPI void $duplicateWorld(
        ::World::WorldID const&                                                                             worldId,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)> onComplete
    );

    MCAPI void $exportWorld(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCAPI void $exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldId,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    );

    MCFOLD ::World::IWorldStorageHandler::ExportWorldStatus $exportWorldStatus() const;

    MCAPI void $updateWorldIcon(
        ::World::WorldID const&                        worldId,
        ::Core::PathBuffer<::std::string> const&       screenshotPath,
        ::std::string const&                           id,
        ::std::function<void(::World::WorldID const&)> onComplete
    );

    MCAPI void
    $resetWorldIcon(::World::WorldID const& worldId, ::std::function<void(::World::WorldID const&)> onComplete);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIWorldStorageHandler();

    MCNAPI static void** $vftableForEnableQueueForMainThread();
    // NOLINTEND
};

} // namespace World
