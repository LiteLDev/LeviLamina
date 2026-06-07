#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
#ifdef LL_PLAT_C
    MCNAPI bool operator==(::Editor::SimpleBlockPaletteItem const& other) const;
#endif

    MCNAPI ~SimpleBlockPaletteItem();
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
