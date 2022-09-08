/**
 * @file  AppPlatformNetworkSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -1688589465
     */
    virtual ~AppPlatformNetworkSettings();
    /**
     * @vftbl  1
     * @symbol ?requiresNetworkOutageMessaging@AppPlatformNetworkSettings@@UEBA_NXZ
     * @hash   -606177170
     */
    virtual bool requiresNetworkOutageMessaging() const;
    /**
     * @symbol ??0AppPlatformNetworkSettings@@QEAA@XZ
     * @hash   1741322073
     */
    MCAPI AppPlatformNetworkSettings();

};