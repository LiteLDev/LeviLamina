#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"
#include "mc/enums/OpCode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocket& operator=(RakWebSocket const&);
    RakWebSocket(RakWebSocket const&);
    RakWebSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RakWebSocket@@UEAA@XZ
    virtual ~RakWebSocket();

    // vIndex: 1, symbol:
    // ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual ::WSConnectionResult connect(std::string const& uri, std::vector<std::string> const& subProtocols);

    // vIndex: 2, symbol:
    // ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::WSConnectionResult connect(std::string const& uri);

    // vIndex: 3, symbol: ?isReady@RakWebSocket@@UEBA_NXZ
    virtual bool isReady() const;

    // vIndex: 4, symbol:
    // ?setOnMessageReceivedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBVRakWebSocketDataFrame@@@Z@std@@@Z
    virtual void setOnMessageReceivedHandler(std::function<void(class RakWebSocketDataFrame const&)> const& handler);

    // vIndex: 5, symbol:
    // ?setOnCloseHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    virtual void setOnCloseHandler(std::function<void(::CloseStatusCode, std::string const&)> const& handler);

    // vIndex: 6, symbol:
    // ?setOnConnectedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    virtual void setOnConnectedHandler(std::function<void(std::string const&)> const& handler);

    // vIndex: 7, symbol: ?tick@RakWebSocket@@UEAAXXZ
    virtual void tick();

    // vIndex: 8, symbol: ?_updateState@RakWebSocketClient@@MEAAXXZ
    virtual void _updateState() = 0;

    // vIndex: 9, symbol: ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
    virtual uint _genMaskingKey() const = 0;

    // symbol: ??0RakWebSocket@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@_N@Z
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy> proxy, bool isServer);

    // symbol: ?send@RakWebSocket@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool send(std::string const& message);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_close@RakWebSocket@@IEAAXW4CloseStatusCode@@@Z
    MCAPI void _close(::CloseStatusCode code);

    // symbol: ?_createWebSocketKey@RakWebSocket@@IEAAXXZ
    MCAPI void _createWebSocketKey();

    // symbol:
    // ?_fail@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CloseStatusCode@@@Z
    MCAPI void _fail(std::string const& error, ::CloseStatusCode code);

    // symbol:
    // ?_generateBase64SHA1Key@RakWebSocket@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string _generateBase64SHA1Key(std::string const& key);

    // symbol: ?_invokeOnCloseHandler@RakWebSocket@@IEAAXXZ
    MCAPI void _invokeOnCloseHandler();

    // symbol: ?_processClosingHandshake@RakWebSocket@@IEAAX_N@Z
    MCAPI void _processClosingHandshake(bool notifyHandler);

    // symbol: ?_processDataFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
    MCAPI void _processDataFrames(class RakNet::BitStream& newIncoming);

    // symbol: ?_processPacket@RakWebSocket@@IEAA_NAEBV?$function@$$A6AXAEAVBitStream@RakNet@@@Z@std@@_N@Z
    MCAPI bool
    _processPacket(std::function<void(class RakNet::BitStream&)> const& processStep, bool acceptNewConnection);

    // symbol: ?_reset@RakWebSocket@@IEAAXXZ
    MCAPI void _reset();

    // symbol: ?_sendControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
    MCAPI bool _sendControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    // symbol: ?_sendDataFrame@RakWebSocket@@IEAA_NPEBEIW4OpCode@@_N@Z
    MCAPI bool _sendDataFrame(uchar const* payload, uint size, ::OpCode opCode, bool isFinalFragment);

    // symbol: ?_sendNonControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
    MCAPI bool _sendNonControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    // symbol:
    // ?_splitWebSocketURI@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@11@Z
    MCAPI void _splitWebSocketURI(std::string const& uri, std::string& scheme, std::string& host, std::string& path);

    // symbol: ?_subProcessHttpResponse@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream& newIncoming);

    // symbol: ?_validateFields@RakWebSocket@@IEAAXXZ
    MCAPI void _validateFields();

    // symbol: ?_validateWebSocketURI@RakWebSocket@@IEAA_NXZ
    MCAPI bool _validateWebSocketURI();

    // NOLINTEND
};
