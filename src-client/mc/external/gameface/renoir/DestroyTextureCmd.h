#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3f988d;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyTextureCmd& operator=(DestroyTextureCmd const&);
    DestroyTextureCmd(DestroyTextureCmd const&);
    DestroyTextureCmd();
};

} // namespace renoir
