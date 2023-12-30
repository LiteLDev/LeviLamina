#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {
public:
    // prevent constructor by default
    AddressOrGUID& operator=(AddressOrGUID const&);
    AddressOrGUID();

public:
    // NOLINTBEGIN
    // symbol: ??0AddressOrGUID@RakNet@@QEAA@AEBU01@@Z
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const& input);

    // symbol: ??0AddressOrGUID@RakNet@@QEAA@AEBUSystemAddress@1@@Z
    MCAPI explicit AddressOrGUID(struct RakNet::SystemAddress const& input);

    // symbol: ?IsUndefined@AddressOrGUID@RakNet@@QEBA_NXZ
    MCAPI bool IsUndefined() const;

    // NOLINTEND
};

}; // namespace RakNet
