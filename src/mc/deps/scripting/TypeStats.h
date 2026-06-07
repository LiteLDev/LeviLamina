#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::HandleCounter {

struct TypeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk937371;
    ::ll::UntypedStorage<4, 4> mUnkdecf81;
    ::ll::UntypedStorage<4, 4> mUnk6fa479;
    ::ll::UntypedStorage<4, 4> mUnk4ffda2;
    ::ll::UntypedStorage<8, 8> mUnk745a02;
    ::ll::UntypedStorage<8, 8> mUnk273bf2;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeStats& operator=(TypeStats const&);
    TypeStats(TypeStats const&);
    TypeStats();
};

} // namespace Scripting::HandleCounter
