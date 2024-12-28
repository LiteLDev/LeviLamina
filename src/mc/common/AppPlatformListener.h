#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/OperationMode.h"

// auto generated forward declare list
// clang-format off
class PushNotificationMessage;
// clang-format on

class AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mListenerRegistered;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatformListener& operator=(AppPlatformListener const&);
    AppPlatformListener(AppPlatformListener const&);
    AppPlatformListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AppPlatformListener();

    // vIndex: 1
    virtual void onLowMemory();

    // vIndex: 2
    virtual void onAppPaused();

    // vIndex: 3
    virtual void onAppUnpaused();

    // vIndex: 4
    virtual void onAppPreSuspended();

    // vIndex: 5
    virtual void onAppSuspended();

    // vIndex: 6
    virtual void onAppResumed();

    // vIndex: 7
    virtual void onAppFocusLost();

    // vIndex: 8
    virtual void onAppFocusGained();

    // vIndex: 9
    virtual void onAppTerminated();

    // vIndex: 10
    virtual void onOperationModeChanged(::OperationMode const operationMode);

    // vIndex: 11
    virtual void onPerformanceModeChanged(bool const boost);

    // vIndex: 12
    virtual void onPushNotificationReceived(::PushNotificationMessage const& msg);

    // vIndex: 13
    virtual void onResizeBegin();

    // vIndex: 14
    virtual void onResizeEnd();

    // vIndex: 15
    virtual void onDeviceLost();

    // vIndex: 16
    virtual void onAppSurfaceCreated();

    // vIndex: 17
    virtual void onAppSurfaceDestroyed();

    // vIndex: 18
    virtual void onClipboardCopy(::std::string const&);

    // vIndex: 19
    virtual void onClipboardPaste(::std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AppPlatformListener(bool doInit);

    MCAPI void initListener(float priority);

    MCAPI void terminate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool doInit);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLowMemory();

    MCAPI void $onAppPaused();

    MCAPI void $onAppUnpaused();

    MCAPI void $onAppPreSuspended();

    MCAPI void $onAppSuspended();

    MCAPI void $onAppResumed();

    MCAPI void $onAppFocusLost();

    MCAPI void $onAppFocusGained();

    MCAPI void $onAppTerminated();

    MCAPI void $onOperationModeChanged(::OperationMode const operationMode);

    MCAPI void $onPerformanceModeChanged(bool const boost);

    MCAPI void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $onResizeBegin();

    MCAPI void $onResizeEnd();

    MCAPI void $onDeviceLost();

    MCAPI void $onAppSurfaceCreated();

    MCAPI void $onAppSurfaceDestroyed();

    MCAPI void $onClipboardCopy(::std::string const&);

    MCAPI void $onClipboardPaste(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
