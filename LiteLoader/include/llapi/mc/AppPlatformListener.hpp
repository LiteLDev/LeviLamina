/**
 * @file  AppPlatformListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1171057293
     * @symbol  ?onAppFocusGained\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusGained();
    /**
     * @hash   1370393081
     * @symbol  ?onAppFocusLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusLost();
    /**
     * @hash   486028559
     * @symbol  ?onAppPaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPaused();
    /**
     * @hash   -47759719
     * @symbol  ?onAppPreSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPreSuspended();
    /**
     * @hash   393112148
     * @symbol  ?onAppResumed\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @hash   1009520728
     * @symbol  ?onAppSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @hash   -1520157724
     * @symbol  ?onAppTerminated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppTerminated();
    /**
     * @hash   1040955592
     * @symbol  ?onAppUnpaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppUnpaused();
    /**
     * @hash   -299615
     * @symbol  ?onClipboardCopy\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardCopy(std::string const &);
    /**
     * @hash   -1923061359
     * @symbol  ?onClipboardPaste\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardPaste(std::string const &);
    /**
     * @hash   -955376136
     * @symbol  ?onDeviceLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onDeviceLost();
    /**
     * @hash   -1035527147
     * @symbol  ?onLowMemory\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @hash   714024280
     * @symbol  ?onOperationModeChanged\@AppPlatformListener\@\@UEAAXW4OperationMode\@\@\@Z
     */
    MCVAPI void onOperationModeChanged(enum class OperationMode);
    /**
     * @hash   -931814835
     * @symbol  ?onPerformanceModeChanged\@AppPlatformListener\@\@UEAAX_N\@Z
     */
    MCVAPI void onPerformanceModeChanged(bool);
    /**
     * @hash   -20354493
     * @symbol  ?onPushNotificationReceived\@AppPlatformListener\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @hash   1262029493
     * @symbol  ?onResizeBegin\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeBegin();
    /**
     * @hash   1301410535
     * @symbol  ?onResizeEnd\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeEnd();
#endif
    /**
     * @hash   -1710345436
     * @symbol  ??0AppPlatformListener\@\@QEAA\@XZ
     */
    MCAPI AppPlatformListener();
    /**
     * @hash   -1036979865
     * @symbol  ?terminate\@AppPlatformListener\@\@QEAAXXZ
     */
    MCAPI void terminate();

};