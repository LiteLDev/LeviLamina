#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PrintStream {
public:
    // prevent constructor by default
    // PrintStream& operator=(PrintStream const&);
    // PrintStream(PrintStream const&);
    // PrintStream();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PrintStream@@UEAA@XZ
    virtual ~PrintStream();

    // vIndex: 1, symbol: ?print@PrintStream@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void print(std::string const&);

    // symbol: ?println@PrintStream@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void println(std::string const&);

    // NOLINTEND
};
