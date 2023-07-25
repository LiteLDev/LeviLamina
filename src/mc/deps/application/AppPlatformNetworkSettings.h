#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppPlatformNetworkSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMNETWORKSETTINGS
public:
    AppPlatformNetworkSettings& operator=(AppPlatformNetworkSettings const&) = delete;
    AppPlatformNetworkSettings(AppPlatformNetworkSettings const&)            = delete;
    AppPlatformNetworkSettings()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?requiresNetworkOutageMessaging\@AppPlatformNetworkSettings\@\@UEBA_NXZ
     */
    virtual bool requiresNetworkOutageMessaging() const;
};
