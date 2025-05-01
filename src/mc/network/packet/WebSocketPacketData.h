#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct WebSocketPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIP;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
