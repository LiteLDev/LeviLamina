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

    virtual void setScreenSize(int, int) /*override*/;

    virtual void setWindowSize(int, int) /*override*/;

    virtual void setWindowText(::std::string const&) /*override*/;

    virtual ::std::string getTextBoxBackend() const /*override*/;

    virtual void setTextBoxBackend(::std::string const&) /*override*/;

    virtual int getCaretPosition() const /*override*/;

    virtual void setCaretPosition(int) /*override*/;

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

    virtual void setFullscreenMode(::FullscreenMode const) /*override*/;

    virtual bool isWebviewSupported() const /*override*/;

    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&&) const /*override*/;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupWorkingDirectory();
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

    // NOLINTEND
};
