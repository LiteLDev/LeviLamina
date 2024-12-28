#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

class PayloadEventDispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk44123f;
    ::ll::UntypedStorage<8, 64> mUnka49834;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadEventDispatcher& operator=(PayloadEventDispatcher const&);
    PayloadEventDispatcher(PayloadEventDispatcher const&);
    PayloadEventDispatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PayloadEventDispatcher();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::DataStore
