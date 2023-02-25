/**
 * @file  WebSocketPacketData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure WebSocketPacketData.
 *
 */
struct WebSocketPacketData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBSOCKETPACKETDATA
public:
    struct WebSocketPacketData& operator=(struct WebSocketPacketData const &) = delete;
    WebSocketPacketData(struct WebSocketPacketData const &) = delete;
    WebSocketPacketData() = delete;
#endif

public:
    /**
     * @symbol  ??0WebSocketPacketData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI WebSocketPacketData(std::string const &);

};