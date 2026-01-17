#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke5b16a;
    ::ll::UntypedStorage<4, 52> mUnk15ef8b;
    ::ll::UntypedStorage<4, 4>  mUnkcf3ad5;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateTextureCmd& operator=(CreateTextureCmd const&);
    CreateTextureCmd(CreateTextureCmd const&);
    CreateTextureCmd();
};

} // namespace renoir
