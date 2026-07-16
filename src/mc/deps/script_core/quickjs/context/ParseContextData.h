#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ParseContextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7b6afb;
    ::ll::UntypedStorage<8, 16> mUnk938741;
    ::ll::UntypedStorage<4, 8>  mUnk83c6bc;
    ::ll::UntypedStorage<8, 32> mUnk9dcfb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ParseContextData& operator=(ParseContextData const&);
    ParseContextData(ParseContextData const&);
    ParseContextData();
};

} // namespace Scripting::QuickJS
