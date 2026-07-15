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
class GameControllerHandler_GameCore;
class HIDControllerGameCoreDesktop;
class IMinecraftEventing;
class PushNotificationMessage;
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

    using PlatformHIDController = ::HIDControllerGameCoreDesktop;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HIDControllerGameCoreDesktop>>   mHIDController;
    ::ll::TypedStorage<1, 1, bool>                                                 mResetCalled;
    ::ll::TypedStorage<8, 8, ::XTaskQueueObject*>                                  mTaskQueue;
    ::ll::TypedStorage<8, 8, ::XTaskQueueRegistrationToken>                        mGameProtocolToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameControllerHandler_GameCore>> mGameControllerHandler_Shim;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppPlatform_GameCore>>            mPlatform_Shim;
    ::ll::TypedStorage<8, 8, ::HWND__*>                                            mHwnd;
    ::ll::TypedStorage<1, 1, ::Bedrock::Platform_GameCore::ResizeMode>             mResizeMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mProtocolActivationURI;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mAppLocation;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<
            ::brstd::move_only_function<void(::IMinecraftEventing*)>,
            ::std::deque<::brstd::move_only_function<void(::IMinecraftEventing*)>>>>
                                                   mEvents;
    ::ll::TypedStorage<1, 1, bool>                 mMouseInsideClient;
    ::ll::TypedStorage<1, 1, bool>                 mInactiveScrollEnabled;
    ::ll::TypedStorage<1, 1, bool>                 mInvertScrollEnabled;
    ::ll::TypedStorage<1, 1, bool>                 mRemoteSession;
    ::ll::TypedStorage<1, 1, bool>                 mMouseClickLockEnabled;
    ::ll::TypedStorage<1, 1, bool>                 mMouseSonarEnabled;
    ::ll::TypedStorage<4, 4, uint>                 mMouseClickLockTime;
    ::ll::TypedStorage<4, 4, float>                mKeyboardHeight;
    ::ll::TypedStorage<8, 8, ::winrt::event_token> mThemeChangeRevoker;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Platform_GameCore() /*override*/ = default;

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

    virtual void issueOrientationChange(::DisplayOrientation const&) /*override*/;

    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) /*override*/;

    virtual void _processActivationArguments(::Bedrock::ActivationArguments const&) /*override*/;

    virtual bool _postAppCreation(::Bedrock::ActivationArguments const&) /*override*/;

    virtual bool _update(bool) /*override*/;

    virtual void pushNotificationReceived_Shim(::PushNotificationMessage const&) /*override*/;

    virtual void notifyUriListeners_Shim(::ActivationUri const&) /*override*/;

    virtual ::std::string getDeviceId_Shim() const /*override*/;

    virtual bool _isShuttingDown() /*override*/;

    virtual bool _isShutdown() /*override*/;

    virtual void resetCallback() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
