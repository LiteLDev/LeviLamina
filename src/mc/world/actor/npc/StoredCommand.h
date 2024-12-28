#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct StoredCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1b59fb;
    ::ll::UntypedStorage<8, 32> mUnk879303;
    ::ll::UntypedStorage<8, 8>  mUnk53dd7c;
    // NOLINTEND

public:
    // prevent constructor by default
    StoredCommand& operator=(StoredCommand const&);
    StoredCommand(StoredCommand const&);
    StoredCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StoredCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
