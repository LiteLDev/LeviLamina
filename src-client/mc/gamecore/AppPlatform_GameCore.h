#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/FullscreenMode.h"
#include "mc/deps/core/threading/XTaskQueueRegistrationToken.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/win/AppPlatformWindows.h"

// auto generated forward declare list
// clang-format off
class ConnectivityHint_GameCore;
class ITextBoxController;
class PropertyBag;
class SecureStorage;
class SecureStorageKey;
struct XTaskQueueObject;
namespace Bedrock { class CommonPlatform; }
namespace Bedrock { class Platform_GameCore; }
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
// clang-format on

class AppPlatform_GameCore : public ::AppPlatformWindows {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mDataFolder;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mLoggingFolder;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mUserStorageRootPath;
    ::ll::TypedStorage<1, 1, bool>                                           mMouseCapture;
    ::ll::TypedStorage<8, 8, ::HWND__*>                                      mHWnd;
    ::ll::TypedStorage<4, 16, ::tagRECT>                                     mSavedWindowSize;
    ::ll::TypedStorage<4, 4, long>                                           mDefaultStyle;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAppName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConnectivityHint_GameCore>> mConnectivityHint;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Bedrock::Platform_GameCore*>> mPlatformGameCore;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                            mTaskQueue;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>                  mGameInviteToken;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Core::Path const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mStorageDirectoryChangedSubscribers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform_GameCore() /*override*/ = default;

    virtual ::Core::PathBuffer<::std::string> getAssetFileFullPath(::Core::Path const& filename) /*override*/;

    virtual ::Core::PathBuffer<::std::string> copyImportFileToTempFolder(::Core::Path const& filePath) /*override*/;

    virtual bool canLaunchUri(::std::string const& uri) /*override*/;

    virtual void launchUri(::std::string const& uri) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPackagePath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getLoggingPath() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getDataUrl() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getUserStorageRootPath() const /*override*/;

    virtual void
    setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, ::std::function<void(bool)>) /*override*/;

    virtual bool usesAsyncOptionSaving() const /*override*/;

    virtual bool supportsKeyboardMouse() const /*override*/;

    virtual void updateKeyboard();

    virtual void initializeOnScreenKeyboard(::Bedrock::NotNullNonOwnerPtr<::ITextBoxController>);

    virtual void deinitializeOnScreenKeyboard();

    virtual bool supportsMSAA() const /*override*/;

    virtual void _fireAppFocusGained() /*override*/;

    virtual void _fireAppFocusLost() /*override*/;

    virtual void textEditComponentGainedFocus(::std::string const&, int, bool, bool, bool) /*override*/;

    virtual void textEditComponentLostFocus() /*override*/;

    virtual void setClipboard(::std::string const&) const /*override*/;

    virtual ::std::wstring getClipboardText() const /*override*/;

    virtual void swapBuffers() /*override*/;

    virtual void discardBackbuffer() /*override*/;

    virtual ::std::string createUUID() /*override*/;

    virtual auto getModalErrorMessageProc()
        -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&) /*override*/;

    virtual bool supportsVibration() const /*override*/;

    virtual bool supportsFliteTTS() const /*override*/;

    virtual bool getSimulateTouchWithMouse() const;

    virtual int getScreenWidth() const /*override*/;

    virtual int getScreenHeight() const /*override*/;

    virtual void setScreenSize(int, int) /*override*/;

    virtual void setWindowSize(int, int) /*override*/;

    virtual void screenToClient(int&, int&) const;

    virtual bool hasBuyButtonWhenInvalidLicense() /*override*/;

    virtual ::std::string getApplicationId() const /*override*/;

    virtual bool isMouseInsideClient() const;

    virtual bool canScroll() const;

    virtual bool isRemoteSession() const;

    virtual bool isMouseClickLockEnabled() const;

    virtual bool isMouseSonarEnabled() const;

    virtual uint getMouseClickLockTime() const;

    virtual uint64 getFreeMemory() const /*override*/;

    virtual uint64 getMemoryLimit() const /*override*/;

    virtual uint64 getUsedMemory() /*override*/;

    virtual uint64 getTotalPhysicalMemory() const /*override*/;

    virtual void setFullscreenMode(::FullscreenMode const) /*override*/;

    virtual bool isWebviewSupported() const /*override*/;

    virtual ::std::variant<::HWND__*, ::std::monostate> getRenderSurfaceParameters() const /*override*/;

    virtual bool isLANAvailable() const /*override*/;

    virtual bool isNetworkAllowed() const /*override*/;

    virtual bool isNetworkAvailable() const /*override*/;

    virtual bool isInternetAvailable() const /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        addStorageDirectoryChangedSubscriber(::std::function<void(::Core::Path const&)>) /*override*/;

    virtual bool isHandheldDevice() const;

    virtual ::std::unique_ptr<::SecureStorage> getSecureStorage() /*override*/;

    virtual ::SecureStorageKey getSecureStorageKey(::std::string const&) /*override*/;

    virtual void setSecureStorageKey(::std::string const&, ::SecureStorageKey const&) /*override*/;

    virtual bool compareAppReceiptToLocalReceipt(::std::string const&) /*override*/;

    virtual int getPlatformDpi() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getUserFolderFromXUID(::std::string_view) = 0;

    virtual void _retrieveSavedWindowSize(::tagRECT&) = 0;

    virtual ::Bedrock::CommonPlatform* getPlatformShim() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
