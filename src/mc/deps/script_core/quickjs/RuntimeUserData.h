#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class RuntimeUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbf093a;
    ::ll::UntypedStorage<8, 8> mUnka1acb4;
    ::ll::UntypedStorage<8, 8> mUnk7ace31;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeUserData& operator=(RuntimeUserData const&);
    RuntimeUserData(RuntimeUserData const&);
    RuntimeUserData();
};

} // namespace Scripting::QuickJS
