#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Brush {

class UIElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd2bde2;
    ::ll::UntypedStorage<8, 40> mUnk154c47;
    ::ll::UntypedStorage<8, 88> mUnk9873eb;
    ::ll::UntypedStorage<4, 8>  mUnk60f891;
    ::ll::UntypedStorage<4, 8>  mUnkbcf2ff;
    ::ll::UntypedStorage<8, 32> mUnk508e4e;
    ::ll::UntypedStorage<1, 2>  mUnkfa4e0a;
    // NOLINTEND

public:
    // prevent constructor by default
    UIElement& operator=(UIElement const&);
    UIElement(UIElement const&);
    UIElement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIElement(
        ::std::string const&                                                           name,
        ::std::variant<float, bool, ::Vec3, ::std::string>                             initialValue,
        ::Scripting::Closure<void(::std::variant<float, bool, ::Vec3, ::std::string>)> valueChanged,
        ::std::optional<int>                                                           min,
        ::std::optional<int>                                                           max,
        ::std::optional<::std::vector<::std::string>>                                  dropdownItems,
        ::std::optional<bool>                                                          refreshOnChange
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                                           name,
        ::std::variant<float, bool, ::Vec3, ::std::string>                             initialValue,
        ::Scripting::Closure<void(::std::variant<float, bool, ::Vec3, ::std::string>)> valueChanged,
        ::std::optional<int>                                                           min,
        ::std::optional<int>                                                           max,
        ::std::optional<::std::vector<::std::string>>                                  dropdownItems,
        ::std::optional<bool>                                                          refreshOnChange
    );
    // NOLINTEND
};

} // namespace Editor::Brush
