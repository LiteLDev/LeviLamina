#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"

namespace SharedTypes::Beta::DataDrivenUI::Styling {

struct FormLabel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>> mColor;
    ::ll::TypedStorage<1, 1, bool>                                                                     mShadow;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI::Styling
