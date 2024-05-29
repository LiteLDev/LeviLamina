#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException {
public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DebugAssertException@@UEAA@XZ
    virtual ~DebugAssertException();

    // vIndex: 1, symbol: ?what@DebugAssertException@@UEBAPEBDXZ
    virtual char const* what() const;

    // symbol: ??0DebugAssertException@@QEAA@AEBV0@@Z
    MCAPI DebugAssertException(class DebugAssertException const& e);

    // symbol: ??0DebugAssertException@@QEAA@PEBD0H00@Z
    MCAPI DebugAssertException(char const* desc, char const* arg, int line, char const* file, char const* function);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?WHAT@DebugAssertException@@0QEBDEB
    MCAPI static char const* const WHAT;

    // NOLINTEND
};
