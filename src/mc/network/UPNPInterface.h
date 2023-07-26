#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class UPNPInterface {

public:
    // prevent constructor by default
    UPNPInterface& operator=(UPNPInterface const&) = delete;
    UPNPInterface(UPNPInterface const&)            = delete;
    UPNPInterface()                                = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPNPINTERFACE
    /**
     * @symbol ?_onDisable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onDisable(); // NOLINT
    /**
     * @symbol ?_onEnable\@UPNPInterface\@\@EEAAXXZ
     */
    MCVAPI void _onEnable(); // NOLINT
#endif
    /**
     * @symbol ??0UPNPInterface\@\@QEAA\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    MCAPI UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const&); // NOLINT
    /**
     * @symbol ?reset\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?tick\@UPNPInterface\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
};
