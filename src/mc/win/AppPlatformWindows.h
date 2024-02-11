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
    AppPlatformWindows();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getCurrentStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;

    // symbol:
    // ?_getExternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;

    // symbol:
    // ?_getInternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;

    // symbol:
    // ?_getUserdataPath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;

    // symbol: ?allowContentLogWriteToDisk@AppPlatformWindows@@UEAA_NXZ
    MCVAPI bool allowContentLogWriteToDisk();

    // symbol: ?calculateAvailableDiskFreeSpace@AppPlatformWindows@@UEAA_KAEBVPath@Core@@@Z
    MCVAPI uint64 calculateAvailableDiskFreeSpace(class Core::Path const&);

    // symbol: ?canAppSelfTerminate@AppPlatformWindows@@UEBA_NXZ
    MCVAPI bool canAppSelfTerminate() const;

    // symbol:
    // ?copyImportFileToTempFolder@AppPlatformWindows@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&);

    // symbol: ?getHighPerformanceThreadsCount@AppPlatformWindows@@UEBA_KXZ
    MCVAPI uint64 getHighPerformanceThreadsCount() const;

    // symbol: ?getMainThreadQueue@AppPlatformWindows@@UEAAAEAV?$MPMCQueue@V?$function@$$A6AXXZ@std@@@@XZ
    MCVAPI class MPMCQueue<std::function<void()>>& getMainThreadQueue();

    // symbol:
    // ?getPackagedShaderCachePath@AppPlatformWindows@@MEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();

    // symbol: ?getPlatformTTSEnabled@AppPlatformWindows@@UEBA_NXZ
    MCVAPI bool getPlatformTTSEnabled() const;

    // symbol: ?getPlatformTTSExists@AppPlatformWindows@@UEBA_NXZ
    MCVAPI bool getPlatformTTSExists() const;

    // symbol:
    // ?getPlatformTempPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;

    // symbol: ?getTotalHardwareThreadsCount@AppPlatformWindows@@UEBA_KXZ
    MCVAPI uint64 getTotalHardwareThreadsCount() const;

    // symbol: ?queueForMainThread_DEPRECATED@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void queueForMainThread_DEPRECATED(std::function<void()>);

    // symbol:
    // ?registerExperimentsActiveCrashDump@AppPlatformWindows@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const;

    // symbol: ??1AppPlatformWindows@@UEAA@XZ
    MCVAPI ~AppPlatformWindows();

    // symbol:
    // ?EXPERIMENTS_ACTIVE_KEY@AppPlatformWindows@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_findHighPerformanceThreadsCount@AppPlatformWindows@@IEBA_KXZ
    MCAPI uint64 _findHighPerformanceThreadsCount() const;

    // NOLINTEND
};
