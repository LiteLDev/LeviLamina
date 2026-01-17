#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DrawIndexedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkda1d38;
    ::ll::UntypedStorage<4, 4> mUnkd58cf4;
    ::ll::UntypedStorage<4, 4> mUnkc11043;
    ::ll::UntypedStorage<4, 4> mUnk3a26c8;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawIndexedCmd& operator=(DrawIndexedCmd const&);
    DrawIndexedCmd(DrawIndexedCmd const&);
    DrawIndexedCmd();
};

} // namespace renoir
