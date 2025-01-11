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
    MCFOLD void $onLowMemory();

    MCFOLD void $onAppPaused();

    MCFOLD void $onAppUnpaused();

    MCFOLD void $onAppPreSuspended();

    MCFOLD void $onAppSuspended();

    MCFOLD void $onAppResumed();

    MCFOLD void $onAppFocusLost();

    MCFOLD void $onAppFocusGained();

    MCFOLD void $onAppTerminated();

    MCFOLD void $onOperationModeChanged(::OperationMode const operationMode);

    MCFOLD void $onPerformanceModeChanged(bool const boost);

    MCFOLD void $onPushNotificationReceived(::PushNotificationMessage const& msg);

    MCFOLD void $onResizeBegin();

    MCFOLD void $onResizeEnd();

    MCFOLD void $onDeviceLost();

    MCFOLD void $onAppSurfaceCreated();

    MCFOLD void $onAppSurfaceDestroyed();

    MCFOLD void $onClipboardCopy(::std::string const&);

    MCFOLD void $onClipboardPaste(::std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
