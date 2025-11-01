#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetEqOperationsAndState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb3fe48;
    ::ll::UntypedStorage<8, 8> mUnk2dd696;
    ::ll::UntypedStorage<8, 8> mUnk2b9cfe;
    ::ll::UntypedStorage<8, 8> mUnk91c6d5;
    ::ll::UntypedStorage<8, 8> mUnk5ee2dd;
    ::ll::UntypedStorage<8, 8> mUnk2ce7eb;
    ::ll::UntypedStorage<1, 1> mUnk2ddd22;
    // NOLINTEND

public:
    // prevent constructor by default
    NetEqOperationsAndState& operator=(NetEqOperationsAndState const&);
    NetEqOperationsAndState(NetEqOperationsAndState const&);
    NetEqOperationsAndState();

};

}
