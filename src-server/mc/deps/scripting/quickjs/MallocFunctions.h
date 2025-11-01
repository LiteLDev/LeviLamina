#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct MallocFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk587a8f;
    ::ll::UntypedStorage<8, 8> mUnk315930;
    ::ll::UntypedStorage<8, 8> mUnk524b35;
    ::ll::UntypedStorage<8, 8> mUnk6d13c0;
    ::ll::UntypedStorage<8, 8> mUnk4cf287;
    // NOLINTEND

public:
    // prevent constructor by default
    MallocFunctions& operator=(MallocFunctions const&);
    MallocFunctions(MallocFunctions const&);
    MallocFunctions();

};

}
