#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/shared_types/Color255RGBA.h"
#include "mc/deps/shared_types/util/FileReference.h"

namespace SharedTypes::Beta::DataDrivenUI::Styling {

struct FormTextField {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>> mColor;
    ::ll::TypedStorage<4, 20, ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>> mCaretColor;
    ::ll::TypedStorage<4, 20, ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>>
        mSelectionBackgroundColor;
    ::ll::TypedStorage<4, 20, ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>> mColorDisabled;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>>                       mDefaultImage;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>>                       mHoveredImage;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>>                       mDisabledImage;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>>                       mFocusedImage;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>>                       mPanelImage;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI::Styling
