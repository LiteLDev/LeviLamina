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
    /**
     * @symbol
     * ?readFrame\@RakWebSocketDataFrameParser\@\@QEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream&); // NOLINT
    /**
     * @symbol ??1RakWebSocketDataFrameParser\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrameParser(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_failReadFrame\@RakWebSocketDataFrameParser\@\@AEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4CloseStatusCode\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame>
    _failReadFrame(std::string const&, enum class CloseStatusCode); // NOLINT

private:
};
