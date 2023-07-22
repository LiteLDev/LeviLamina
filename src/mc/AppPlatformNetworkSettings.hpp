/**
 * @file  AppPlatformNetworkSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~AppPlatformNetworkSettings();
    /**
     * @vftbl  1
     * @symbol  ?requiresNetworkOutageMessaging\@AppPlatformNetworkSettings\@\@UEBA_NXZ
     */
    virtual bool requiresNetworkOutageMessaging() const;
    /**
     * @symbol  ??0AppPlatformNetworkSettings\@\@QEAA\@XZ
     */
    MCAPI AppPlatformNetworkSettings();

};