/**
 * @file  RakWebSocketClient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakWebSocket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocketClient.
 *
 */
class RakWebSocketClient : public RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETCLIENT
public:
    class RakWebSocketClient& operator=(class RakWebSocketClient const &) = delete;
    RakWebSocketClient(class RakWebSocketClient const &) = delete;
    RakWebSocketClient() = delete;
#endif

public:
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
     * @symbol ??0RakWebSocketClient\@\@QEAA\@V?$unique_ptr\@VTcpProxy\@\@U?$default_delete\@VTcpProxy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI RakWebSocketClient(std::unique_ptr<class TcpProxy>);

};
