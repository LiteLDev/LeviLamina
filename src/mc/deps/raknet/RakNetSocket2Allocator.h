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
    // symbol: ?CreateSharedRNS2@RakNetSocket2Allocator@RakNet@@SA?AV?$shared_ptr@VRakNetSocket2@RakNet@@@std@@XZ
    MCAPI static std::shared_ptr<class RakNet::RakNetSocket2> CreateSharedRNS2();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DeallocRNS2@RakNetSocket2Allocator@RakNet@@CAXPEAVRakNetSocket2@2@@Z
    MCAPI static void DeallocRNS2(class RakNet::RakNetSocket2* s);

    // NOLINTEND
};

}; // namespace RakNet
