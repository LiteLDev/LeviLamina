#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PushNotificationMessage;
// clang-format on

class AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLowMemorySubscription;
    ::ll::TypedStorage<1, 1, bool>                             mListenerRegistered;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatformListener();

    virtual void onAppPaused();

    virtual void onAppUnpaused();

    virtual void onAppPreSuspended();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onAppFocusLost();

    virtual void onAppFocusGained();

    virtual void onAppTerminated();

    virtual void onOperationModeChanged(::OperationMode const operationMode);

    virtual void onPerformanceModeChanged(bool const boost);

    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg);

    virtual void onResizeBegin();

    virtual void onResizeEnd();

    virtual void onDeviceLost();

    virtual void onAppSurfaceCreated();

    virtual void onAppSurfaceDestroyed();

    virtual void onClipboardCopy(::std::string const& clipString);

    virtual void onClipboardPaste(::std::string const& clipString);

    virtual void onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initListener(float priority);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onAppPaused();

    MCFOLD void $onAppUnpaused();

    MCFOLD void $onAppPreSuspended();

    MCFOLD void $onAppSuspended();

    MCFOLD void $onAppResumed();

    MCFOLD void $onAppFocusLost();

    MCFOLD void $onAppFocusGained();

    MCFOLD void $onAppTerminated();

    MCFOLD void $onPerformanceModeChanged(bool const boost);

    MCFOLD void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCFOLD void $onResizeBegin();

    MCFOLD void $onResizeEnd();

    MCFOLD void $onDeviceLost();

    MCFOLD void $onAppSurfaceCreated();

    MCFOLD void $onAppSurfaceDestroyed();

    MCFOLD void $onClipboardCopy(::std::string const& clipString);

    MCFOLD void $onClipboardPaste(::std::string const& clipString);

#ifdef LL_PLAT_C
    MCFOLD void $onOperationModeChanged(::OperationMode const operationMode);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
