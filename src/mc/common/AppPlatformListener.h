#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/OperationMode.h"

class AppPlatformListener {
public:
    bool mListenerRegistered; // this+0x8

    // prevent constructor by default
    AppPlatformListener& operator=(AppPlatformListener const&);
    AppPlatformListener(AppPlatformListener const&);
    AppPlatformListener();

public:
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
    virtual void onOperationModeChanged(::OperationMode operationMode);

    // vIndex: 11
    virtual void onPerformanceModeChanged(bool boost);

    // vIndex: 12
    virtual void onPushNotificationReceived(class PushNotificationMessage const& msg);

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
    virtual void onClipboardCopy(std::string const&);

    // vIndex: 19
    virtual void onClipboardPaste(std::string const&);

    MCAPI explicit AppPlatformListener(bool);

    MCAPI void initListener(float priority);

    MCAPI void terminate();

    // NOLINTEND
};
