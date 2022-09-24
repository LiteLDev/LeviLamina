/**
 * @file  AppPlatformNetworkSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatformNetworkSettings.
 *
 */
class AppPlatformNetworkSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMNETWORKSETTINGS
public:
    class AppPlatformNetworkSettings& operator=(class AppPlatformNetworkSettings const &) = delete;
    AppPlatformNetworkSettings(class AppPlatformNetworkSettings const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AppPlatformNetworkSettings();
    /**
     * @hash   -606177170
     * @vftbl  1
     * @symbol ?requiresNetworkOutageMessaging@AppPlatformNetworkSettings@@UEBA_NXZ
     */
    virtual bool requiresNetworkOutageMessaging() const;
    /**
     * @hash   1741322073
     * @symbol ??0AppPlatformNetworkSettings@@QEAA@XZ
     */
    MCAPI AppPlatformNetworkSettings();

};