/**
 * @file  AppPlatform_win32.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatform_win32.
 *
 */
class AppPlatform_win32 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORM_WIN32
public:
    class AppPlatform_win32& operator=(class AppPlatform_win32 const &) = delete;
    AppPlatform_win32(class AppPlatform_win32 const &) = delete;
    AppPlatform_win32() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM_WIN32
    /**
     * @hash   -1484909414
     * @symbol ?canLaunchUri@AppPlatform_win32@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @hash   -1701165357
     * @symbol ?copyImportFileToTempFolder@AppPlatform_win32@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @hash   656835711
     * @symbol ?createWebview@AppPlatform_win32@@UEBA?AV?$shared_ptr@VWebviewInterface@@@std@@$$QEAVPlatformArguments@Webview@@@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @hash   1708756111
     * @symbol ?getApplicationId@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getApplicationId() const;
    /**
     * @hash   -789787796
     * @symbol ?getAssetFileFullPath@AppPlatform_win32@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @hash   2113941824
     * @symbol ?getBuildPlatform@AppPlatform_win32@@UEBA?AW4BuildPlatform@@XZ
     */
    MCVAPI enum BuildPlatform getBuildPlatform() const;
    /**
     * @hash   81253727
     * @symbol ?getDisplayHeight@AppPlatform_win32@@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @hash   -1967274762
     * @symbol ?getDisplayWidth@AppPlatform_win32@@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @hash   -695836270
     * @symbol ?getEdition@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @hash   -191111405
     * @symbol ?getFreeMemory@AppPlatform_win32@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getFreeMemory() const;
    /**
     * @hash   161485692
     * @symbol ?getLoggingPath@AppPlatform_win32@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @hash   -584523180
     * @symbol ?getMemoryLimit@AppPlatform_win32@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getMemoryLimit() const;
    /**
     * @hash   -1586653927
     * @symbol ?getModelName@AppPlatform_win32@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @hash   1606546528
     * @symbol ?getOSVersion@AppPlatform_win32@@UEBA?AW4OsVersion@@XZ
     */
    MCVAPI enum OsVersion getOSVersion() const;
    /**
     * @hash   -294998199
     * @symbol ?getPackageFamilyName@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @hash   1949193635
     * @symbol ?getPackagePath@AppPlatform_win32@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const;
    /**
     * @hash   652023045
     * @symbol ?getPixelsPerMillimeter@AppPlatform_win32@@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @hash   1512386820
     * @symbol ?getPlatformString@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getPlatformString() const;
    /**
     * @hash   -393786145
     * @symbol ?getPlatformTTSEnabled@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @hash   -295420250
     * @symbol ?getPlatformType@AppPlatform_win32@@UEBA?AW4PlatformType@@XZ
     */
    MCVAPI enum PlatformType getPlatformType() const;
    /**
     * @hash   1983536747
     * @symbol ?getPlatformUIScalingRules@AppPlatform_win32@@EEBA?AW4UIScalingRules@@XZ
     */
    MCVAPI enum UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @hash   -1427719670
     * @symbol ?getRenderSurfaceParameters@AppPlatform_win32@@UEBA?AV?$variant@PEAUHWND__@@Umonostate@std@@@std@@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @hash   -1052890124
     * @symbol ?getScreenHeight@AppPlatform_win32@@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @hash   -1419719697
     * @symbol ?getScreenWidth@AppPlatform_win32@@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @hash   -1071607826
     * @symbol ?getSecureStorage@AppPlatform_win32@@UEAA?AV?$unique_ptr@VSecureStorage@@U?$default_delete@VSecureStorage@@@std@@@std@@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @hash   -206001034
     * @symbol ?getSecureStorageKey@AppPlatform_win32@@UEAA?AVSecureStorageKey@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @hash   -1272128152
     * @symbol ?getSubPlatformString@AppPlatform_win32@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getSubPlatformString() const;
    /**
     * @hash   1737511526
     * @symbol ?getTotalPhysicalMemory@AppPlatform_win32@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalPhysicalMemory() const;
    /**
     * @hash   1752812133
     * @symbol ?getUsedMemory@AppPlatform_win32@@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getUsedMemory();
    /**
     * @hash   1392123307
     * @symbol ?hasBuyButtonWhenInvalidLicense@AppPlatform_win32@@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @hash   852533730
     * @symbol ?hasFastAlphaTest@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @hash   -915637079
     * @symbol ?isCentennial@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @hash   -143299791
     * @symbol ?isOnWifiConnectionTelemetryValue@AppPlatform_win32@@UEAA?AV?$optional@_N@std@@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @hash   1050749431
     * @symbol ?isWebviewSupported@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @hash   -43088692
     * @symbol ?launchUri@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @hash   -2016164973
     * @symbol ?listAssetFilesIn@AppPlatform_win32@@UEBA?AV?$set@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@4@@std@@AEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @hash   -1749228844
     * @symbol ?readAssetFile@AppPlatform_win32@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @hash   1199137583
     * @symbol ?setFullscreenMode@AppPlatform_win32@@UEAAXW4FullscreenMode@@@Z
     */
    MCVAPI void setFullscreenMode(enum FullscreenMode);
    /**
     * @hash   -211887578
     * @symbol ?setScreenSize@AppPlatform_win32@@UEAAXHH@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @hash   -269055154
     * @symbol ?setSecureStorageKey@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSecureStorageKey@@@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @hash   1948967562
     * @symbol ?setWindowSize@AppPlatform_win32@@UEAAXHH@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @hash   -1774903898
     * @symbol ?setWindowText@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @hash   385382091
     * @symbol ?supportsFliteTTS@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @hash   -159594122
     * @symbol ?supportsVibration@AppPlatform_win32@@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @hash   469140851
     * @symbol ?updateTextBoxText@AppPlatform_win32@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @hash   -1619372552
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatform_win32();
#endif
    /**
     * @hash   -342030993
     * @symbol ??0AppPlatform_win32@@QEAA@PEAUHWND__@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1V?$basic_string_span@$$CBD$0?0@gsl@@V?$shared_ptr@VHIDController@@@3@HH@Z
     */
    MCAPI AppPlatform_win32(struct HWND__*, std::string const &, std::string const &, class gsl::basic_string_span<char const, -1>, class std::shared_ptr<class HIDController>, int, int);
    /**
     * @hash   588386789
     * @symbol ?setupWorkingDirectory@AppPlatform_win32@@SAXXZ
     */
    MCAPI static void setupWorkingDirectory();

//private:
    /**
     * @hash   -573633540
     * @symbol ?_fetchOSInformation@AppPlatform_win32@@AEBA?AUOSInformation@@XZ
     */
    MCAPI struct OSInformation _fetchOSInformation() const;

private:

};