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
    ::ll::UntypedStorage<8, 40> mUnkf84bce;
    ::ll::UntypedStorage<8, 24> mUnkd6eb56;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbabilityBlockPaletteItem(ProbabilityBlockPaletteItem const&);
    ProbabilityBlockPaletteItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ProbabilityBlockPaletteItem& operator=(::Editor::ProbabilityBlockPaletteItem const&);

#ifdef LL_PLAT_C
    MCNAPI bool operator==(::Editor::ProbabilityBlockPaletteItem const& other) const;
#endif

    MCNAPI ~ProbabilityBlockPaletteItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
