/**
 * @file  AppPlatformListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatformListener.
 *
 */
class AppPlatformListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMLISTENER
public:
    class AppPlatformListener& operator=(class AppPlatformListener const &) = delete;
    AppPlatformListener(class AppPlatformListener const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMLISTENER
    /**
     * @symbol  ?onAppFocusGained\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusGained();
    /**
     * @symbol  ?onAppFocusLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusLost();
    /**
     * @symbol  ?onAppPaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPaused();
    /**
     * @symbol  ?onAppPreSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPreSuspended();
    /**
     * @symbol  ?onAppResumed\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @symbol  ?onAppSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @symbol  ?onAppTerminated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppTerminated();
    /**
     * @symbol  ?onAppUnpaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppUnpaused();
    /**
     * @symbol  ?onClipboardCopy\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardCopy(std::string const &);
    /**
     * @symbol  ?onClipboardPaste\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardPaste(std::string const &);
    /**
     * @symbol  ?onDeviceLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onDeviceLost();
    /**
     * @symbol  ?onLowMemory\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @symbol  ?onOperationModeChanged\@AppPlatformListener\@\@UEAAXW4OperationMode\@\@\@Z
     */
    MCVAPI void onOperationModeChanged(enum class OperationMode);
    /**
     * @symbol  ?onPerformanceModeChanged\@AppPlatformListener\@\@UEAAX_N\@Z
     */
    MCVAPI void onPerformanceModeChanged(bool);
    /**
     * @symbol  ?onPushNotificationReceived\@AppPlatformListener\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @symbol  ?onResizeBegin\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeBegin();
    /**
     * @symbol  ?onResizeEnd\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeEnd();
#endif
    /**
     * @symbol  ??0AppPlatformListener\@\@QEAA\@XZ
     */
    MCAPI AppPlatformListener();
    /**
     * @symbol  ?terminate\@AppPlatformListener\@\@QEAAXXZ
     */
    MCAPI void terminate();

};