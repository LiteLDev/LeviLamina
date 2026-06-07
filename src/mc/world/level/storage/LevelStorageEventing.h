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
struct DBStoragePerformanceTelemetryData;
// clang-format on

class LevelStorageEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::LevelStorageEventingContext> mContext;
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

    MCNAPI void fireEventLevelDBPerformanceData(::DBStoragePerformanceTelemetryData const& perfData) const;

    MCNAPI void fireEventWorldCorruptionCausedWorldShutdown(
        ::std::string const&  reason,
        ::std::optional<bool> isOutOfDiskSpace
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& creationReason, ::LevelData const& levelData, ::std::string const& levelId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
