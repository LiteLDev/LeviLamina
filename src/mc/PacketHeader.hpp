/**
 * @file  PacketHeader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketHeader.
 *
 */
class PacketHeader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETHEADER
public:
    class PacketHeader& operator=(class PacketHeader const &) = delete;
    PacketHeader(class PacketHeader const &) = delete;
    PacketHeader() = delete;
#endif

public:
    /**
     * @symbol  ?getChannel\@PacketHeader\@\@QEBAIXZ
     */
    MCAPI unsigned int getChannel() const;

};