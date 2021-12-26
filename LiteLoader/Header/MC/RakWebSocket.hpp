// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKET
public:
    class RakWebSocket& operator=(class RakWebSocket const&) = delete;
    RakWebSocket(class RakWebSocket const&) = delete;
    RakWebSocket() = delete;
#endif

public:
    /*0*/ virtual ~RakWebSocket();
    /*1*/ virtual enum WSConnectionResult connect(std::string const&, std::vector<std::string> const&);
    /*2*/ virtual enum WSConnectionResult connect(std::string const&);
    /*3*/ virtual bool isReady() const;
    /*4*/ virtual void setOnMessageReceivedHandler(class std::function<void (class RakWebSocketDataFrame const& )> const&);
    /*5*/ virtual void setOnCloseHandler(class std::function<void (enum CloseStatusCode, std::string const& )> const&);
    /*6*/ virtual void setOnConnectedHandler(class std::function<void (std::string const& )> const&);
    /*7*/ virtual void tick();
    /*8*/ virtual void __unk_vfn_0() = 0;
    /*9*/ virtual void __unk_vfn_1() = 0;
    /*
    inline  ~RakWebSocket(){
         (RakWebSocket::*rv)();
        *((void**)&rv) = dlsym("??1RakWebSocket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);

protected:
    MCAPI void _close(enum CloseStatusCode);
    MCAPI void _createWebSocketKey();
    MCAPI void _fail(std::string const&, enum CloseStatusCode);
    MCAPI std::string _generateBase64SHA1Key(std::string const&);
    MCAPI void _processClosingHandshake(bool);
    MCAPI void _processDataFrames(class RakNet::BitStream&);
    MCAPI void _reset();
    MCAPI bool _sendControlFrame(unsigned char const*, unsigned __int64, enum OpCode);
    MCAPI bool _sendDataFrame(unsigned char const*, unsigned int, enum OpCode, bool);
    MCAPI bool _sendNonControlFrame(unsigned char const*, unsigned __int64, enum OpCode);
    MCAPI void _splitWebSocketURI(std::string const&, std::string&, std::string&, std::string&);
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream&);
    MCAPI void _validateFields();
    MCAPI bool _validateWebSocketURI();

private:

};