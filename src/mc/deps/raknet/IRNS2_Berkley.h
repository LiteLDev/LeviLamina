#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetSocket2.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

namespace RakNet {

class IRNS2_Berkley : public ::RakNet::RakNetSocket2 {
public:
    // prevent constructor by default
    IRNS2_Berkley& operator=(IRNS2_Berkley const&);
    IRNS2_Berkley(IRNS2_Berkley const&);
    IRNS2_Berkley();

public:
    // NOLINTBEGIN
    // symbol: ??1IRNS2_Berkley@RakNet@@UEAA@XZ
    MCVAPI ~IRNS2_Berkley();

    // NOLINTEND
};

}; // namespace RakNet
