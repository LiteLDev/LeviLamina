#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetSamplerDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1ea739;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSamplerDebugNameCmd& operator=(SetSamplerDebugNameCmd const&);
    SetSamplerDebugNameCmd(SetSamplerDebugNameCmd const&);
    SetSamplerDebugNameCmd();
};

} // namespace renoir
