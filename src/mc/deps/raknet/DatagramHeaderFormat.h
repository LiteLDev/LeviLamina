#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class DatagramHeaderFormat {

public:
    // prevent constructor by default
    DatagramHeaderFormat& operator=(DatagramHeaderFormat const&) = delete;
    DatagramHeaderFormat(DatagramHeaderFormat const&)            = delete;
    DatagramHeaderFormat()                                       = delete;

public:
    /**
     * @symbol ?Deserialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Deserialize(class RakNet::BitStream*); // NOLINT
    /**
     * @symbol ?Serialize\@DatagramHeaderFormat\@\@QEAAXPEAVBitStream\@RakNet\@\@\@Z
     */
    MCAPI void Serialize(class RakNet::BitStream*); // NOLINT
};
