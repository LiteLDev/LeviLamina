#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrameParser {
public:
    // prevent constructor by default
    RakWebSocketDataFrameParser& operator=(RakWebSocketDataFrameParser const&);
    RakWebSocketDataFrameParser(RakWebSocketDataFrameParser const&);
    RakWebSocketDataFrameParser();

public:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream& data);

    MCAPI ~RakWebSocketDataFrameParser();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class RakWebSocketDataFrame> _failReadFrame(std::string const& error, ::CloseStatusCode code);

    // NOLINTEND
};
