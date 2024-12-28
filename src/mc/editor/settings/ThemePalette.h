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
    ::ll::UntypedStorage<8, 32> mUnk5b2224;
    ::ll::UntypedStorage<1, 1>  mUnkb61e79;
    ::ll::UntypedStorage<8, 48> mUnkc718dc;
    ::ll::UntypedStorage<8, 64> mUnk665030;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThemePalette();

    MCAPI ThemePalette(::Editor::Settings::ThemePalette const&);

    MCAPI ::Editor::Settings::ThemePalette& operator=(::Editor::Settings::ThemePalette const&);

    MCAPI ::Editor::Settings::ThemePalette& operator=(::Editor::Settings::ThemePalette&&);

    MCAPI ~ThemePalette();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& DARK_THEME_ID();

    MCAPI static ::HashedString const& HIGH_CONTRAST_THEME_ID();

    MCAPI static ::HashedString const& LIGHT_THEME_ID();

    MCAPI static ::HashedString const& REDSTONE_THEME_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Editor::Settings::ThemePalette const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
