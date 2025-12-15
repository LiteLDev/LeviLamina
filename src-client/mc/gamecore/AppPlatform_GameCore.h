#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/threading/XTaskQueueRegistrationToken.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/win/AppPlatformWindows.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
class SecureStorage;
class SecureStorageKey;
struct ConnectivityHint_GameCore;
struct XTaskQueueObject;
namespace Core { class Path; }
// clang-format on

class AppPlatform_GameCore : public ::AppPlatformWindows {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mDataFolder;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mLoggingFolder;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mUserStorageRootPath;
    ::ll::TypedStorage<1, 1, bool>                                           mSimulateTouchWithMouse;
    ::ll::TypedStorage<1, 1, bool>                                           mMouseCapture;
    ::ll::TypedStorage<8, 8, ::HWND__*>                                      mHWnd;
    ::ll::TypedStorage<4, 16, ::tagRECT>                                     mSavedWindowSize;
    ::ll::TypedStorage<4, 4, long>                                           mDefaultStyle;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAppName;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Core::Path const&)>>    mSetStorageDirectoryCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectivityHint_GameCore>> mConnectivityHint;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                            mTaskQueue;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>                  mGameInviteToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform_GameCore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform_GameCore() /*override*/;

    virtual ::std::string _readAssetFileInternal(::Core::Path const& filename) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename) /*override*/;

    virtual ::std::set<::Core::PathBuffer<::std::string>>
    listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    virtual bool canLaunchUri(::std::string const& uri) /*override*/;

    virtual void launchUri(::std::string const& uri) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getDataUrl() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const /*override*/;

    virtual void setStorageDirectoryChanged(::std::function<void(::Core::Path const&)> callback) /*override*/;

    virtual void setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    ) /*override*/;

    virtual bool usesAsyncOptionSaving() const /*override*/;

    virtual bool supportsKeyboardMouse() const /*override*/;

    virtual void updateKeyboard();

    virtual void initializeOnScreenKeyboard(
        ::std::function<void(::std::string const&, int, ::TextboxTextUpdateReason)>,
        ::std::function<void(int)>
    );

    virtual bool supportsMSAA() const /*override*/;

    virtual void toggleSimulateTouchWithMouse() /*override*/;

    virtual void _fireAppFocusGained() /*override*/;

    virtual void _fireAppFocusLost() /*override*/;

    virtual void textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    ) /*override*/;

    virtual void textEditComponentLostFocus() /*override*/;

    virtual void setClipboard(::std::string const& value) const /*override*/;

    virtual ::std::wstring getClipboardText() const /*override*/;

    virtual void swapBuffers() /*override*/;

    virtual void discardBackbuffer() /*override*/;

    virtual ::std::string createUUID() /*override*/;

    virtual auto getModalErrorMessageProc()
        -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&) /*override*/;

    virtual bool supportsVibration() const /*override*/;

    virtual bool supportsFliteTTS() const /*override*/;

    virtual int getScreenWidth() const /*override*/;

    virtual int getScreenHeight() const /*override*/;

    virtual void setScreenSize(int width, int height) /*override*/;

    virtual void setWindowSize(int width, int height) /*override*/;

    virtual void screenToClient(int&, int&) const;

    virtual bool hasBuyButtonWhenInvalidLicense() /*override*/;

    virtual ::std::string getApplicationId() const /*override*/;

    virtual bool supportsClientUpdate() const /*override*/;

    virtual bool isMouseInsideClient() const;

    virtual uint64 getFreeMemory() const /*override*/;

    virtual uint64 getMemoryLimit() const /*override*/;

    virtual uint64 getUsedMemory() /*override*/;

    virtual uint64 getTotalPhysicalMemory() const /*override*/;

    virtual void setFullscreenMode(::FullscreenMode const fullscreenMode) /*override*/;

    virtual bool isWebviewSupported() const /*override*/;

    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const /*override*/;

    virtual bool isLANAvailable() const /*override*/;

    virtual bool isNetworkAllowed() const /*override*/;

    virtual bool isNetworkAvailable() const /*override*/;

    virtual bool isInternetAvailable() const /*override*/;

    virtual bool isHandheldDevice() const;

    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage() /*override*/;

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    virtual bool compareAppReceiptToLocalReceipt(::std::string const& otherReceipt) /*override*/;

    virtual int getPlatformDpi() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getUserFolderFromXUID(::std::string_view) = 0;

    virtual void _retrieveSavedWindowSize(::tagRECT&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AppPlatform_GameCore(
        ::HWND__*            hWnd,
        ::std::string const& dataFolder,
        ::std::string_view   appName,
        int                  screenWidth,
        int                  screenHeight
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _onInviteReceived(void* context, char const* inviteUri);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HWND__*            hWnd,
        ::std::string const& dataFolder,
        ::std::string_view   appName,
        int                  screenWidth,
        int                  screenHeight
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
    MCAPI ::std::string $_readAssetFileInternal(::Core::Path const& filename);

    MCAPI ::Core::PathBuffer<::std::string> $getAssetFileFullPath(::Core::Path const& filename);

    MCAPI ::std::set<::Core::PathBuffer<::std::string>>
    $listAssetFilesIn(::Core::Path const& path, ::std::string const& extension) const;

    MCAPI ::Core::PathBuffer<::std::string> $copyImportFileToTempFolder(::Core::Path const& filePath);

    MCFOLD bool $canLaunchUri(::std::string const& uri);

    MCAPI void $launchUri(::std::string const& uri);

    MCFOLD ::Core::PathBuffer<::std::string> $getPackagePath() const;

    MCAPI ::Core::PathBuffer<::std::string> $getLoggingPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> $getDataUrl() const;

    MCAPI ::Core::PathBuffer<::std::string> $getUserStorageRootPath() const;

    MCAPI void $setStorageDirectoryChanged(::std::function<void(::Core::Path const&)> callback);

    MCAPI void $setStorageDirectory(
        ::FileStorageDirectory      dir,
        bool                        isCallback,
        ::PropertyBag const&        extraData,
        ::std::function<void(bool)> onComplete
    );

    MCFOLD bool $usesAsyncOptionSaving() const;

    MCFOLD bool $supportsKeyboardMouse() const;

    MCFOLD void $updateKeyboard();

    MCAPI void $initializeOnScreenKeyboard(
        ::std::function<void(::std::string const&, int, ::TextboxTextUpdateReason)>,
        ::std::function<void(int)>
    );

    MCFOLD bool $supportsMSAA() const;

    MCAPI void $toggleSimulateTouchWithMouse();

    MCAPI void $_fireAppFocusGained();

    MCFOLD void $_fireAppFocusLost();

    MCAPI void $textEditComponentGainedFocus(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline
    );

    MCAPI void $textEditComponentLostFocus();

    MCFOLD void $setClipboard(::std::string const& value) const;

    MCAPI ::std::wstring $getClipboardText() const;

    MCFOLD void $swapBuffers();

    MCFOLD void $discardBackbuffer();

    MCAPI ::std::string $createUUID();

    MCFOLD auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCFOLD bool $supportsVibration() const;

    MCFOLD bool $supportsFliteTTS() const;

    MCAPI int $getScreenWidth() const;

    MCAPI int $getScreenHeight() const;

    MCAPI void $setScreenSize(int width, int height);

    MCAPI void $setWindowSize(int width, int height);

    MCFOLD void $screenToClient(int&, int&) const;

    MCFOLD bool $hasBuyButtonWhenInvalidLicense();

    MCAPI ::std::string $getApplicationId() const;

    MCFOLD bool $supportsClientUpdate() const;

    MCFOLD bool $isMouseInsideClient() const;

    MCAPI uint64 $getFreeMemory() const;

    MCAPI uint64 $getMemoryLimit() const;

    MCAPI uint64 $getUsedMemory();

    MCAPI uint64 $getTotalPhysicalMemory() const;

    MCAPI void $setFullscreenMode(::FullscreenMode const fullscreenMode);

    MCFOLD bool $isWebviewSupported() const;

    MCAPI ::std::variant<::HWND__*, ::std::monostate> $getRenderSurfaceParameters() const;

    MCFOLD bool $isLANAvailable() const;

    MCAPI bool $isNetworkAllowed() const;

    MCFOLD bool $isNetworkAvailable() const;

    MCAPI bool $isInternetAvailable() const;

    MCFOLD bool $isHandheldDevice() const;

    MCAPI ::std::unique_ptr<::SecureStorage> $getSecureStorage();

    MCAPI ::SecureStorageKey $getSecureStorageKey(::std::string const&);

    MCFOLD void $setSecureStorageKey(::std::string const&, ::SecureStorageKey const&);

    MCFOLD bool $compareAppReceiptToLocalReceipt(::std::string const& otherReceipt);

    MCAPI int $getPlatformDpi() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForISecureStorageKeySystem();

    MCNAPI static void** $vftableForIAppPlatform();
    // NOLINTEND
};
