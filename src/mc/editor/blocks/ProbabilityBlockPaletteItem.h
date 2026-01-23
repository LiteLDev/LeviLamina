#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct ProbabilityBlockPaletteItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkffdf22;
    ::ll::UntypedStorage<8, 24> mUnk10dfdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbabilityBlockPaletteItem& operator=(ProbabilityBlockPaletteItem const&);
    ProbabilityBlockPaletteItem(ProbabilityBlockPaletteItem const&);
    ProbabilityBlockPaletteItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ProbabilityBlockPaletteItem& operator=(::Editor::ProbabilityBlockPaletteItem&&);

    MCNAPI bool operator==(::Editor::ProbabilityBlockPaletteItem const& other) const;

    MCNAPI ~ProbabilityBlockPaletteItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
