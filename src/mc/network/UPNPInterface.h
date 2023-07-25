#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class UPNPInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPNPINTERFACE
public:
    UPNPInterface& operator=(UPNPInterface const&) = delete;
    UPNPInterface(UPNPInterface const&)            = delete;
    UPNPInterface()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPNPINTERFACE
    /**
     * @symbol ?_onDisable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onEnable();
#endif
    /**
     * @symbol ??0UPNPInterface\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const&);
    /**
     * @symbol ?reset\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?tick\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void tick();
};
