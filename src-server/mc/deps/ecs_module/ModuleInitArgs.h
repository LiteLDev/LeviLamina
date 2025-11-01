#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECSModule {

struct ModuleInitArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk60dd0c;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleInitArgs& operator=(ModuleInitArgs const&);
    ModuleInitArgs(ModuleInitArgs const&);
    ModuleInitArgs();

};

}
