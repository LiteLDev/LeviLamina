#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk154f4d;
    ::ll::UntypedStorage<8, 8> mUnk17b45d;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteSystemIndex& operator=(RemoteSystemIndex const&);
    RemoteSystemIndex(RemoteSystemIndex const&);
    RemoteSystemIndex();

};

}
