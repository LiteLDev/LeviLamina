#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetPipelineStateCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 0> mUnkdbfb60;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPipelineStateCmd& operator=(SetPipelineStateCmd const&);
    SetPipelineStateCmd(SetPipelineStateCmd const&);
    SetPipelineStateCmd();
};

} // namespace renoir
