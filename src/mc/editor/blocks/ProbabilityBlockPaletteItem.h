#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    ProbabilityBlockPaletteItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProbabilityBlockPaletteItem(::Editor::ProbabilityBlockPaletteItem const&);

    MCAPI ::Editor::ProbabilityBlockPaletteItem& operator=(::Editor::ProbabilityBlockPaletteItem&&);

    MCAPI bool operator==(::Editor::ProbabilityBlockPaletteItem const& other) const;

    MCAPI ~ProbabilityBlockPaletteItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ProbabilityBlockPaletteItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
