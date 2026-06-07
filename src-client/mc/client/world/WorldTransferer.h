#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class ILevelListCache;
class IMinecraftEventing;
namespace World { class IWorldStorageHandler; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>> mFileArchiver;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                             mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                          mEventing;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                 mWorldStorageHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferer& operator=(WorldTransferer const&);
    WorldTransferer(WorldTransferer const&);
    WorldTransferer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _debugImportWorldsNintendoSwitch(::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI void
    _handlePickDone(::FileArchiver::Result result, ::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI void _importWorldWindows(::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI void backupWorld(
        ::World::WorldID const& worldID,
        ::std::function<void(::World::WorldID const&, ::World::IWorldStorageHandler::DuplicateWorldResult)>
            onBackupComplete
    );

    MCAPI void debugImportWorlds(::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI ::std::string getDebugImportPath() const;

    MCAPI float getProgress();

    MCAPI void importWorld(::std::function<void(::World::TransferResult)> onImportComplete);

    MCAPI bool platformSupportsDebugImport() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    calculateImportedWorldName(::std::string const& originalName, ::ILevelListCache& levelListCache);
    // NOLINTEND
};

} // namespace World
