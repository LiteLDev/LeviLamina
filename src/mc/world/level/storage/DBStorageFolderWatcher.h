#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"
#include "mc/world/level/storage/FolderSizeAndModifyDateSnapshot.h"

// auto generated forward declare list
// clang-format off
struct FolderSizeAndModifyDateSnapshotMetrics;
namespace Core { class PathView; }
namespace Social::Events { class Event; }
// clang-format on

class DBStorageFolderWatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>                                       mAbsolutePath;
    ::ll::TypedStorage<8, 24, ::FolderSizeAndModifyDateSnapshot>                  mOpeningSnapshot;
    ::ll::TypedStorage<8, 24, ::FolderSizeAndModifyDateSnapshot>                  mCurrentSnapshot;
    ::ll::TypedStorage<8, 72, ::std::array<::FolderSizeAndModifyDateSnapshot, 3>> mSnapshotChain;
    ::ll::TypedStorage<8, 24, ::FolderSizeAndModifyDateSnapshot>                  mClosingSnapshot;
    ::ll::TypedStorage<8, 8, uint64>                                              mTelemetrySequence;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                       mWriteMtx;
    ::ll::TypedStorage<1, 1, bool>                                                mWorldExitSnapshotCaptureSucceeded;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FolderSizeAndModifyDateSnapshotMetrics getCurrentSnapshotMetrics() const;

    MCNAPI ::FolderSizeAndModifyDateSnapshotMetrics
    getCurrentSnapshotMetrics(::Core::PathView relativeSubdirectory) const;

    MCNAPI void pushSnapshot();

#ifdef LL_PLAT_C
    MCNAPI void toTelemetryEvent(
        ::Social::Events::Event&               event,
        ::DBStorageFolderWatcherSnapshotKind   kind,
        ::Social::Events::PrivacyTagEnterprise privacyTag
    ) const;
#endif
    // NOLINTEND
};
