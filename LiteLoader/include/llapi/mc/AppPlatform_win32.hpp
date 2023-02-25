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
     * @symbol  ?canLaunchUri\@AppPlatform_win32\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const &);
    /**
     * @symbol  ?copyImportFileToTempFolder\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @symbol  ?createWebview\@AppPlatform_win32\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments &&) const;
    /**
     * @symbol  ?getApplicationId\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getApplicationId() const;
    /**
     * @symbol  ?getAssetFileFullPath\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const &);
    /**
     * @symbol  ?getBuildPlatform\@AppPlatform_win32\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const;
    /**
     * @symbol  ?getDisplayHeight\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight();
    /**
     * @symbol  ?getDisplayWidth\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth();
    /**
     * @symbol  ?getEdition\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const;
    /**
     * @symbol  ?getFreeMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getFreeMemory() const;
    /**
     * @symbol  ?getLoggingPath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;
    /**
     * @symbol  ?getMemoryLimit\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getMemoryLimit() const;
    /**
     * @symbol  ?getModelName\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName();
    /**
     * @symbol  ?getOSVersion\@AppPlatform_win32\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const;
    /**
     * @symbol  ?getPackageFamilyName\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const;
    /**
     * @symbol  ?getPackagePath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const;
    /**
     * @symbol  ?getPixelsPerMillimeter\@AppPlatform_win32\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter();
    /**
     * @symbol  ?getPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPlatformString() const;
    /**
     * @symbol  ?getPlatformTTSEnabled\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @symbol  ?getPlatformType\@AppPlatform_win32\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const;
    /**
     * @symbol  ?getPlatformUIScalingRules\@AppPlatform_win32\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const;
    /**
     * @symbol  ?getRenderSurfaceParameters\@AppPlatform_win32\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const;
    /**
     * @symbol  ?getScreenHeight\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const;
    /**
     * @symbol  ?getScreenWidth\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const;
    /**
     * @symbol  ?getSecureStorage\@AppPlatform_win32\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();
    /**
     * @symbol  ?getSecureStorageKey\@AppPlatform_win32\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const &);
    /**
     * @symbol  ?getSubPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSubPlatformString() const;
    /**
     * @symbol  ?getTotalPhysicalMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalPhysicalMemory() const;
    /**
     * @symbol  ?getUsedMemory\@AppPlatform_win32\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getUsedMemory();
    /**
     * @symbol  ?hasBuyButtonWhenInvalidLicense\@AppPlatform_win32\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense();
    /**
     * @symbol  ?hasFastAlphaTest\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const;
    /**
     * @symbol  ?isCentennial\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const;
    /**
     * @symbol  ?isOnWifiConnectionTelemetryValue\@AppPlatform_win32\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue();
    /**
     * @symbol  ?isWebviewSupported\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const;
    /**
     * @symbol  ?launchUri\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const &);
    /**
     * @symbol  ?listAssetFilesIn\@AppPlatform_win32\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<class Core::PathBuffer<std::string>, struct std::less<class Core::PathBuffer<std::string>>, class std::allocator<class Core::PathBuffer<std::string>>> listAssetFilesIn(class Core::Path const &, std::string const &) const;
    /**
     * @symbol  ?readAssetFile\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const &);
    /**
     * @symbol  ?setFullscreenMode\@AppPlatform_win32\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode);
    /**
     * @symbol  ?setScreenSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int);
    /**
     * @symbol  ?setSecureStorageKey\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const &, class SecureStorageKey const &);
    /**
     * @symbol  ?setWindowSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int);
    /**
     * @symbol  ?setWindowText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const &);
    /**
     * @symbol  ?supportsFliteTTS\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const;
    /**
     * @symbol  ?supportsVibration\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const;
    /**
     * @symbol  ?updateTextBoxText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const &);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~AppPlatform_win32();
#endif
    /**
     * @symbol  ??0AppPlatform_win32\@\@QEAA\@PEAUHWND__\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1V?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$shared_ptr\@VHIDController\@\@\@3\@HH\@Z
     */
    MCAPI AppPlatform_win32(struct HWND__*, std::string const &, std::string const &, class gsl::basic_string_span<char const, -1>, class std::shared_ptr<class HIDController>, int, int);
    /**
     * @symbol  ?setupWorkingDirectory\@AppPlatform_win32\@\@SAXXZ
     */
    MCAPI static void setupWorkingDirectory();

//private:
    /**
     * @symbol  ?_fetchOSInformation\@AppPlatform_win32\@\@AEBA?AUOSInformation\@\@XZ
     */
    MCAPI struct OSInformation _fetchOSInformation() const;

private:

};