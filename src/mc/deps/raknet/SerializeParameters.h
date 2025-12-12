#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SerializeParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 4608> mUnka7dc09;
    ::ll::UntypedStorage<8, 128>  mUnk910f69;
    ::ll::UntypedStorage<8, 8>    mUnkf185bc;
    ::ll::UntypedStorage<4, 256>  mUnk808d29;
    ::ll::UntypedStorage<8, 8>    mUnka037e1;
    ::ll::UntypedStorage<4, 4>    mUnk7f9a83;
    ::ll::UntypedStorage<8, 8>    mUnkf92c79;
    ::ll::UntypedStorage<8, 8>    mUnk93596d;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializeParameters& operator=(SerializeParameters const&);
    SerializeParameters(SerializeParameters const&);
    SerializeParameters();
};

} // namespace RakNet
