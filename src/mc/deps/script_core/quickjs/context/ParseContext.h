#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

enum class ParseContext : uchar {
    FunctionArgument  = 0,
    ReturnType        = 1,
    ArrayElement      = 2,
    DictionaryElement = 3,
    ClosureReturnType = 4,
    InterfaceProperty = 5,
    Invalid           = 6,
};

}
