#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct SimpleBlockPaletteItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd8d25d;
    ::ll::UntypedStorage<8, 8>  mUnk20a59b;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleBlockPaletteItem& operator=(SimpleBlockPaletteItem const&);
    SimpleBlockPaletteItem(SimpleBlockPaletteItem const&);
    SimpleBlockPaletteItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SimpleBlockPaletteItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
