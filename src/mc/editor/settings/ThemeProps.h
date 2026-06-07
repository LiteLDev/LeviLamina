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
    // prevent constructor by default
    ThemeProps(ThemeProps const&);
    ThemeProps();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator=(::Editor::Settings::ThemeProps const& other);

    MCNAPI ~ThemeProps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
