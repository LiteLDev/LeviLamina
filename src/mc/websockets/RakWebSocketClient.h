#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketClient : public ::RakWebSocket {

public:
    // prevent constructor by default
    RakWebSocketClient& operator=(RakWebSocketClient const&) = delete;
    RakWebSocketClient(RakWebSocketClient const&)            = delete;
    RakWebSocketClient()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 8
     * @symbol ?_updateState\@RakWebSocketClient\@\@MEAAXXZ
     */
    virtual void _updateState();
    /**
     * @vftbl 9
     * @symbol ?_genMaskingKey\@RakWebSocketClient\@\@MEBAIXZ
     */
    virtual unsigned int _genMaskingKey() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKWEBSOCKETCLIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakWebSocketClient();
#endif
    /**
     * @symbol
     * ??0RakWebSocketClient\@\@QEAA\@V?$unique_ptr\@VTcpProxy\@\@U?$default_delete\@VTcpProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI RakWebSocketClient(std::unique_ptr<class TcpProxy>);
    // NOLINTEND
};
