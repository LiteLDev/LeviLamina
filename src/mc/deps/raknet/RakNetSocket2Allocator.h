#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

namespace RakNet {

class RakNetSocket2Allocator {
public:
    // prevent constructor by default
    RakNetSocket2Allocator& operator=(RakNetSocket2Allocator const&);
    RakNetSocket2Allocator(RakNetSocket2Allocator const&);
    RakNetSocket2Allocator();

public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class RakNet::RakNetSocket2> CreateSharedRNS2();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void DeallocRNS2(class RakNet::RakNetSocket2* s);

    // NOLINTEND
};

}; // namespace RakNet
