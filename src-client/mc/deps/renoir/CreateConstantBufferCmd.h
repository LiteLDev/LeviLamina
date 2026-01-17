#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee3229;
    ::ll::UntypedStorage<4, 4> mUnkba95cf;
    ::ll::UntypedStorage<4, 4> mUnkce9be3;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateConstantBufferCmd& operator=(CreateConstantBufferCmd const&);
    CreateConstantBufferCmd(CreateConstantBufferCmd const&);
    CreateConstantBufferCmd();
};

} // namespace renoir
