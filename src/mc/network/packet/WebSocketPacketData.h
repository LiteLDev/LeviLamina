#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct WebSocketPacketData {
public:
    std::string mIP; // this+0x0

    // prevent constructor by default
    WebSocketPacketData& operator=(WebSocketPacketData const&);
    WebSocketPacketData(WebSocketPacketData const&);
    WebSocketPacketData();

public:
    // NOLINTBEGIN
    // symbol: ??0WebSocketPacketData@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit WebSocketPacketData(std::string const& ip);

    // symbol: ?read@WebSocketPacketData@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
