/**
 * @file  MC/AppPlatformWindows.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2052449199
     * @symbol ?_getCurrentStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;
    /**
     * @hash   -260438193
     * @symbol ?_getExternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;
    /**
     * @hash   -1834119155
     * @symbol ?_getInternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;
    /**
     * @hash   1890672610
     * @symbol ?_getUserdataPath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;
    /**
     * @hash   -1295446899
     * @symbol ?allowContentLogWriteToDisk@AppPlatformWindows@@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @hash   -1769900935
     * @symbol ?calculateAvailableDiskFreeSpace@AppPlatformWindows@@UEAA_KAEBVPath@Core@@@Z
     */
    MCVAPI unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const &);
    /**
     * @hash   1369385229
     * @symbol ?canAppSelfTerminate@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool canAppSelfTerminate() const;
    /**
     * @hash   -2033589630
     * @symbol ?copyImportFileToTempFolder@AppPlatformWindows@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @hash   -781175857
     * @symbol ?getHighPerformanceThreadsCount@AppPlatformWindows@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @hash   251598382
     * @symbol ?getMainThreadQueue@AppPlatformWindows@@UEAAAEAV?$MPMCQueue@V?$function@$$A6AXXZ@std@@@@XZ
     */
    MCVAPI class MPMCQueue<class std::function<void (void)>> & getMainThreadQueue();
    /**
     * @hash   -569213369
     * @symbol ?getPackagedShaderCachePath@AppPlatformWindows@@MEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @hash   -1938040688
     * @symbol ?getPlatformTTSEnabled@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @hash   640543887
     * @symbol ?getPlatformTTSExists@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @hash   -1678918751
     * @symbol ?getPlatformTempPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;
    /**
     * @hash   -668515363
     * @symbol ?getTotalHardwareThreadsCount@AppPlatformWindows@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @hash   924180710
     * @symbol ?queueForMainThread_DEPRECATED@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCVAPI void queueForMainThread_DEPRECATED(class std::function<void (void)>);
    /**
     * @hash   -714623396
     * @symbol ?registerExperimentsActiveCrashDump@AppPlatformWindows@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @hash   -743838956
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatformWindows();
#endif
    /**
     * @hash   778008395
     * @symbol ??0AppPlatformWindows@@QEAA@XZ
     */
    MCAPI AppPlatformWindows();
    /**
     * @hash   946508795
     * @symbol ?EXPERIMENTS_ACTIVE_KEY@AppPlatformWindows@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

//protected:
    /**
     * @hash   1803104433
     * @symbol ?_findHighPerformanceThreadsCount@AppPlatformWindows@@IEBA_KXZ
     */
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const;

protected:

};