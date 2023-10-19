#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDimension {
public:
    // prevent constructor by default
    IDimension& operator=(IDimension const&);
    IDimension(IDimension const&);
    IDimension();

public:
    // NOLINTBEGIN
    // vIndex: 1, symbol: __unk_vfn_1
    virtual ~IDimension();
    // symbol: ??1IDimension@@UEAA@XZ
    // MCVAPI ~IDimension();

    // NOLINTEND
};
