#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class IGameConnectionInfoProvider {
public:
    // prevent constructor by default
    IGameConnectionInfoProvider& operator=(IGameConnectionInfoProvider const&);
    IGameConnectionInfoProvider(IGameConnectionInfoProvider const&);
    IGameConnectionInfoProvider();

public:
    // NOLINTBEGIN
    // symbol: ??1IGameConnectionInfoProvider@Social@@UEAA@XZ
    MCVAPI ~IGameConnectionInfoProvider();

    // NOLINTEND
};

}; // namespace Social
