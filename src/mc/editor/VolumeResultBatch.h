#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct VolumeResultBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke72dd3;
    ::ll::UntypedStorage<8, 24> mUnka2fdf9;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeResultBatch& operator=(VolumeResultBatch const&);
    VolumeResultBatch(VolumeResultBatch const&);
    VolumeResultBatch();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~VolumeResultBatch();
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

} // namespace Editor::InteractiveTools
