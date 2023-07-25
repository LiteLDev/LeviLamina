#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class DatagramHeaderFormat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAGRAMHEADERFORMAT
public:
    DatagramHeaderFormat& operator=(DatagramHeaderFormat const&) = delete;
    DatagramHeaderFormat(DatagramHeaderFormat const&)            = delete;
    DatagramHeaderFormat()                                       = delete;
#endif

public:
    /**
     * @symbol ?Deserialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Deserialize(class RakNet::BitStream*);
    /**
     * @symbol ?Serialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Serialize(class RakNet::BitStream*);
};
