#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshResolvedColorPlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8c3657;
    ::ll::UntypedStorage<4, 16> mUnke62522;
    ::ll::UntypedStorage<8, 32> mUnk36b5b4;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshResolvedColorPlacement& operator=(MeshResolvedColorPlacement const&);
    MeshResolvedColorPlacement(MeshResolvedColorPlacement const&);
    MeshResolvedColorPlacement();
};

} // namespace Editor::Mesh
