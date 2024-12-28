#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct SimpleBlockPaletteItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk36bcf6;
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
    MCAPI ::HashedString _getBlock() const;

    MCAPI ::Editor::SimpleBlockPaletteItem& operator=(::Editor::SimpleBlockPaletteItem&&);

    MCAPI bool operator==(::Editor::SimpleBlockPaletteItem const& other) const;

    MCAPI ~SimpleBlockPaletteItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Editor::SimpleBlockPaletteItem createDefault();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
