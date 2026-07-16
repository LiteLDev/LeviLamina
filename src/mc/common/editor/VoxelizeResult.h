#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct VoxelizeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk307f10;
    ::ll::UntypedStorage<4, 12> mUnkc8a602;
    ::ll::UntypedStorage<4, 12> mUnk162dc8;
    ::ll::UntypedStorage<1, 1>  mUnk918cdc;
    ::ll::UntypedStorage<8, 32> mUnkf68f76;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelizeResult& operator=(VoxelizeResult const&);
    VoxelizeResult(VoxelizeResult const&);
    VoxelizeResult();
};

} // namespace Editor::Mesh
