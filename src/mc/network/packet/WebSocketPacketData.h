#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct WebSocketPacketData {
public:
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
