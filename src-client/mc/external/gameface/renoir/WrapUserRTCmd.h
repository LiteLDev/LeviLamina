#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct WrapUserRTCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke9af5b;
    ::ll::UntypedStorage<4, 52> mUnka09b1c;
    ::ll::UntypedStorage<4, 4>  mUnkedd6a5;
    ::ll::UntypedStorage<8, 8>  mUnkb0fb8a;
    ::ll::UntypedStorage<4, 12> mUnkdfbef3;
    ::ll::UntypedStorage<4, 4>  mUnk8d2c83;
    // NOLINTEND

public:
    // prevent constructor by default
    WrapUserRTCmd& operator=(WrapUserRTCmd const&);
    WrapUserRTCmd(WrapUserRTCmd const&);
    WrapUserRTCmd();
};

} // namespace renoir
