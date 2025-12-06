#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct PushNotificationMessage;
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
    // vIndex: 0
    virtual ~AppPlatformListener();

    // vIndex: 1
    virtual void onAppPaused();

    // vIndex: 2
    virtual void onAppUnpaused();

    // vIndex: 3
    virtual void onAppPreSuspended();

    // vIndex: 4
    virtual void onAppSuspended();

    // vIndex: 5
    virtual void onAppResumed();

    // vIndex: 6
    virtual void onAppFocusLost();

    // vIndex: 7
    virtual void onAppFocusGained();

    // vIndex: 8
    virtual void onAppTerminated();

    // vIndex: 9
    virtual void onOperationModeChanged(::OperationMode const operationMode);

    // vIndex: 10
    virtual void onPerformanceModeChanged(bool const boost);

    // vIndex: 11
    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg);

    // vIndex: 12
    virtual void onResizeBegin();

    // vIndex: 13
    virtual void onResizeEnd();

    // vIndex: 14
    virtual void onDeviceLost();

    // vIndex: 15
    virtual void onAppSurfaceCreated();

    // vIndex: 16
    virtual void onAppSurfaceDestroyed();

    // vIndex: 17
    virtual void onClipboardCopy(::std::string const&);

    // vIndex: 18
    virtual void onClipboardPaste(::std::string const&);

    // vIndex: 19
    virtual void onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initListener(float priority);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppPaused();

    MCNAPI void $onAppUnpaused();

    MCNAPI void $onAppPreSuspended();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onAppFocusLost();

    MCNAPI void $onAppFocusGained();

    MCNAPI void $onAppTerminated();

    MCNAPI void $onOperationModeChanged(::OperationMode const operationMode);

    MCNAPI void $onPerformanceModeChanged(bool const boost);

    MCNAPI void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCNAPI void $onResizeBegin();

    MCNAPI void $onResizeEnd();

    MCNAPI void $onDeviceLost();

    MCNAPI void $onAppSurfaceCreated();

    MCNAPI void $onAppSurfaceDestroyed();

    MCNAPI void $onClipboardCopy(::std::string const&);

    MCNAPI void $onClipboardPaste(::std::string const&);

    MCNAPI void $onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
