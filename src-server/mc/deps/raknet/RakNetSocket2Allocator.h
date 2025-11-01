#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

namespace RakNet {

class RakNetSocket2Allocator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::RakNet::RakNetSocket2> CreateSharedRNS2();

    MCAPI static void DeallocRNS2(::RakNet::RakNetSocket2* s);
    // NOLINTEND
};

} // namespace RakNet
