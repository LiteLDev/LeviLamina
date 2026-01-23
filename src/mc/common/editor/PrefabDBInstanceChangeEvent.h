#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

struct PrefabDBInstanceChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5fb821;
    ::ll::UntypedStorage<8, 16> mUnkde59f6;
    ::ll::UntypedStorage<4, 4>  mUnkd1dc19;
    ::ll::UntypedStorage<8, 16> mUnkff2fa8;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBInstanceChangeEvent& operator=(PrefabDBInstanceChangeEvent const&);
    PrefabDBInstanceChangeEvent(PrefabDBInstanceChangeEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrefabDBInstanceChangeEvent();

    MCNAPI ~PrefabDBInstanceChangeEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
