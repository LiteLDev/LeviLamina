/**
 * @file  AppPlatformWindows.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatformWindows.
 *
 */
class AppPlatformWindows {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMWINDOWS
public:
    class AppPlatformWindows& operator=(class AppPlatformWindows const &) = delete;
    AppPlatformWindows(class AppPlatformWindows const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMWINDOWS
    /**
     * @symbol  ?_getCurrentStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;
    /**
     * @symbol  ?_getExternalStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;
    /**
     * @symbol  ?_getInternalStoragePath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;
    /**
     * @symbol  ?_getUserdataPath\@AppPlatformWindows\@\@EEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;
    /**
     * @symbol  ?allowContentLogWriteToDisk\@AppPlatformWindows\@\@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @symbol  ?calculateAvailableDiskFreeSpace\@AppPlatformWindows\@\@UEAA_KAEBVPath\@Core\@\@\@Z
     */
    MCVAPI unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const &);
    /**
     * @symbol  ?canAppSelfTerminate\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool canAppSelfTerminate() const;
    /**
     * @symbol  ?copyImportFileToTempFolder\@AppPlatformWindows\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @symbol  ?getHighPerformanceThreadsCount\@AppPlatformWindows\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @symbol  ?getMainThreadQueue\@AppPlatformWindows\@\@UEAAAEAV?$MPMCQueue\@V?$function\@$$A6AXXZ\@std\@\@\@\@XZ
     */
    MCVAPI class MPMCQueue<class std::function<void (void)>> & getMainThreadQueue();
    /**
     * @symbol  ?getPackagedShaderCachePath\@AppPlatformWindows\@\@MEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @symbol  ?getPlatformTTSEnabled\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @symbol  ?getPlatformTTSExists\@AppPlatformWindows\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @symbol  ?getPlatformTempPath\@AppPlatformWindows\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;
    /**
     * @symbol  ?getTotalHardwareThreadsCount\@AppPlatformWindows\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @symbol  ?queueForMainThread_DEPRECATED\@AppPlatformWindows\@\@UEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCVAPI void queueForMainThread_DEPRECATED(class std::function<void (void)>);
    /**
     * @symbol  ?registerExperimentsActiveCrashDump\@AppPlatformWindows\@\@UEBAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~AppPlatformWindows();
#endif
    /**
     * @symbol  ??0AppPlatformWindows\@\@QEAA\@XZ
     */
    MCAPI AppPlatformWindows();
    /**
     * @symbol  ?EXPERIMENTS_ACTIVE_KEY\@AppPlatformWindows\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

//protected:
    /**
     * @symbol  ?_findHighPerformanceThreadsCount\@AppPlatformWindows\@\@IEBA_KXZ
     */
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const;

protected:

};