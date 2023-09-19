#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException {
public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?what@DebugAssertException@@UEBAPEBDXZ
    virtual char const* what() const;

    // symbol: ??1DebugAssertException@@UEAA@XZ
    MCVAPI ~DebugAssertException();

    // symbol: ??0DebugAssertException@@QEAA@AEBV0@@Z
    MCAPI DebugAssertException(class DebugAssertException const&);

    // symbol: ??0DebugAssertException@@QEAA@PEBD0H00@Z
    MCAPI DebugAssertException(char const*, char const*, int, char const*, char const*);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?WHAT@DebugAssertException@@0QEBDEB
    MCAPI static char const* const WHAT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $WHAT() { return WHAT; }

    // NOLINTEND
};
