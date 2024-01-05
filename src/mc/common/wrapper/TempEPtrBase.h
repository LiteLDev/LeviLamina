#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TempEPtrBase {
public:
    // prevent constructor by default
    TempEPtrBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?invalidate@TempEPtrBase@@EEAAXXZ
    virtual void invalidate();

    // vIndex: 1, symbol: ??1TempEPtrBase@@UEAA@XZ
    virtual ~TempEPtrBase();

    // symbol: ??0TempEPtrBase@@QEAA@AEBV0@@Z
    MCAPI TempEPtrBase(class TempEPtrBase const& e);

    // symbol: ?isValid@TempEPtrBase@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??4TempEPtrBase@@QEAAAEAV0@AEBV0@@Z
    MCAPI class TempEPtrBase& operator=(class TempEPtrBase const& e);

    // symbol: ?unset@TempEPtrBase@@QEAAXXZ
    MCAPI void unset();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_lock@TempEPtrBase@@IEBAPEAVActor@@XZ
    MCAPI class Actor* _lock() const;

    // symbol: ?_set@TempEPtrBase@@IEAAXPEAVActor@@@Z
    MCAPI void _set(class Actor* e);

    // NOLINTEND
};
