#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DrawIndexedInstancedCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk41b18c;
    ::ll::UntypedStorage<4, 4> mUnkc3e6c0;
    ::ll::UntypedStorage<4, 4> mUnk31594d;
    ::ll::UntypedStorage<4, 4> mUnk3cf101;
    ::ll::UntypedStorage<4, 4> mUnk99a289;
    ::ll::UntypedStorage<4, 4> mUnk797401;
    // NOLINTEND

public:
    // prevent constructor by default
    DrawIndexedInstancedCmd& operator=(DrawIndexedInstancedCmd const&);
    DrawIndexedInstancedCmd(DrawIndexedInstancedCmd const&);
    DrawIndexedInstancedCmd();
};

} // namespace renoir
