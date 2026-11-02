#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

struct PrefabInstanceBoundsValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk900ab3;
    ::ll::UntypedStorage<8, 24> mUnke96ba9;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabInstanceBoundsValidation& operator=(PrefabInstanceBoundsValidation const&);
    PrefabInstanceBoundsValidation(PrefabInstanceBoundsValidation const&);
    PrefabInstanceBoundsValidation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PrefabInstanceBoundsValidation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
