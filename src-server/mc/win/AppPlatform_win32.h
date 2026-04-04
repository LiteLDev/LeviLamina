#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/platform/OSInformation.h"
#include "mc/platform/Result.h"
#include "mc/win/AppPlatformWindows.h"

// auto generated forward declare list
// clang-format off
class HIDController;
class SecureStorage;
class SecureStorageKey;
class WebviewInterface;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Webview { class PlatformArguments; }
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

    virtual ::Bedrock::Result<::std::string> _readAssetFileInternal(::Core::PathView filename) /*override*/;

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

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const& key) /*override*/;

    virtual void setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value) /*override*/;

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
    MCAPI AppPlatform_win32(
        ::HWND__*            hWnd,
        ::std::string const& dataFolder,
        ::std::string_view,
        ::std::shared_ptr<::HIDController> HIDControllerWinRT,
        int                                screenWidth,
        int                                screenHeight
    );

    MCAPI ::OSInformation _fetchOSInformation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<::std::string> $_readAssetFileInternal(::Core::PathView filename);

    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCFOLD bool $canLaunchUri(::std::string const& uri);

    MCAPI void $launchUri(::std::string const& uri);

    MCAPI ::Core::PathBuffer<::std::string> $getPackagePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCAPI ::std::string $getEdition() const;

    MCAPI ::OsVersion $getOSVersion() const;

    MCFOLD bool $supportsVibration() const;

    MCFOLD bool $supportsFliteTTS() const;

    MCAPI int $getScreenWidth() const;

    MCAPI int $getScreenHeight() const;

    MCAPI int $getDisplayWidth();

    MCAPI int $getDisplayHeight();

    MCFOLD void $setScreenSize(int width, int height);

    MCAPI void $setWindowSize(int width, int height);

    MCAPI void $setWindowText(::std::string const& title);

    MCFOLD ::std::string $getTextBoxBackend() const;

    MCFOLD void $setTextBoxBackend(::std::string const& newText);

    MCFOLD int $getCaretPosition() const;

    MCFOLD void $setCaretPosition(int position);

    MCFOLD bool $hasBuyButtonWhenInvalidLicense();

    MCAPI ::std::string $getApplicationId() const;

    MCAPI bool $isCentennial() const;

    MCAPI ::std::string $getPackageFamilyName() const;

    MCFOLD ::PlatformType $getPlatformType() const;

    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const& key);

    MCFOLD void $setSecureStorageKey(::std::string const& key, ::SecureStorageKey const& value);

    MCAPI ::std::string $getPlatformString() const;

    MCAPI ::std::string $getSubPlatformString() const;

    MCAPI uint64 $getFreeMemory() const;

    MCAPI uint64 $getMemoryLimit() const;

    MCAPI uint64 $getUsedMemory();

    MCAPI uint64 $getTotalPhysicalMemory() const;

    MCAPI ::std::string $getModelName();

    MCAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCAPI bool $isWebviewSupported() const;

    MCFOLD ::std::shared_ptr<::WebviewInterface> $createWebview(::Webview::PlatformArguments&& args) const;

    MCAPI bool $getPlatformTTSEnabled() const;

    MCAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCAPI ::std::optional<bool> $isOnWifiConnectionTelemetryValue();

    MCAPI void $hideSplashScreen();

    MCFOLD int $getPlatformDpi() const;

    MCFOLD ::UIScalingRules $getPlatformUIScalingRules() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAppPlatform();

    MCNAPI static void** $vftableForISecureStorageKeySystem();
    // NOLINTEND
};
