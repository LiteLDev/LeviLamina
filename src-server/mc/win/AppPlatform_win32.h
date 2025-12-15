#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/win/AppPlatformWindows.h"

// auto generated forward declare list
// clang-format off
class HIDController;
class SecureStorage;
class SecureStorageKey;
class WebviewInterface;
struct OSInformation;
namespace Core { class Path; }
namespace Webview { struct PlatformArguments; }
// clang-format on

class AppPlatform_win32 : public ::AppPlatformWindows {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb24ea2;
    ::ll::UntypedStorage<8, 8>  mUnk356cd6;
    ::ll::UntypedStorage<8, 8>  mUnkcfaa94;
    ::ll::UntypedStorage<8, 32> mUnka7d9a1;
    ::ll::UntypedStorage<8, 32> mUnk1d0c4e;
    ::ll::UntypedStorage<1, 1>  mUnk113178;
    ::ll::UntypedStorage<1, 1>  mUnk29784c;
    ::ll::UntypedStorage<8, 8>  mUnke25532;
    ::ll::UntypedStorage<8, 8>  mUnk66b4ba;
    ::ll::UntypedStorage<4, 16> mUnk44554b;
    ::ll::UntypedStorage<4, 4>  mUnkabbaf7;
    ::ll::UntypedStorage<8, 40> mUnka50bee;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform_win32& operator=(AppPlatform_win32 const&);
    AppPlatform_win32(AppPlatform_win32 const&);
    AppPlatform_win32();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform_win32() /*override*/;

    virtual ::std::string _readAssetFileInternal(::Core::Path const& filename) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename) /*override*/;

    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    virtual bool canLaunchUri(::std::string const& uri) /*override*/;

    virtual void launchUri(::std::string const& uri) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    virtual ::std::string getEdition() const /*override*/;

    virtual ::OsVersion getOSVersion() const /*override*/;

    virtual bool supportsVibration() const /*override*/;

    virtual bool supportsFliteTTS() const /*override*/;

    virtual int getScreenWidth() const /*override*/;

    virtual int getScreenHeight() const /*override*/;

    virtual int getDisplayWidth() /*override*/;

    virtual int getDisplayHeight() /*override*/;

    virtual void setScreenSize(int width, int height) /*override*/;

    virtual void setWindowSize(int width, int height) /*override*/;

    virtual void setWindowText(::std::string const& title) /*override*/;

    virtual ::std::string getTextBoxBackend() const /*override*/;

    virtual void setTextBoxBackend(::std::string const& newText) /*override*/;

    virtual int getCaretPosition() const /*override*/;

    virtual void setCaretPosition(int position) /*override*/;

    virtual bool hasBuyButtonWhenInvalidLicense() /*override*/;

    virtual ::std::string getApplicationId() const /*override*/;

    virtual bool isCentennial() const /*override*/;

    virtual ::std::string getPackageFamilyName() const /*override*/;

    virtual ::PlatformType getPlatformType() const /*override*/;

    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage() /*override*/;

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    virtual ::std::string getPlatformString() const /*override*/;

    virtual ::std::string getSubPlatformString() const /*override*/;

    virtual uint64 getFreeMemory() const /*override*/;

    virtual uint64 getMemoryLimit() const /*override*/;

    virtual uint64 getUsedMemory() /*override*/;

    virtual uint64 getTotalPhysicalMemory() const /*override*/;

    virtual ::std::string getModelName() /*override*/;

    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode) /*override*/;

    virtual bool isWebviewSupported() const /*override*/;

    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&& args) const /*override*/;

    virtual bool getPlatformTTSEnabled() const /*override*/;

    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const /*override*/;

    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue() /*override*/;

    virtual void hideSplashScreen() /*override*/;

    virtual int getPlatformDpi() const /*override*/;

    virtual ::UIScalingRules getPlatformUIScalingRules() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform_win32(
        ::HWND__*            hWnd,
        ::std::string const& dataFolder,
        ::std::string_view,
        ::std::shared_ptr<::HIDController> HIDControllerWinRT,
        int                                screenWidth,
        int                                screenHeight
    );

    MCNAPI ::OSInformation _fetchOSInformation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::HWND__*            hWnd,
        ::std::string const& dataFolder,
        ::std::string_view,
        ::std::shared_ptr<::HIDController> HIDControllerWinRT,
        int                                screenWidth,
        int                                screenHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $_readAssetFileInternal(::Core::Path const& filename);

    MCNAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCNAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    MCNAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCNAPI bool $canLaunchUri(::std::string const& uri);

    MCNAPI void $launchUri(::std::string const& uri);

    MCNAPI ::Core::PathBuffer<::std::string> $getPackagePath() const;

    MCNAPI ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCNAPI ::std::string $getEdition() const;

    MCNAPI ::OsVersion $getOSVersion() const;

    MCNAPI bool $supportsVibration() const;

    MCNAPI bool $supportsFliteTTS() const;

    MCNAPI int $getScreenWidth() const;

    MCNAPI int $getScreenHeight() const;

    MCNAPI int $getDisplayWidth();

    MCNAPI int $getDisplayHeight();

    MCNAPI void $setScreenSize(int width, int height);

    MCNAPI void $setWindowSize(int width, int height);

    MCNAPI void $setWindowText(::std::string const& title);

    MCNAPI ::std::string $getTextBoxBackend() const;

    MCNAPI void $setTextBoxBackend(::std::string const& newText);

    MCNAPI int $getCaretPosition() const;

    MCNAPI void $setCaretPosition(int position);

    MCNAPI bool $hasBuyButtonWhenInvalidLicense();

    MCNAPI ::std::string $getApplicationId() const;

    MCNAPI bool $isCentennial() const;

    MCNAPI ::std::string $getPackageFamilyName() const;

    MCNAPI ::PlatformType $getPlatformType() const;

    MCNAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCNAPI ::SecureStorageKey $getSecureStorageKey(::std::string const&);

    MCNAPI void $setSecureStorageKey(::std::string const&, ::SecureStorageKey const&);

    MCNAPI ::std::string $getPlatformString() const;

    MCNAPI ::std::string $getSubPlatformString() const;

    MCNAPI uint64 $getFreeMemory() const;

    MCNAPI uint64 $getMemoryLimit() const;

    MCNAPI uint64 $getUsedMemory();

    MCNAPI uint64 $getTotalPhysicalMemory() const;

    MCNAPI ::std::string $getModelName();

    MCNAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCNAPI bool $isWebviewSupported() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&& args) const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCNAPI ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCNAPI void $hideSplashScreen();

    MCNAPI int $getPlatformDpi() const;

    MCNAPI ::UIScalingRules $getPlatformUIScalingRules() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
