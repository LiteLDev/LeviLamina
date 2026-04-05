#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct SetStencilReferenceCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk374443;
    // NOLINTEND

public:
    // prevent constructor by default
    SetStencilReferenceCmd& operator=(SetStencilReferenceCmd const&);
    SetStencilReferenceCmd(SetStencilReferenceCmd const&);
    SetStencilReferenceCmd();
};

} // namespace renoir
