/**
 * @file  RakWebSocketDataFrameParser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocketDataFrameParser.
 *
 */
class RakWebSocketDataFrameParser {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAMEPARSER
public:
    class RakWebSocketDataFrameParser& operator=(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser(class RakWebSocketDataFrameParser const &) = delete;
    RakWebSocketDataFrameParser() = delete;
#endif

public:
    /**
     * @symbol  ??0RakWebSocketDataFrameParser\@\@QEAA\@_N\@Z
     */
    MCAPI RakWebSocketDataFrameParser(bool);
    /**
     * @symbol  ?readFrame\@RakWebSocketDataFrameParser\@\@QEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> readFrame(class RakNet::BitStream &);
    /**
     * @symbol  ?setOnFailHandler\@RakWebSocketDataFrameParser\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CloseStatusCode\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setOnFailHandler(class std::function<void (std::string const &, enum class CloseStatusCode)>);
    /**
     * @symbol  ??1RakWebSocketDataFrameParser\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrameParser();

//private:
    /**
     * @symbol  ?_failReadFrame\@RakWebSocketDataFrameParser\@\@AEAA?AV?$shared_ptr\@VRakWebSocketDataFrame\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4CloseStatusCode\@\@\@Z
     */
    MCAPI class std::shared_ptr<class RakWebSocketDataFrame> _failReadFrame(std::string const &, enum class CloseStatusCode);

private:

};