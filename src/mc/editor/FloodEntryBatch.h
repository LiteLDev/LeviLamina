#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct FloodEntryBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk18f9df;
    ::ll::UntypedStorage<8, 24> mUnkad74c1;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodEntryBatch& operator=(FloodEntryBatch const&);
    FloodEntryBatch(FloodEntryBatch const&);
    FloodEntryBatch();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~FloodEntryBatch();
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
