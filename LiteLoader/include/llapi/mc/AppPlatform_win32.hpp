/**
 * @file  AppPlatform_win32.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1385011542
     * @symbol  ?canLaunchUri\@AppPlatform_win32\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @hash   -894909421
     * @symbol  ?copyImportFileToTempFolder\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @hash   1463091647
     * @symbol  ?createWebview\@AppPlatform_win32\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @hash   -1779955249
     * @symbol  ?getApplicationId\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getApplicationId() const;
    /**
     * @hash   16468140
     * @symbol  ?getAssetFileFullPath\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @hash   -1972219392
     * @symbol  ?getBuildPlatform\@AppPlatform_win32\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const;
    /**
     * @hash   887509663
     * @symbol  ?getDisplayHeight\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @hash   -1161018826
     * @symbol  ?getDisplayWidth\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @hash   110419666
     * @symbol  ?getEdition\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @hash   615405923
     * @symbol  ?getFreeMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getFreeMemory() const;
    /**
     * @hash   968003020
     * @symbol  ?getLoggingPath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @hash   221994148
     * @symbol  ?getMemoryLimit\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getMemoryLimit() const;
    /**
     * @hash   -780136599
     * @symbol  ?getModelName\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @hash   -1881903440
     * @symbol  ?getOSVersion\@AppPlatform_win32\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const;
    /**
     * @hash   511519129
     * @symbol  ?getPackageFamilyName\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @hash   -1539256333
     * @symbol  ?getPackagePath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const;
    /**
     * @hash   1458540373
     * @symbol  ?getPixelsPerMillimeter\@AppPlatform_win32\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @hash   -1976063148
     * @symbol  ?getPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPlatformString() const;
    /**
     * @hash   412731183
     * @symbol  ?getPlatformTTSEnabled\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @hash   -198797466
     * @symbol  ?getPlatformType\@AppPlatform_win32\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const;
    /**
     * @hash   2080159531
     * @symbol  ?getPlatformUIScalingRules\@AppPlatform_win32\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @hash   -621202342
     * @symbol  ?getRenderSurfaceParameters\@AppPlatform_win32\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @hash   -246372796
     * @symbol  ?getScreenHeight\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @hash   -613202369
     * @symbol  ?getScreenWidth\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @hash   -265090498
     * @symbol  ?getSecureStorage\@AppPlatform_win32\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @hash   600531670
     * @symbol  ?getSecureStorageKey\@AppPlatform_win32\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @hash   -465580072
     * @symbol  ?getSubPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSubPlatformString() const;
    /**
     * @hash   -1750907690
     * @symbol  ?getTotalPhysicalMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalPhysicalMemory() const;
    /**
     * @hash   -1735607083
     * @symbol  ?getUsedMemory\@AppPlatform_win32\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getUsedMemory();
    /**
     * @hash   1492021179
     * @symbol  ?hasBuyButtonWhenInvalidLicense\@AppPlatform_win32\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @hash   952431602
     * @symbol  ?hasFastAlphaTest\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @hash   -109073623
     * @symbol  ?isCentennial\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @hash   663263665
     * @symbol  ?isOnWifiConnectionTelemetryValue\@AppPlatform_win32\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @hash   1857312887
     * @symbol  ?isWebviewSupported\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @hash   763459388
     * @symbol  ?launchUri\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @hash   -1209616893
     * @symbol  ?listAssetFilesIn\@AppPlatform_win32\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @hash   -942911404
     * @symbol  ?readAssetFile\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @hash   2005424271
     * @symbol  ?setFullscreenMode\@AppPlatform_win32\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode);
    /**
     * @hash   -120000602
     * @symbol  ?setScreenSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @hash   -177168178
     * @symbol  ?setSecureStorageKey\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @hash   -1539713046
     * @symbol  ?setWindowSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @hash   -968617210
     * @symbol  ?setWindowText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @hash   485279963
     * @symbol  ?supportsFliteTTS\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @hash   -59696250
     * @symbol  ?supportsVibration\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @hash   561027827
     * @symbol  ?updateTextBoxText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @hash   -813208872
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~AppPlatform_win32();
#endif
    /**
     * @hash   463902047
     * @symbol  ??0AppPlatform_win32\@\@QEAA\@PEAUHWND__\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$shared_ptr\@VHIDController\@\@\@3\@HH\@Z
     */
    MCAPI AppPlatform_win32(struct HWND__*, std::string const &, std::string const &, class gsl::basic_string_span<char const, -1>, class std::shared_ptr<class HIDController>, int, int);
    /**
     * @hash   1394673477
     * @symbol  ?setupWorkingDirectory\@AppPlatform_win32\@\@SAXXZ
     */
    MCAPI static void setupWorkingDirectory();

//private:
    /**
     * @hash   232914540
     * @symbol  ?_fetchOSInformation\@AppPlatform_win32\@\@AEBA?AUOSInformation\@\@XZ
     */
    MCAPI struct OSInformation _fetchOSInformation() const;

private:

};