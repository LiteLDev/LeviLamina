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
    AppPlatformWindows& operator=(AppPlatformWindows const&) = delete;
    AppPlatformWindows(AppPlatformWindows const&)            = delete;
    AppPlatformWindows()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMWINDOWS
    /**
     * @symbol
     * ?_getCurrentStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const; // NOLINT
    /**
     * @symbol
     * ?_getExternalStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const; // NOLINT
    /**
     * @symbol
     * ?_getInternalStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const; // NOLINT
    /**
     * @symbol
     * ?_getUserdataPath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const; // NOLINT
    /**
     * @symbol ?allowContentLogWriteToDisk\@AppPlatformWindows\@\@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk(); // NOLINT
    /**
     * @symbol ?calculateAvailableDiskFreeSpace\@AppPlatformWindows\@\@UEAA_KAEBVPath\@Core\@\@\@Z
     */
    MCVAPI unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const&); // NOLINT
    /**
     * @symbol ?canAppSelfTerminate\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool canAppSelfTerminate() const; // NOLINT
    /**
     * @symbol
     * ?copyImportFileToTempFolder\@AppPlatformWindows\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&); // NOLINT
    /**
     * @symbol ?getHighPerformanceThreadsCount\@AppPlatformWindows\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const; // NOLINT
    /**
     * @symbol ?getMainThreadQueue\@AppPlatformWindows\@\@UEAAAEAV?$MPMCQueue\@V?$function\@$$A6AXXZ\@std\@\@\@\@XZ
     */
    MCVAPI class MPMCQueue<class std::function<void(void)>>& getMainThreadQueue(); // NOLINT
    /**
     * @symbol
     * ?getPackagedShaderCachePath\@AppPlatformWindows\@\@MEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath(); // NOLINT
    /**
     * @symbol ?getPlatformTTSEnabled\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const; // NOLINT
    /**
     * @symbol ?getPlatformTTSExists\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformTempPath\@AppPlatformWindows\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const; // NOLINT
    /**
     * @symbol ?getTotalHardwareThreadsCount\@AppPlatformWindows\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const; // NOLINT
    /**
     * @symbol ?queueForMainThread_DEPRECATED\@AppPlatformWindows\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCVAPI void queueForMainThread_DEPRECATED(class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?registerExperimentsActiveCrashDump\@AppPlatformWindows\@\@UEBAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatformWindows(); // NOLINT
#endif
    /**
     * @symbol
     * ?EXPERIMENTS_ACTIVE_KEY\@AppPlatformWindows\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY; // NOLINT

    // protected:
    /**
     * @symbol ?_findHighPerformanceThreadsCount\@AppPlatformWindows\@\@IEBA_KXZ
     */
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const; // NOLINT

protected:
};
