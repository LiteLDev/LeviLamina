#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreatePSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 148> mUnkc8f9ea;
    ::ll::UntypedStorage<4, 4>   mUnk7b4074;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePSOCmd& operator=(CreatePSOCmd const&);
    CreatePSOCmd(CreatePSOCmd const&);
    CreatePSOCmd();
};

} // namespace renoir
