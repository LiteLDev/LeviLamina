#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrameParser {

public:
    // prevent constructor by default
    RakWebSocketDataFrameParser& operator=(RakWebSocketDataFrameParser const&) = delete;
    RakWebSocketDataFrameParser(RakWebSocketDataFrameParser const&)            = delete;
    RakWebSocketDataFrameParser()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?readFrame\@RakWebSocketDataFrameParser\@\@QEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream&);
    /**
     * @symbol ??1RakWebSocketDataFrameParser\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrameParser();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_failReadFrame\@RakWebSocketDataFrameParser\@\@AEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4CloseStatusCode\@\@\@Z
     */
    MCAPI std::shared_ptr<class RakWebSocketDataFrame> _failReadFrame(std::string const&, enum class CloseStatusCode);
    // NOLINTEND
};
