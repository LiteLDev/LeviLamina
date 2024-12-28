#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Persistence {

struct PersistentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc7586e;
    ::ll::UntypedStorage<8, 32> mUnkdb7a42;
    ::ll::UntypedStorage<4, 4>  mUnkc9d1b1;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistentData& operator=(PersistentData const&);
    PersistentData(PersistentData const&);
    PersistentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PersistentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Persistence
