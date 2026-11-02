#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/platform/OSInformation.h"
#include "mc/platform/Result.h"
#include "mc/win/AppPlatformWindows.h"

// auto generated forward declare list
// clang-format off
class HIDController;
class IAppPlatformImpl;
class SecureStorage;
class SecureStorageKey;
class WebviewInterface;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Webview { class PlatformArguments; }
namespace dragon::platform { struct SurfaceParameters; }
// clang-format on

class AppPlatform_win32 : public ::AppPlatformWindows {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HIDController>> mHIDController;
    ::ll::TypedStorage<8, 8, ::HWND__*>                           mHWnd;
    ::ll::TypedStorage<8, 8, ::HICON__*>                          mCursor;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>  mDataFolder;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>  mLoggingFolder;
    ::ll::TypedStorage<1, 1, bool>                                mSimulateTouchWithMouse;
    ::ll::TypedStorage<1, 1, bool>                                mMouseCapture;
    ::ll::TypedStorage<8, 8, uint64>                              mPhysicalMemory;
    ::ll::TypedStorage<8, 8, uint64>                              mVirtualMemory;
    ::ll::TypedStorage<4, 16, ::tagRECT>                          mSavedWindowSize;
    ::ll::TypedStorage<4, 4, long>                                mDefaultStyle;
    ::ll::TypedStorage<8, 40, ::OSInformation>                    mOSInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform_win32();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform_win32() /*override*/;

    virtual ::Bedrock::Result<::std::string>
    _readAssetFileInternal(::Core::PathView filename, ::std::string& buffer) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename) /*override*/;

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

    virtual void setScreenSize(int, int) /*override*/;

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

    virtual ::std::unique_ptr<::SecureStorage> getSharedSecureStorage() /*override*/;

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    virtual ::std::string getPlatformString() const /*override*/;

    virtual uint64 getFreeMemory() const /*override*/;

    virtual uint64 getMemoryLimit() const /*override*/;

    virtual uint64 getUsedMemory() /*override*/;

    virtual uint64 getTotalPhysicalMemory() const /*override*/;

    virtual ::std::string getModelName() /*override*/;

    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode) /*override*/;

    virtual bool isWebviewSupported() const /*override*/;

    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&& args) const /*override*/;

    virtual bool getPlatformTTSEnabled() const /*override*/;

    virtual ::dragon::platform::SurfaceParameters getRenderSurfaceParameters() const /*override*/;

    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue() /*override*/;

    virtual void hideSplashScreen() /*override*/;

    virtual int getPlatformDpi() const /*override*/;

    virtual ::UIScalingRules getPlatformUIScalingRules() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform_win32(
        ::std::unique_ptr<::IAppPlatformImpl> impl,
        ::HWND__*                             hWnd,
        ::std::string const&                  dataFolder,
        ::std::string_view,
        ::std::shared_ptr<::HIDController> HIDControllerWinRT,
        int                                screenWidth,
        int                                screenHeight
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setupWorkingDirectory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IAppPlatformImpl> impl,
        ::HWND__*                             hWnd,
        ::std::string const&                  dataFolder,
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
    MCNAPI ::Bedrock::Result<::std::string> $_readAssetFileInternal(::Core::PathView filename, ::std::string& buffer);

    MCNAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

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

    MCNAPI void $setScreenSize(int, int);

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

    MCNAPI ::BuildPlatform $getBuildPlatform() const;

    MCNAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCNAPI ::std::unique_ptr<::SecureStorage> $getSharedSecureStorage();

    MCNAPI ::SecureStorageKey $getSecureStorageKey(::std::string const&);

    MCNAPI void $setSecureStorageKey(::std::string const&, ::SecureStorageKey const&);

    MCNAPI ::std::string $getPlatformString() const;

    MCNAPI uint64 $getFreeMemory() const;

    MCNAPI uint64 $getMemoryLimit() const;

    MCNAPI uint64 $getUsedMemory();

    MCNAPI uint64 $getTotalPhysicalMemory() const;

    MCNAPI ::std::string $getModelName();

    MCNAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCNAPI bool $isWebviewSupported() const;

    MCNAPI ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&& args) const;

    MCNAPI bool $getPlatformTTSEnabled() const;

    MCNAPI ::dragon::platform::SurfaceParameters $getRenderSurfaceParameters() const;

    MCNAPI ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCNAPI void $hideSplashScreen();

    MCNAPI int $getPlatformDpi() const;

    MCNAPI ::UIScalingRules $getPlatformUIScalingRules() const;
    // NOLINTEND
};
