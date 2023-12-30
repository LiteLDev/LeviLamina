#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class DatagramHeaderFormat {
public:
    // prevent constructor by default
    DatagramHeaderFormat& operator=(DatagramHeaderFormat const&);
    DatagramHeaderFormat(DatagramHeaderFormat const&);
    DatagramHeaderFormat();

public:
    // NOLINTBEGIN
    // symbol: ?Deserialize@DatagramHeaderFormat@@QEAAXPEAVBitStream@RakNet@@@Z
    MCAPI void Deserialize(class RakNet::BitStream* b);

    // symbol: ?Serialize@DatagramHeaderFormat@@QEAAXPEAVBitStream@RakNet@@@Z
    MCAPI void Serialize(class RakNet::BitStream* b);

    // NOLINTEND
};
