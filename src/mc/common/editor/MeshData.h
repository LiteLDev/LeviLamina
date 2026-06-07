#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk447fcc;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshData& operator=(MeshData const&);
    MeshData(MeshData const&);
    MeshData();
};

} // namespace Editor::Mesh
