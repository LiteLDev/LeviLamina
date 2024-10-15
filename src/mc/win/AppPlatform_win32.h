#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Webview { class PlatformArguments; }
// clang-format on

class AppPlatform_win32 {
public:
    // prevent constructor by default
    AppPlatform_win32& operator=(AppPlatform_win32 const&);
    AppPlatform_win32(AppPlatform_win32 const&);
    AppPlatform_win32();

public:
    // NOLINTBEGIN
    MCVAPI bool canLaunchUri(std::string const&);

    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const&);

    MCVAPI std::shared_ptr<class WebviewInterface> createWebview(class Webview::PlatformArguments&&) const;

    MCVAPI std::string getApplicationId() const;

    MCVAPI class Core::PathBuffer<std::string> getAssetFileFullPath(class Core::Path const&);

    MCVAPI ::BuildPlatform getBuildPlatform() const;

    MCVAPI int getCaretPosition() const;

    MCVAPI int getDisplayHeight();

    MCVAPI int getDisplayWidth();

    MCVAPI std::string getEdition() const;

    MCVAPI uint64 getFreeMemory() const;

    MCVAPI class Core::PathBuffer<std::string> getLoggingPath() const;

    MCVAPI uint64 getMemoryLimit() const;

    MCVAPI std::string getModelName();

    MCVAPI ::OsVersion getOSVersion() const;

    MCVAPI std::string getPackageFamilyName() const;

    MCVAPI class Core::PathBuffer<std::string> getPackagePath() const;

    MCVAPI int getPlatformDpi() const;

    MCVAPI std::string getPlatformString() const;

    MCVAPI bool getPlatformTTSEnabled() const;

    MCVAPI ::PlatformType getPlatformType() const;

    MCVAPI ::UIScalingRules getPlatformUIScalingRules() const;

    MCVAPI std::variant<struct HWND__*, std::monostate> getRenderSurfaceParameters() const;

    MCVAPI int getScreenHeight() const;

    MCVAPI int getScreenWidth() const;

    MCVAPI std::unique_ptr<class SecureStorage> getSecureStorage();

    MCVAPI class SecureStorageKey getSecureStorageKey(std::string const&);

    MCVAPI std::string getSubPlatformString() const;

    MCVAPI std::string getTextBoxBackend() const;

    MCVAPI uint64 getTotalPhysicalMemory() const;

    MCVAPI uint64 getUsedMemory();

    MCVAPI bool hasBuyButtonWhenInvalidLicense();

    MCVAPI bool hasFastAlphaTest() const;

    MCVAPI void hideSplashScreen();

    MCVAPI bool isCentennial() const;

    MCVAPI std::optional<bool> isOnWifiConnectionTelemetryValue();

    MCVAPI bool isWebviewSupported() const;

    MCVAPI void launchUri(std::string const&);

    MCVAPI std::set<class Core::PathBuffer<std::string>>
           listAssetFilesIn(class Core::Path const&, std::string const&) const;

    MCVAPI std::string readAssetFile(class Core::Path const&);

    MCVAPI void setCaretPosition(int);

    MCVAPI void setFullscreenMode(::FullscreenMode);

    MCVAPI void setScreenSize(int, int);

    MCVAPI void setSecureStorageKey(std::string const&, class SecureStorageKey const&);

    MCVAPI void setTextBoxBackend(std::string const&);

    MCVAPI void setWindowSize(int, int);

    MCVAPI void setWindowText(std::string const&);

    MCVAPI bool supportsFliteTTS() const;

    MCVAPI bool supportsVibration() const;

    MCVAPI ~AppPlatform_win32();

    MCAPI AppPlatform_win32(
        struct HWND__*,
        std::string const&,
        std::string const&,
        std::string_view,
        std::shared_ptr<class HIDController>,
        int,
        int
    );

    MCAPI static void setupWorkingDirectory();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct OSInformation _fetchOSInformation() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForIAppPlatform();

    MCAPI static void** $vftableForISecureStorageKeySystem();

    MCAPI void* ctor$(
        struct HWND__*,
        std::string const&,
        std::string const&,
        std::string_view,
        std::shared_ptr<class HIDController>,
        int,
        int
    );

    MCAPI void dtor$();

    MCAPI bool canLaunchUri$(std::string const&);

    MCAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder$(class Core::Path const&);

    MCAPI std::shared_ptr<class WebviewInterface> createWebview$(class Webview::PlatformArguments&&) const;

    MCAPI std::string getApplicationId$() const;

    MCAPI class Core::PathBuffer<std::string> getAssetFileFullPath$(class Core::Path const&);

    MCAPI ::BuildPlatform getBuildPlatform$() const;

    MCAPI int getCaretPosition$() const;

    MCAPI int getDisplayHeight$();

    MCAPI int getDisplayWidth$();

    MCAPI std::string getEdition$() const;

    MCAPI uint64 getFreeMemory$() const;

    MCAPI class Core::PathBuffer<std::string> getLoggingPath$() const;

    MCAPI uint64 getMemoryLimit$() const;

    MCAPI std::string getModelName$();

    MCAPI ::OsVersion getOSVersion$() const;

    MCAPI std::string getPackageFamilyName$() const;

    MCAPI class Core::PathBuffer<std::string> getPackagePath$() const;

    MCAPI int getPlatformDpi$() const;

    MCAPI std::string getPlatformString$() const;

    MCAPI bool getPlatformTTSEnabled$() const;

    MCAPI ::PlatformType getPlatformType$() const;

    MCAPI ::UIScalingRules getPlatformUIScalingRules$() const;

    MCAPI std::variant<struct HWND__*, std::monostate> getRenderSurfaceParameters$() const;

    MCAPI int getScreenHeight$() const;

    MCAPI int getScreenWidth$() const;

    MCAPI std::unique_ptr<class SecureStorage> getSecureStorage$();

    MCAPI class SecureStorageKey getSecureStorageKey$(std::string const&);

    MCAPI std::string getSubPlatformString$() const;

    MCAPI std::string getTextBoxBackend$() const;

    MCAPI uint64 getTotalPhysicalMemory$() const;

    MCAPI uint64 getUsedMemory$();

    MCAPI bool hasBuyButtonWhenInvalidLicense$();

    MCAPI bool hasFastAlphaTest$() const;

    MCAPI void hideSplashScreen$();

    MCAPI bool isCentennial$() const;

    MCAPI std::optional<bool> isOnWifiConnectionTelemetryValue$();

    MCAPI bool isWebviewSupported$() const;

    MCAPI void launchUri$(std::string const&);

    MCAPI std::set<class Core::PathBuffer<std::string>>
          listAssetFilesIn$(class Core::Path const&, std::string const&) const;

    MCAPI std::string readAssetFile$(class Core::Path const&);

    MCAPI void setCaretPosition$(int);

    MCAPI void setFullscreenMode$(::FullscreenMode);

    MCAPI void setScreenSize$(int, int);

    MCAPI void setSecureStorageKey$(std::string const&, class SecureStorageKey const&);

    MCAPI void setTextBoxBackend$(std::string const&);

    MCAPI void setWindowSize$(int, int);

    MCAPI void setWindowText$(std::string const&);

    MCAPI bool supportsFliteTTS$() const;

    MCAPI bool supportsVibration$() const;

    // NOLINTEND
};
