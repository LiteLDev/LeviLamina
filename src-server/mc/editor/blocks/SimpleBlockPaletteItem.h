#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor {

struct SimpleBlockPaletteItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk36bcf6;
    ::ll::UntypedStorage<8, 8> mUnk20a59b;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleBlockPaletteItem(SimpleBlockPaletteItem const&);
    SimpleBlockPaletteItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::HashedString _getBlock() const;

    MCNAPI ::Editor::SimpleBlockPaletteItem& operator=(::Editor::SimpleBlockPaletteItem&&);

    MCNAPI ::Editor::SimpleBlockPaletteItem& operator=(::Editor::SimpleBlockPaletteItem const&);

    MCNAPI ~SimpleBlockPaletteItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Editor::SimpleBlockPaletteItem createDefault();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
