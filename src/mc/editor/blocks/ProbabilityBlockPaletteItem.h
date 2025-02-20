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
    MCAPI ::Editor::ProbabilityBlockPaletteItem& operator=(::Editor::ProbabilityBlockPaletteItem&&);

    MCAPI bool operator==(::Editor::ProbabilityBlockPaletteItem const& other) const;

    MCAPI ~ProbabilityBlockPaletteItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
