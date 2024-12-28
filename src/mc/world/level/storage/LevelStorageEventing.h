#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class DBStorageFolderWatcher;
class LevelData;
// clang-format on

class LevelStorageEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkc6379b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageEventing& operator=(LevelStorageEventing const&);
    LevelStorageEventing(LevelStorageEventing const&);
    LevelStorageEventing();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelStorageEventing(
        ::std::string const& creationReason,
        ::LevelData const&   levelData,
        ::std::string const& levelId
    );

    MCAPI void fireDBStorageError(char const* errorType);

    MCAPI void fireEventDBStorageSizeSnapshot(
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    );

    MCAPI void
    fireEventWorldCorruptionCausedWorldShutdown(::std::string const& reason, ::std::optional<bool> isOutOfDiskSpace);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& creationReason, ::LevelData const& levelData, ::std::string const& levelId);
    // NOLINTEND
};
