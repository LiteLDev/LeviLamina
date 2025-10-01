#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

class PrefabDBPrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkae131b;
    ::ll::UntypedStorage<4, 4>  mUnk4c461e;
    ::ll::UntypedStorage<4, 4>  mUnk145664;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBPrefabInstanceStructureRef& operator=(PrefabDBPrefabInstanceStructureRef const&);
    PrefabDBPrefabInstanceStructureRef(PrefabDBPrefabInstanceStructureRef const&);
    PrefabDBPrefabInstanceStructureRef();
};

} // namespace Editor::Prefabs
