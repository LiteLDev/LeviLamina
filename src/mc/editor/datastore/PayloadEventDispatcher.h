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
};

} // namespace Editor::DataStore
