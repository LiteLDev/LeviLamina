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

// auto generated forward declare list
// clang-format off
class FileArchiver;
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
        readWorld(::World::WorldID const&) const /*override*/;

    virtual ::std::optional<::World::IWorldStorageHandler::WriteWorldError>
    updateOrCreateWorld(::LevelData&, ::LevelSummary&, ::std::shared_ptr<::LevelSettings>) const /*override*/;

    virtual void deleteWorld(::World::WorldID const&) /*override*/;

    virtual void reloadWorld(::World::WorldID const&) /*override*/;

    virtual ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&,
        ::World::ClearPlayerDataType,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>&
    ) /*override*/;

    virtual void duplicateWorld(
        ::World::WorldID const&,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)>
    ) /*override*/;

    virtual void exportWorld(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)>
    ) /*override*/;

    virtual void exportWorldAsTemplate(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)>
    ) /*override*/;

    virtual ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const /*override*/;

    virtual void updateWorldIcon(
        ::World::WorldID const&,
        ::Core::PathBuffer<::std::string> const&,
        ::std::string const&,
        ::std::function<void(::World::WorldID const&)>
    ) /*override*/;

    virtual void resetWorldIcon(::World::WorldID const&, ::std::function<void(::World::WorldID const&)>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
