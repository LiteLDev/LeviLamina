#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Settings { struct ThemePalette; }
// clang-format on

namespace Editor::Settings {

struct ThemeProps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk801773;
    ::ll::UntypedStorage<8, 64> mUnk5a254c;
    ::ll::UntypedStorage<8, 48> mUnk2d468b;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThemeProps();

    MCAPI ThemeProps(::Editor::Settings::ThemeProps const&);

    MCAPI void operator=(::Editor::Settings::ThemeProps const& other);

    MCAPI ~ThemeProps();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Editor::Settings::ThemeProps const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
