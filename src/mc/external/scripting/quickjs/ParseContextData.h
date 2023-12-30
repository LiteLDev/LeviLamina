#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ParseContextData {
public:
    // prevent constructor by default
    ParseContextData& operator=(ParseContextData const&);
    ParseContextData(ParseContextData const&);
    ParseContextData();

public:
    // NOLINTBEGIN
    // symbol: ??1ParseContextData@QuickJS@Scripting@@QEAA@XZ
    MCAPI ~ParseContextData();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
