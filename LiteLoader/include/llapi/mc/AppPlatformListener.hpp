/**
 * @file  MC/AppPlatformListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1262944269
     * @symbol ?onAppFocusGained@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppFocusGained();
    /**
     * @hash   1278506105
     * @symbol ?onAppFocusLost@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppFocusLost();
    /**
     * @hash   394141583
     * @symbol ?onAppPaused@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppPaused();
    /**
     * @hash   -139646695
     * @symbol ?onAppPreSuspended@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppPreSuspended();
    /**
     * @hash   301225172
     * @symbol ?onAppResumed@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppResumed();
    /**
     * @hash   917633752
     * @symbol ?onAppSuspended@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @hash   -1612044700
     * @symbol ?onAppTerminated@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppTerminated();
    /**
     * @hash   949068616
     * @symbol ?onAppUnpaused@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onAppUnpaused();
    /**
     * @hash   -92186591
     * @symbol ?onClipboardCopy@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onClipboardCopy(std::string const &);
    /**
     * @hash   -2014948335
     * @symbol ?onClipboardPaste@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void onClipboardPaste(std::string const &);
    /**
     * @hash   -1047263112
     * @symbol ?onDeviceLost@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onDeviceLost();
    /**
     * @hash   -1127414123
     * @symbol ?onLowMemory@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @hash   622137304
     * @symbol ?onOperationModeChanged@AppPlatformListener@@UEAAXW4OperationMode@@@Z
     */
    MCVAPI void onOperationModeChanged(enum OperationMode);
    /**
     * @hash   -1023701811
     * @symbol ?onPerformanceModeChanged@AppPlatformListener@@UEAAX_N@Z
     */
    MCVAPI void onPerformanceModeChanged(bool);
    /**
     * @hash   -112241469
     * @symbol ?onPushNotificationReceived@AppPlatformListener@@UEAAXAEBVPushNotificationMessage@@@Z
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @hash   1170142517
     * @symbol ?onResizeBegin@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onResizeBegin();
    /**
     * @hash   1209523559
     * @symbol ?onResizeEnd@AppPlatformListener@@UEAAXXZ
     */
    MCVAPI void onResizeEnd();
#endif
    /**
     * @hash   -866833452
     * @symbol ??0AppPlatformListener@@QEAA@XZ
     */
    MCAPI AppPlatformListener();
    /**
     * @hash   -193483257
     * @symbol ?terminate@AppPlatformListener@@QEAAXXZ
     */
    MCAPI void terminate();

};