#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppPlatformListener {

public:
    // prevent constructor by default
    AppPlatformListener& operator=(AppPlatformListener const&) = delete;
    AppPlatformListener(AppPlatformListener const&)            = delete;
    AppPlatformListener()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMLISTENER
    /**
     * @symbol ?onAppFocusGained\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusGained(); // NOLINT
    /**
     * @symbol ?onAppFocusLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusLost(); // NOLINT
    /**
     * @symbol ?onAppPaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPaused(); // NOLINT
    /**
     * @symbol ?onAppPreSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPreSuspended(); // NOLINT
    /**
     * @symbol ?onAppResumed\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed(); // NOLINT
    /**
     * @symbol ?onAppSurfaceCreated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSurfaceCreated(); // NOLINT
    /**
     * @symbol ?onAppSurfaceDestroyed\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSurfaceDestroyed(); // NOLINT
    /**
     * @symbol ?onAppSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended(); // NOLINT
    /**
     * @symbol ?onAppTerminated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppTerminated(); // NOLINT
    /**
     * @symbol ?onAppUnpaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppUnpaused(); // NOLINT
    /**
     * @symbol
     * ?onClipboardCopy\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardCopy(std::string const&); // NOLINT
    /**
     * @symbol
     * ?onClipboardPaste\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardPaste(std::string const&); // NOLINT
    /**
     * @symbol ?onDeviceLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onDeviceLost(); // NOLINT
    /**
     * @symbol ?onLowMemory\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory(); // NOLINT
    /**
     * @symbol ?onOperationModeChanged\@AppPlatformListener\@\@UEAAXW4OperationMode\@\@\@Z
     */
    MCVAPI void onOperationModeChanged(enum class OperationMode); // NOLINT
    /**
     * @symbol ?onPerformanceModeChanged\@AppPlatformListener\@\@UEAAX_N\@Z
     */
    MCVAPI void onPerformanceModeChanged(bool); // NOLINT
    /**
     * @symbol ?onPushNotificationReceived\@AppPlatformListener\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const&); // NOLINT
    /**
     * @symbol ?onResizeBegin\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeBegin(); // NOLINT
    /**
     * @symbol ?onResizeEnd\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeEnd(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatformListener(); // NOLINT
#endif
    /**
     * @symbol ??0AppPlatformListener\@\@QEAA\@_N\@Z
     */
    MCAPI AppPlatformListener(bool); // NOLINT
    /**
     * @symbol ?initListener\@AppPlatformListener\@\@QEAAXM\@Z
     */
    MCAPI void initListener(float); // NOLINT
    /**
     * @symbol ?terminate\@AppPlatformListener\@\@QEAAXXZ
     */
    MCAPI void terminate(); // NOLINT
};
