#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/OperationMode.h"

// auto generated forward declare list
// clang-format off
class PushNotificationMessage;
namespace Bedrock::PubSub { class Subscription; }
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
    virtual void onOperationModeChanged(::OperationMode const);

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
    virtual void onLowMemory();
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

    MCFOLD void $onClipboardCopy(::std::string const&);

    MCFOLD void $onClipboardPaste(::std::string const&);

    MCFOLD void $onLowMemory();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
