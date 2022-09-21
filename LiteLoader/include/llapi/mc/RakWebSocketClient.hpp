/**
 * @file  MC/RakWebSocketClient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RakWebSocketClient();
    /**
     * @hash   -930105517
     * @vftbl  8
     * @symbol ?_updateState@RakWebSocketClient@@MEAAXXZ
     */
    virtual void _updateState();
    /**
     * @hash   1454108083
     * @vftbl  9
     * @symbol ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
     */
    virtual unsigned int _genMaskingKey() const;
    /**
     * @hash   1075847197
     * @symbol ??0RakWebSocketClient@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@@Z
     */
    MCAPI RakWebSocketClient(std::unique_ptr<class TcpProxy>);

};