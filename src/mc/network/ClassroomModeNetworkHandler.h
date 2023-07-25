#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClassroomModeNetworkHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODENETWORKHANDLER
public:
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&) = delete;
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&)            = delete;
    ClassroomModeNetworkHandler()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODENETWORKHANDLER
    /**
     * @symbol
     * ?allowIncomingPacketId\@ClassroomModeNetworkHandler\@\@UEAA_NAEBVNetworkIdentifier\@\@W4MinecraftPacketIds\@\@\@Z
     */
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const&, enum class MinecraftPacketIds);
    /**
     * @symbol
     * ?onWebsocketRequest\@ClassroomModeNetworkHandler\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCVAPI void onWebsocketRequest(std::string const&, std::string const&, class std::function<void(void)>);
#endif
    /**
     * @symbol ??0ClassroomModeNetworkHandler\@\@QEAA\@_N\@Z
     */
    MCAPI ClassroomModeNetworkHandler(bool);

    // private:
    /**
     * @symbol
     * ?_connect\@ClassroomModeNetworkHandler\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _connect(std::string const&);

private:
};
