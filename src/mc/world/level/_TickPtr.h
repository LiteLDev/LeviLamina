#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {
public:
    // prevent constructor by default
    _TickPtr& operator=(_TickPtr const&);
    _TickPtr(_TickPtr const&);
    _TickPtr();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ??1_TickPtr@@UEAA@XZ
    virtual ~_TickPtr();

    // NOLINTEND
};
