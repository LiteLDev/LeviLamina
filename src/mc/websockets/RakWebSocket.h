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
    // vIndex: 0
    virtual ~RakWebSocket();

    // vIndex: 1
    virtual ::WSConnectionResult connect(std::string const& uri, std::vector<std::string> const& subProtocols);

    // vIndex: 2
    virtual ::WSConnectionResult connect(std::string const& uri);

    // vIndex: 3
    virtual bool isReady() const;

    // vIndex: 4
    virtual void setOnMessageReceivedHandler(std::function<void(class RakWebSocketDataFrame const&)> const& handler);

    // vIndex: 5
    virtual void setOnCloseHandler(std::function<void(::CloseStatusCode, std::string const&)> const& handler);

    // vIndex: 6
    virtual void setOnConnectedHandler(std::function<void(std::string const&)> const& handler);

    // vIndex: 7
    virtual void tick();

    // vIndex: 8
    virtual void _updateState() = 0;

    // vIndex: 9
    virtual uint _genMaskingKey() const = 0;

    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy> proxy, bool isServer);

    MCAPI bool send(std::string const& message);

    MCAPI bool sendBinary(uchar const* data, uint64 size);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _close(::CloseStatusCode code);

    MCAPI void _createWebSocketKey();

    MCAPI void _fail(std::string const& error, ::CloseStatusCode code);

    MCAPI std::string _generateBase64SHA1Key(std::string const& key);

    MCAPI void _invokeOnCloseHandler();

    MCAPI void _processClosingHandshake(bool notifyHandler);

    MCAPI void _processDataFrames(class RakNet::BitStream& newIncoming);

    MCAPI bool
    _processPacket(std::function<void(class RakNet::BitStream&)> const& processStep, bool acceptNewConnection);

    MCAPI void _reset();

    MCAPI bool _sendControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    MCAPI bool _sendDataFrame(uchar const* payload, uint size, ::OpCode opCode, bool isFinalFragment);

    MCAPI bool _sendNonControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    MCAPI void _splitWebSocketURI(std::string const& uri, std::string& scheme, std::string& host, std::string& path);

    MCAPI void _subProcessHttpResponse(class RakNet::BitStream& newIncoming);

    MCAPI void _validateFields();

    MCAPI bool _validateWebSocketURI();

    // NOLINTEND
};
