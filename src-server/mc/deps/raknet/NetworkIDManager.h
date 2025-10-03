#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class NetworkIDObject; }
// clang-format on

namespace RakNet {

class NetworkIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8192, ::RakNet::NetworkIDObject* [1024]> networkIdHash;
    ::ll::TypedStorage<8, 8, uint64>                               startingOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkIDManager() = default;
    // NOLINTEND
};

} // namespace RakNet
