#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct ModelAsset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk932d09;
    ::ll::UntypedStorage<8, 32> mUnk5e1c7d;
    ::ll::UntypedStorage<4, 12> mUnk86cb31;
    ::ll::UntypedStorage<4, 12> mUnke9ad65;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelAsset& operator=(ModelAsset const&);
    ModelAsset(ModelAsset const&);
    ModelAsset();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ModelAsset();
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
