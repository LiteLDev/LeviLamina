#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorBlockPaletteEventPaletteRemoved {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc05359;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteEventPaletteRemoved& operator=(EditorBlockPaletteEventPaletteRemoved const&);
    EditorBlockPaletteEventPaletteRemoved(EditorBlockPaletteEventPaletteRemoved const&);
    EditorBlockPaletteEventPaletteRemoved();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EditorBlockPaletteEventPaletteRemoved();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
