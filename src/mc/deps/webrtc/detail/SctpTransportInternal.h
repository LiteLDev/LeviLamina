#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class SctpTransportInternal {
public:
    // prevent constructor by default
    SctpTransportInternal& operator=(SctpTransportInternal const&);
    SctpTransportInternal(SctpTransportInternal const&);
    SctpTransportInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SctpTransportInternal@cricket@@UEAA@XZ
    virtual ~SctpTransportInternal();

    // NOLINTEND
};

}; // namespace cricket
