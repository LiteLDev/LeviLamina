#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs {

class VisiblePrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4e0f1e;
    ::ll::UntypedStorage<4, 12> mUnk432fa7;
    ::ll::UntypedStorage<4, 4> mUnk552111;
    ::ll::UntypedStorage<4, 4> mUnk490428;
    ::ll::UntypedStorage<4, 12> mUnk3723eb;
    ::ll::UntypedStorage<4, 12> mUnk12eb68;
    ::ll::UntypedStorage<4, 12> mUnk40e664;
    // NOLINTEND

public:
    // prevent constructor by default
    VisiblePrefabInstanceStructureRef& operator=(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef();

};

}
