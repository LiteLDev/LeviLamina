#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketServer : public ::RakWebSocket {
public:
    // RakWebSocketServer inner types declare
    // clang-format off
    struct WebsocketServerMetaDataPayload;
    // clang-format on

    // RakWebSocketServer inner types define
    struct WebsocketServerMetaDataPayload {
    public:
        // WebsocketServerMetaDataPayload inner types define
        enum class MetaDataPayloadType : int {
            Unknown  = -1,
            TextHtml = 0,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk705ce4;
        ::ll::UntypedStorage<4, 4>  mUnk25d36e;
        // NOLINTEND

    public:
        // prevent constructor by default
        WebsocketServerMetaDataPayload& operator=(WebsocketServerMetaDataPayload const&);
        WebsocketServerMetaDataPayload(WebsocketServerMetaDataPayload const&);
        WebsocketServerMetaDataPayload();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd9873e;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketServer& operator=(RakWebSocketServer const&);
    RakWebSocketServer(RakWebSocketServer const&);
    RakWebSocketServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool isReady() const /*override*/;

    // vIndex: 7
    virtual void tick() /*override*/;

    // vIndex: 8
    virtual void _updateState() /*override*/;

    // vIndex: 9
    virtual uint _genMaskingKey() const /*override*/;

    // vIndex: 0
    virtual ~RakWebSocketServer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
