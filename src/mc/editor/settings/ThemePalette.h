#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class Color; }
// clang-format on

namespace Editor::Settings {

struct ThemePalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk6e1346;
    ::ll::UntypedStorage<8, 32> mUnk74ab87;
    ::ll::UntypedStorage<1, 1>  mUnkb61e79;
    ::ll::UntypedStorage<8, 48> mUnkc718dc;
    ::ll::UntypedStorage<8, 64> mUnk665030;
    // NOLINTEND

public:
    // prevent constructor by default
    ThemePalette();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThemePalette(::Editor::Settings::ThemePalette const&);

    MCNAPI ::Editor::Settings::ThemePalette& operator=(::Editor::Settings::ThemePalette&&);

    MCNAPI ::Editor::Settings::ThemePalette& operator=(::Editor::Settings::ThemePalette const&);

    MCNAPI ~ThemePalette();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Settings::ThemePalette const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
