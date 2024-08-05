#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/data/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class AppPlatformWindows {
public:
    // prevent constructor by default
    AppPlatformWindows& operator=(AppPlatformWindows const&);
    AppPlatformWindows(AppPlatformWindows const&);

public:
    // NOLINTBEGIN
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;

    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;

    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;

    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;

    MCVAPI bool allowContentLogWriteToDisk();

    MCVAPI uint64 calculateAvailableDiskFreeSpace(class Core::Path const&);

    MCVAPI bool canAppSelfTerminate() const;

    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&);

    MCVAPI uint64 getHighPerformanceThreadsCount() const;

    MCVAPI class MPMCQueue<std::function<void()>>& getMainThreadQueue();

    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();

    MCVAPI bool getPlatformTTSEnabled() const;

    MCVAPI bool getPlatformTTSExists() const;

    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;

    MCVAPI uint64 getTotalHardwareThreadsCount() const;

    MCVAPI void queueForMainThread_DEPRECATED(std::function<void()>);

    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;

    MCVAPI ~AppPlatformWindows();

    MCAPI AppPlatformWindows();

    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI uint64 _findHighPerformanceThreadsCount() const;

    // NOLINTEND
};
