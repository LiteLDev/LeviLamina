#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

struct WebSocketPacketData {
public:
    std::string mIP; // this+0x0

    // prevent constructor by default
    WebSocketPacketData& operator=(WebSocketPacketData const&);
    WebSocketPacketData(WebSocketPacketData const&);
    WebSocketPacketData();

public:
    // NOLINTBEGIN
    MCAPI explicit WebSocketPacketData(std::string const& ip);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
