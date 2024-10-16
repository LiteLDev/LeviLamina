#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/MPMCQueue.h"

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

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI uint64 _findHighPerformanceThreadsCount() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForIAppPlatform();

    MCAPI static void** vftableForISecureStorageKeySystem();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Core::PathBuffer<std::string> _getCurrentStoragePath$() const;

    MCAPI class Core::PathBuffer<std::string> _getExternalStoragePath$() const;

    MCAPI class Core::PathBuffer<std::string> _getInternalStoragePath$() const;

    MCAPI class Core::PathBuffer<std::string> _getUserdataPath$() const;

    MCAPI bool allowContentLogWriteToDisk$();

    MCAPI uint64 calculateAvailableDiskFreeSpace$(class Core::Path const&);

    MCAPI bool canAppSelfTerminate$() const;

    MCAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder$(class Core::Path const&);

    MCAPI uint64 getHighPerformanceThreadsCount$() const;

    MCAPI class MPMCQueue<std::function<void()>>& getMainThreadQueue$();

    MCAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath$();

    MCAPI bool getPlatformTTSEnabled$() const;

    MCAPI bool getPlatformTTSExists$() const;

    MCAPI class Core::PathBuffer<std::string> getPlatformTempPath$() const;

    MCAPI uint64 getTotalHardwareThreadsCount$() const;

    MCAPI void queueForMainThread_DEPRECATED$(std::function<void()>);

    MCAPI void registerExperimentsActiveCrashDump$(std::vector<std::string> const&) const;

    MCAPI static std::string const& EXPERIMENTS_ACTIVE_KEY();

    // NOLINTEND
};
