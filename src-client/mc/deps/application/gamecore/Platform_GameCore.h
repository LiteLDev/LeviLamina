#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/CommonPlatform.h"
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/threading/XTaskQueueRegistrationToken.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/ResetCallbackObject.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class AppPlatform_GameCore;
class HIDControllerWin32;
class IMinecraftGame;
class PushNotificationMessage;
struct GameControllerHandler_GameCore;
struct XTaskQueueObject;
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class Platform_GameCore : public ::Bedrock::CommonPlatform, public ::ResetCallbackObject {
public:
    // Platform_GameCore inner types define
    enum class ResizeMode : uchar {
        NotResizing = 0,
        Resizing    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HIDControllerWin32>>             mHIDController;
    ::ll::TypedStorage<1, 1, bool>                                                 mResetCalled;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                                  mTaskQueue;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>                        mGameProtocolToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameControllerHandler_GameCore>> mGameControllerHandler_Shim;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppPlatform_GameCore>>            mPlatform_Shim;
    ::ll::TypedStorage<8, 8, ::HWND__*>                                            mHwnd;
    ::ll::TypedStorage<1, 1, ::Bedrock::Platform_GameCore::ResizeMode>             mResizeMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mProtocolActivationURI;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mAppLocation;
    ::ll::TypedStorage<1, 1, bool>                                                 mMouseInsideClient;
    // NOLINTEND

public:
    // prevent constructor by default
    Platform_GameCore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Platform_GameCore() /*override*/;

    virtual bool updatePlatformInfo() /*override*/;

    virtual bool updatePlatformGraphicsInfo() /*override*/;

    virtual void issueShutdown() /*override*/;

    virtual void issueBack() /*override*/;

    virtual void issueLowMemory() /*override*/;

    virtual void issueFocusLost() /*override*/;

    virtual void issueFocusGained() /*override*/;

    virtual void issueInputPaneVisible() /*override*/;

    virtual void issueInputPaneHidden() /*override*/;

    virtual void issueSuspendWarning() /*override*/;

    virtual void issueVisibilityChange(bool visible) /*override*/;

    virtual void issueWindowSizeChange(int width, int height) /*override*/;

    virtual void issueDPIChange(float dpi) /*override*/;

    virtual void issueOrientationChange(::DisplayOrientation const& orientation) /*override*/;

    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) /*override*/;

    virtual void _processActivationArguments(::Bedrock::ActivationArguments const& args) /*override*/;

    virtual bool _postAppCreation(::Bedrock::ActivationArguments const& actArgs) /*override*/;

    virtual bool _update(bool canRender) /*override*/;

    virtual void pushNotificationReceived_Shim(::PushNotificationMessage const& msg) /*override*/;

    virtual void notifyUriListeners_Shim(::ActivationUri const& uri) /*override*/;

    virtual ::std::string getDeviceId_Shim() const /*override*/;

    virtual bool _isShuttingDown() /*override*/;

    virtual bool _isShutdown() /*override*/;

    virtual void resetCallback() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    Platform_GameCore(::HWND__* hwnd, ::brstd::move_only_function<::std::unique_ptr<::IMinecraftGame>()> createGame);

    MCAPI bool closeAppRequest();

    MCAPI void displayMigrationFailureScreen();

    MCAPI ::std::optional<::std::string> extractProtocolActivationURI();

    MCAPI bool isMouseCaptured();

    MCAPI void setWindow(::HWND__* hwnd);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void onProtocolActivation(void* context, char const* uri);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& sAppName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HWND__* hwnd, ::brstd::move_only_function<::std::unique_ptr<::IMinecraftGame>()> createGame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $updatePlatformInfo();

    MCAPI bool $updatePlatformGraphicsInfo();

    MCAPI void $issueShutdown();

    MCAPI void $issueBack();

    MCFOLD void $issueLowMemory();

    MCAPI void $issueFocusLost();

    MCAPI void $issueFocusGained();

    MCAPI void $issueInputPaneVisible();

    MCAPI void $issueInputPaneHidden();

    MCFOLD void $issueSuspendWarning();

    MCAPI void $issueVisibilityChange(bool visible);

    MCAPI void $issueWindowSizeChange(int width, int height);

    MCAPI void $issueDPIChange(float dpi);

    MCAPI void $issueOrientationChange(::DisplayOrientation const& orientation);

    MCAPI bool $_preAppCreation(::Bedrock::ActivationArguments const&);

    MCAPI void $_processActivationArguments(::Bedrock::ActivationArguments const& args);

    MCAPI bool $_postAppCreation(::Bedrock::ActivationArguments const& actArgs);

    MCAPI bool $_update(bool canRender);

    MCAPI void $pushNotificationReceived_Shim(::PushNotificationMessage const& msg);

    MCAPI void $notifyUriListeners_Shim(::ActivationUri const& uri);

    MCAPI ::std::string $getDeviceId_Shim() const;

    MCFOLD bool $_isShuttingDown();

    MCFOLD bool $_isShutdown();

    MCFOLD void $resetCallback();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForResetCallbackObject();

    MCNAPI static void** $vftableForCommonPlatform();
    // NOLINTEND
};

} // namespace Bedrock
