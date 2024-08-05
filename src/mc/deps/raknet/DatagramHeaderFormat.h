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
    MCAPI void Deserialize(class RakNet::BitStream* b);

    MCAPI void Serialize(class RakNet::BitStream* b);

    // NOLINTEND
};
