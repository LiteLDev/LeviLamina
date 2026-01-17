#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct WrapUserTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7029e0;
    ::ll::UntypedStorage<4, 52> mUnk5f9524;
    ::ll::UntypedStorage<8, 8>  mUnkf17887;
    // NOLINTEND

public:
    // prevent constructor by default
    WrapUserTextureCmd& operator=(WrapUserTextureCmd const&);
    WrapUserTextureCmd(WrapUserTextureCmd const&);
    WrapUserTextureCmd();
};

} // namespace renoir
