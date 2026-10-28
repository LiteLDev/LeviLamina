#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshPlacementGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk918456;
    ::ll::UntypedStorage<8, 24> mUnkc37a94;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshPlacementGroup& operator=(MeshPlacementGroup const&);
    MeshPlacementGroup(MeshPlacementGroup const&);
    MeshPlacementGroup();
};

} // namespace Editor::Mesh
