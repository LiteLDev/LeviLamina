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
namespace Webview { class PlatformArguments; }
// clang-format on

class AppPlatform_win32 : public ::AppPlatformWindows {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb24ea2;
    ::ll::UntypedStorage<8, 8> mUnk356cd6;
    ::ll::UntypedStorage<8, 8> mUnkcfaa94;
    ::ll::UntypedStorage<8, 32> mUnka7d9a1;
    ::ll::UntypedStorage<8, 32> mUnk1d0c4e;
    ::ll::UntypedStorage<1, 1> mUnk113178;
    ::ll::UntypedStorage<1, 1> mUnk29784c;
    ::ll::UntypedStorage<8, 8> mUnke25532;
    ::ll::UntypedStorage<8, 8> mUnk66b4ba;
    ::ll::UntypedStorage<4, 16> mUnk44554b;
    ::ll::UntypedStorage<4, 4> mUnkabbaf7;
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
    // vIndex: 0
    virtual ~AppPlatform_win32() /*override*/;

    // vIndex: 102
    virtual ::std::string _readAssetFileInternal(::Core::Path const& filename) /*override*/;

    // vIndex: 101
    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename) /*override*/;

    // vIndex: 105
    virtual ::std::set<::Core::PathBuffer<::std::string>> listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const /*override*/;

    // vIndex: 69
    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    // vIndex: 121
    virtual bool canLaunchUri(::std::string const& uri) /*override*/;

    // vIndex: 122
    virtual void launchUri(::std::string const& uri) /*override*/;

    // vIndex: 34
    virtual ::Core::PathBuffer<::std::string> getPackagePath() const /*override*/;

    // vIndex: 2
    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    // vIndex: 159
    virtual ::std::string getEdition() const /*override*/;

    // vIndex: 160
    virtual ::OsVersion getOSVersion() const /*override*/;

    // vIndex: 99
    virtual bool supportsVibration() const /*override*/;

    // vIndex: 176
    virtual bool supportsFliteTTS() const /*override*/;

    // vIndex: 72
    virtual int getScreenWidth() const /*override*/;

    // vIndex: 73
    virtual int getScreenHeight() const /*override*/;

    // vIndex: 74
    virtual int getDisplayWidth() /*override*/;

    // vIndex: 75
    virtual int getDisplayHeight() /*override*/;

    // vIndex: 76
    virtual void setScreenSize(int width, int height) /*override*/;

    // vIndex: 77
    virtual void setWindowSize(int width, int height) /*override*/;

    // vIndex: 78
    virtual void setWindowText(::std::string const& title) /*override*/;

    // vIndex: 95
    virtual ::std::string getTextBoxBackend() const /*override*/;

    // vIndex: 96
    virtual void setTextBoxBackend(::std::string const& newText) /*override*/;

    // vIndex: 97
    virtual int getCaretPosition() const /*override*/;

    // vIndex: 98
    virtual void setCaretPosition(int position) /*override*/;

    // vIndex: 109
    virtual bool hasBuyButtonWhenInvalidLicense() /*override*/;

    // vIndex: 136
    virtual ::std::string getApplicationId() const /*override*/;

    // vIndex: 126
    virtual bool isCentennial() const /*override*/;

    // vIndex: 127
    virtual ::std::string getPackageFamilyName() const /*override*/;

    // vIndex: 125
    virtual ::PlatformType getPlatformType() const /*override*/;

    // vIndex: 19
    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    // vIndex: 177
    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage() /*override*/;

    // vIndex: 1
    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    // vIndex: 2
    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    // vIndex: 20
    virtual ::std::string getPlatformString() const /*override*/;

    // vIndex: 128
    virtual ::std::string getSubPlatformString() const /*override*/;

    // vIndex: 137
    virtual uint64 getFreeMemory() const /*override*/;

    // vIndex: 138
    virtual uint64 getMemoryLimit() const /*override*/;

    // vIndex: 139
    virtual uint64 getUsedMemory() /*override*/;

    // vIndex: 23
    virtual uint64 getTotalPhysicalMemory() const /*override*/;

    // vIndex: 152
    virtual ::std::string getModelName() /*override*/;

    // vIndex: 155
    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode) /*override*/;

    // vIndex: 207
    virtual bool isWebviewSupported() const /*override*/;

    // vIndex: 208
    virtual ::std::shared_ptr<::WebviewInterface> createWebview(::Webview::PlatformArguments&& args) const /*override*/;

    // vIndex: 211
    virtual bool getPlatformTTSEnabled() const /*override*/;

    // vIndex: 212
    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const /*override*/;

    // vIndex: 112
    virtual ::std::optional<bool> isOnWifiConnectionTelemetryValue() /*override*/;

    // vIndex: 40
    virtual void hideSplashScreen() /*override*/;

    // vIndex: 238
    virtual int getPlatformDpi() const /*override*/;

    // vIndex: 239
    virtual ::UIScalingRules getPlatformUIScalingRules() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppPlatform_win32(::HWND__* hWnd, ::std::string const& dataFolder, ::std::string_view, ::std::shared_ptr<::HIDController> HIDControllerWinRT, int screenWidth, int screenHeight);

    MCNAPI ::OSInformation _fetchOSInformation() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HWND__* hWnd, ::std::string const& dataFolder, ::std::string_view, ::std::shared_ptr<::HIDController> HIDControllerWinRT, int screenWidth, int screenHeight);
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

    MCNAPI ::std::set<::Core::PathBuffer<::std::string>> $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

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
