#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorBlockPaletteEventItemUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7be58a;
    ::ll::UntypedStorage<4, 4>  mUnk207a4d;
    ::ll::UntypedStorage<8, 8>  mUnkbf5a79;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteEventItemUpdated& operator=(EditorBlockPaletteEventItemUpdated const&);
    EditorBlockPaletteEventItemUpdated(EditorBlockPaletteEventItemUpdated const&);
    EditorBlockPaletteEventItemUpdated();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EditorBlockPaletteEventItemUpdated();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
