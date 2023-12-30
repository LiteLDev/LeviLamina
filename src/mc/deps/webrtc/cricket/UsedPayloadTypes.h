#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class UsedPayloadTypes {
public:
    // prevent constructor by default
    UsedPayloadTypes& operator=(UsedPayloadTypes const&);
    UsedPayloadTypes(UsedPayloadTypes const&);
    UsedPayloadTypes();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UsedPayloadTypes@cricket@@UEAA@XZ
    virtual ~UsedPayloadTypes();

    // vIndex: 1, symbol: ?IsIdUsed@UsedPayloadTypes@cricket@@MEAA_NH@Z
    virtual bool IsIdUsed(int);

    // NOLINTEND
};

}; // namespace cricket
