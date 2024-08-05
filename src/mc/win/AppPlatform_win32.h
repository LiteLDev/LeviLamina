#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/FullscreenMode.h"
#include "mc/enums/OsVersion.h"
#include "mc/enums/PlatformType.h"
#include "mc/enums/UIScalingRules.h"

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
};
