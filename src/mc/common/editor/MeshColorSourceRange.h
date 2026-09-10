#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshColorSourceRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3e9f09;
    ::ll::UntypedStorage<8, 8> mUnk3e8099;
    ::ll::UntypedStorage<4, 4> mUnk301a6f;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshColorSourceRange& operator=(MeshColorSourceRange const&);
    MeshColorSourceRange(MeshColorSourceRange const&);
    MeshColorSourceRange();
};

} // namespace Editor::Mesh
