#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct VoxelizeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk305a46;
    ::ll::UntypedStorage<4, 12> mUnk257f09;
    ::ll::UntypedStorage<4, 12> mUnk2bddb7;
    ::ll::UntypedStorage<4, 12> mUnkf167b8;
    ::ll::UntypedStorage<8, 32> mUnk4b1dfd;
    ::ll::UntypedStorage<8, 32> mUnk9f88e4;
    ::ll::UntypedStorage<4, 4>  mUnkedc6dc;
    ::ll::UntypedStorage<4, 4>  mUnk9340a3;
    ::ll::UntypedStorage<8, 64> mUnk53cffe;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelizeOptions& operator=(VoxelizeOptions const&);
    VoxelizeOptions(VoxelizeOptions const&);
    VoxelizeOptions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~VoxelizeOptions();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Mesh
