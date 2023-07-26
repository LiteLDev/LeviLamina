/**
 * @file  DatagramHeaderFormat.hpp
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
 * @brief MC class DatagramHeaderFormat.
 *
 */
class DatagramHeaderFormat {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAGRAMHEADERFORMAT
public:
    class DatagramHeaderFormat& operator=(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat() = delete;
#endif

public:
    /**
     * @symbol  ?Deserialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Deserialize(class RakNet::BitStream *);
    /**
     * @symbol  ?Serialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Serialize(class RakNet::BitStream *);

};