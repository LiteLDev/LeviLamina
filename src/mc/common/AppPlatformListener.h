#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/OperationMode.h"

class AppPlatformListener {
public:
    // prevent constructor by default
    AppPlatformListener& operator=(AppPlatformListener const&);
    AppPlatformListener(AppPlatformListener const&);
    AppPlatformListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AppPlatformListener@@UEAA@XZ
    virtual ~AppPlatformListener();

    // vIndex: 1, symbol: ?onLowMemory@AppPlatformListener@@UEAAXXZ
    virtual void onLowMemory();

    // vIndex: 2, symbol: ?onAppPaused@AppPlatformListener@@UEAAXXZ
    virtual void onAppPaused();

    // vIndex: 3, symbol: ?onAppUnpaused@AppPlatformListener@@UEAAXXZ
    virtual void onAppUnpaused();

    // vIndex: 4, symbol: ?onAppPreSuspended@AppPlatformListener@@UEAAXXZ
    virtual void onAppPreSuspended();

    // vIndex: 5, symbol: ?onAppSuspended@AppPlatformListener@@UEAAXXZ
    virtual void onAppSuspended();

    // vIndex: 6, symbol: ?onAppResumed@AppPlatformListener@@UEAAXXZ
    virtual void onAppResumed();

    // vIndex: 7, symbol: ?onAppFocusLost@AppPlatformListener@@UEAAXXZ
    virtual void onAppFocusLost();

    // vIndex: 8, symbol: ?onAppFocusGained@AppPlatformListener@@UEAAXXZ
    virtual void onAppFocusGained();

    // vIndex: 9, symbol: ?onAppTerminated@AppPlatformListener@@UEAAXXZ
    virtual void onAppTerminated();

    // vIndex: 10, symbol: ?onOperationModeChanged@AppPlatformListener@@UEAAXW4OperationMode@@@Z
    virtual void onOperationModeChanged(::OperationMode operationMode);

    // vIndex: 11, symbol: ?onPerformanceModeChanged@AppPlatformListener@@UEAAX_N@Z
    virtual void onPerformanceModeChanged(bool boost);

    // vIndex: 12, symbol: ?onPushNotificationReceived@AppPlatformListener@@UEAAXAEBVPushNotificationMessage@@@Z
    virtual void onPushNotificationReceived(class PushNotificationMessage const& msg);

    // vIndex: 13, symbol: ?onResizeBegin@AppPlatformListener@@UEAAXXZ
    virtual void onResizeBegin();

    // vIndex: 14, symbol: ?onResizeEnd@AppPlatformListener@@UEAAXXZ
    virtual void onResizeEnd();

    // vIndex: 15, symbol: ?onDeviceLost@AppPlatformListener@@UEAAXXZ
    virtual void onDeviceLost();

    // vIndex: 16, symbol: ?onAppSurfaceCreated@AppPlatformListener@@UEAAXXZ
    virtual void onAppSurfaceCreated();

    // vIndex: 17, symbol: ?onAppSurfaceDestroyed@AppPlatformListener@@UEAAXXZ
    virtual void onAppSurfaceDestroyed();

    // vIndex: 18, symbol:
    // ?onClipboardCopy@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onClipboardCopy(std::string const&);

    // vIndex: 19, symbol:
    // ?onClipboardPaste@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void onClipboardPaste(std::string const&);

    // symbol: ??0AppPlatformListener@@QEAA@_N@Z
    MCAPI explicit AppPlatformListener(bool);

    // symbol: ?initListener@AppPlatformListener@@QEAAXM@Z
    MCAPI void initListener(float priority);

    // symbol: ?terminate@AppPlatformListener@@QEAAXXZ
    MCAPI void terminate();

    // NOLINTEND
};
