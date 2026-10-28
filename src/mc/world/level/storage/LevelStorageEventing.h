#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"
#include "mc/world/level/storage/LevelStorageEventingContext.h"

// auto generated forward declare list
// clang-format off
class DBStorageFolderWatcher;
class LevelData;
struct WorldSaveAndExitPackTelemetryData;
namespace Core { class PathView; }
// clang-format on

class LevelStorageEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::LevelStorageEventingContext> mContext;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::WorldSaveAndExitPackTelemetryData>>>
        mWorldSaveAndExitPackTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageEventing();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStorageEventing(
        ::std::string const& creationReason,
        ::LevelData const&   levelData,
        ::std::string const& levelId
    );

    MCNAPI void fireDBStorageError(char const* errorType) const;

    MCNAPI void fireEventDBReadFail(::std::string const& reason) const;

    MCNAPI void fireEventDBStorageSizeSnapshot(
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) const;

    MCNAPI void fireEventWorldCorruptionCausedWorldShutdown(
        ::std::string const&  reason,
        ::std::optional<bool> isOutOfDiskSpace
    ) const;

    MCNAPI void
    fireEventWorldSaveAndExit(::DBStorageFolderWatcher const& folderWatcher, ::Core::PathView levelDbSubfolder);

    MCNAPI void setWorldSaveAndExitPackTelemetry(::std::vector<::WorldSaveAndExitPackTelemetryData> packs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& creationReason, ::LevelData const& levelData, ::std::string const& levelId);
    // NOLINTEND
};
