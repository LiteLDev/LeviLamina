#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct Ktx1Header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 12> mUnkd7e8e3;
    ::ll::UntypedStorage<4, 4>  mUnk1f5634;
    ::ll::UntypedStorage<4, 4>  mUnk86d755;
    ::ll::UntypedStorage<4, 4>  mUnk3f5bc1;
    ::ll::UntypedStorage<4, 4>  mUnk317e7a;
    ::ll::UntypedStorage<4, 4>  mUnk24117f;
    ::ll::UntypedStorage<4, 4>  mUnk5e6e24;
    ::ll::UntypedStorage<4, 4>  mUnkce67e6;
    ::ll::UntypedStorage<4, 4>  mUnk86322e;
    ::ll::UntypedStorage<4, 4>  mUnk43021a;
    ::ll::UntypedStorage<4, 4>  mUnkf1ed60;
    ::ll::UntypedStorage<4, 4>  mUnka86c9c;
    ::ll::UntypedStorage<4, 4>  mUnk5af08a;
    ::ll::UntypedStorage<4, 4>  mUnk73ed93;
    // NOLINTEND

public:
    // prevent constructor by default
    Ktx1Header& operator=(Ktx1Header const&);
    Ktx1Header(Ktx1Header const&);
    Ktx1Header();
};

} // namespace texd
