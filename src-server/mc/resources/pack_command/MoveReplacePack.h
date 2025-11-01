#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct MoveReplacePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb57048;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveReplacePack& operator=(MoveReplacePack const&);
    MoveReplacePack(MoveReplacePack const&);
    MoveReplacePack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MoveReplacePack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
