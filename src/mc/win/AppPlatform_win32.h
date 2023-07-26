#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Webview { class PlatformArguments; }
// clang-format on

class AppPlatform_win32 {

public:
    // prevent constructor by default
    AppPlatform_win32& operator=(AppPlatform_win32 const&) = delete;
    AppPlatform_win32(AppPlatform_win32 const&)            = delete;
    AppPlatform_win32()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORM_WIN32
    /**
     * @symbol
     * ?canLaunchUri\@AppPlatform_win32\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canLaunchUri(std::string const&); // NOLINT
    /**
     * @symbol
     * ?copyImportFileToTempFolder\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&); // NOLINT
    /**
     * @symbol
     * ?createWebview\@AppPlatform_win32\@\@UEBA?AV?$shared_ptr\@VWebviewInterface\@\@\@std\@\@$$QEAVPlatformArguments\@Webview\@\@\@Z
     */
    MCVAPI class std::shared_ptr<class WebviewInterface>
    createWebview(class Webview::PlatformArguments&&) const; // NOLINT
    /**
     * @symbol
     * ?getApplicationId\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getApplicationId() const; // NOLINT
    /**
     * @symbol
     * ?getAssetFileFullPath\@AppPlatform_win32\@\@UEAA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const&); // NOLINT
    /**
     * @symbol ?getBuildPlatform\@AppPlatform_win32\@\@UEBA?AW4BuildPlatform\@\@XZ
     */
    MCVAPI enum class BuildPlatform getBuildPlatform() const; // NOLINT
    /**
     * @symbol ?getDisplayHeight\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayHeight(); // NOLINT
    /**
     * @symbol ?getDisplayWidth\@AppPlatform_win32\@\@UEAAHXZ
     */
    MCVAPI int getDisplayWidth(); // NOLINT
    /**
     * @symbol
     * ?getEdition\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getEdition() const; // NOLINT
    /**
     * @symbol ?getFreeMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getFreeMemory() const; // NOLINT
    /**
     * @symbol
     * ?getLoggingPath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const; // NOLINT
    /**
     * @symbol ?getMemoryLimit\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getMemoryLimit() const; // NOLINT
    /**
     * @symbol
     * ?getModelName\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getModelName(); // NOLINT
    /**
     * @symbol ?getOSVersion\@AppPlatform_win32\@\@UEBA?AW4OsVersion\@\@XZ
     */
    MCVAPI enum class OsVersion getOSVersion() const; // NOLINT
    /**
     * @symbol
     * ?getPackageFamilyName\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPackageFamilyName() const; // NOLINT
    /**
     * @symbol
     * ?getPackagePath\@AppPlatform_win32\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const; // NOLINT
    /**
     * @symbol ?getPixelsPerMillimeter\@AppPlatform_win32\@\@UEAAMXZ
     */
    MCVAPI float getPixelsPerMillimeter(); // NOLINT
    /**
     * @symbol
     * ?getPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPlatformString() const; // NOLINT
    /**
     * @symbol ?getPlatformTTSEnabled\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const; // NOLINT
    /**
     * @symbol ?getPlatformType\@AppPlatform_win32\@\@UEBA?AW4PlatformType\@\@XZ
     */
    MCVAPI enum class PlatformType getPlatformType() const; // NOLINT
    /**
     * @symbol ?getPlatformUIScalingRules\@AppPlatform_win32\@\@EEBA?AW4UIScalingRules\@\@XZ
     */
    MCVAPI enum class UIScalingRules getPlatformUIScalingRules() const; // NOLINT
    /**
     * @symbol
     * ?getRenderSurfaceParameters\@AppPlatform_win32\@\@UEBA?AV?$variant\@PEAUHWND__\@\@Umonostate\@std\@\@\@std\@\@XZ
     */
    MCVAPI class std::variant<struct HWND__*, struct std::monostate> getRenderSurfaceParameters() const; // NOLINT
    /**
     * @symbol ?getScreenHeight\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenHeight() const; // NOLINT
    /**
     * @symbol ?getScreenWidth\@AppPlatform_win32\@\@UEBAHXZ
     */
    MCVAPI int getScreenWidth() const; // NOLINT
    /**
     * @symbol
     * ?getSecureStorage\@AppPlatform_win32\@\@UEAA?AV?$unique_ptr\@VSecureStorage\@\@U?$default_delete\@VSecureStorage\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage(); // NOLINT
    /**
     * @symbol
     * ?getSecureStorageKey\@AppPlatform_win32\@\@UEAA?AVSecureStorageKey\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getSubPlatformString\@AppPlatform_win32\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getSubPlatformString() const; // NOLINT
    /**
     * @symbol ?getTotalPhysicalMemory\@AppPlatform_win32\@\@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalPhysicalMemory() const; // NOLINT
    /**
     * @symbol ?getUsedMemory\@AppPlatform_win32\@\@UEAA_KXZ
     */
    MCVAPI unsigned __int64 getUsedMemory(); // NOLINT
    /**
     * @symbol ?hasBuyButtonWhenInvalidLicense\@AppPlatform_win32\@\@UEAA_NXZ
     */
    MCVAPI bool hasBuyButtonWhenInvalidLicense(); // NOLINT
    /**
     * @symbol ?hasFastAlphaTest\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool hasFastAlphaTest() const; // NOLINT
    /**
     * @symbol ?hideSplashScreen\@AppPlatform_win32\@\@UEAAXXZ
     */
    MCVAPI void hideSplashScreen(); // NOLINT
    /**
     * @symbol ?isCentennial\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isCentennial() const; // NOLINT
    /**
     * @symbol ?isOnWifiConnectionTelemetryValue\@AppPlatform_win32\@\@UEAA?AV?$optional\@_N\@std\@\@XZ
     */
    MCVAPI class std::optional<bool> isOnWifiConnectionTelemetryValue(); // NOLINT
    /**
     * @symbol ?isWebviewSupported\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool isWebviewSupported() const; // NOLINT
    /**
     * @symbol
     * ?launchUri\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void launchUri(std::string const&); // NOLINT
    /**
     * @symbol
     * ?listAssetFilesIn\@AppPlatform_win32\@\@UEBA?AV?$set\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@U?$less\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@4\@\@std\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCVAPI class std::set<
        class Core::PathBuffer<std::string>,
        struct std::less<class Core::PathBuffer<std::string>>,
        class std::allocator<class Core::PathBuffer<std::string>>>
    listAssetFilesIn(class Core::Path const&, std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?readAssetFile\@AppPlatform_win32\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCVAPI std::string readAssetFile(class Core::Path const&); // NOLINT
    /**
     * @symbol ?setFullscreenMode\@AppPlatform_win32\@\@UEAAXW4FullscreenMode\@\@\@Z
     */
    MCVAPI void setFullscreenMode(enum class FullscreenMode); // NOLINT
    /**
     * @symbol ?setScreenSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setScreenSize(int, int); // NOLINT
    /**
     * @symbol
     * ?setSecureStorageKey\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSecureStorageKey\@\@\@Z
     */
    MCVAPI void setSecureStorageKey(std::string const&, class SecureStorageKey const&); // NOLINT
    /**
     * @symbol ?setWindowSize\@AppPlatform_win32\@\@UEAAXHH\@Z
     */
    MCVAPI void setWindowSize(int, int); // NOLINT
    /**
     * @symbol
     * ?setWindowText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setWindowText(std::string const&); // NOLINT
    /**
     * @symbol ?supportsFliteTTS\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsFliteTTS() const; // NOLINT
    /**
     * @symbol ?supportsVibration\@AppPlatform_win32\@\@UEBA_NXZ
     */
    MCVAPI bool supportsVibration() const; // NOLINT
    /**
     * @symbol
     * ?updateTextBoxText\@AppPlatform_win32\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void updateTextBoxText(std::string const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatform_win32(); // NOLINT
#endif
    /**
     * @symbol
     * ??0AppPlatform_win32\@\@QEAA\@PEAUHWND__\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@V?$shared_ptr\@VHIDController\@\@\@3\@HH\@Z
     */
    MCAPI AppPlatform_win32(
        struct HWND__*,
        std::string const&,
        std::string const&,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::shared_ptr<class HIDController>,
        int,
        int
    ); // NOLINT
    /**
     * @symbol ?setupWorkingDirectory\@AppPlatform_win32\@\@SAXXZ
     */
    MCAPI static void setupWorkingDirectory(); // NOLINT

    // private:
    /**
     * @symbol ?_fetchOSInformation\@AppPlatform_win32\@\@AEBA?AUOSInformation\@\@XZ
     */
    MCAPI struct OSInformation _fetchOSInformation() const; // NOLINT

private:
};
