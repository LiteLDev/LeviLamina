#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetVSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk96f76e;
    ::ll::UntypedStorage<4, 4> mUnk4332a5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVSConstantBuffersCmd& operator=(SetVSConstantBuffersCmd const&);
    SetVSConstantBuffersCmd(SetVSConstantBuffersCmd const&);
    SetVSConstantBuffersCmd();
};

} // namespace renoir
