#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PunchthroughConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdd3b1b;
    ::ll::UntypedStorage<8, 8> mUnke7ccfe;
    ::ll::UntypedStorage<4, 4> mUnka9fbcd;
    ::ll::UntypedStorage<4, 4> mUnkac3844;
    ::ll::UntypedStorage<4, 4> mUnk4a6952;
    ::ll::UntypedStorage<4, 4> mUnka13c63;
    ::ll::UntypedStorage<4, 4> mUnk2786ac;
    ::ll::UntypedStorage<4, 4> mUnkdd5659;
    ::ll::UntypedStorage<4, 4> mUnk5a9c16;
    ::ll::UntypedStorage<4, 4> mUnkb3d8d4;
    ::ll::UntypedStorage<1, 1> mUnk35772e;
    // NOLINTEND

public:
    // prevent constructor by default
    PunchthroughConfiguration& operator=(PunchthroughConfiguration const&);
    PunchthroughConfiguration(PunchthroughConfiguration const&);
    PunchthroughConfiguration();

};

}
