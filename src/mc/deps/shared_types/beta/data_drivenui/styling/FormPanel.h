#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/data_drivenui/styling/BorderImageRepeatType.h"
#include "mc/deps/shared_types/beta/data_drivenui/styling/BoxSize2D.h"
#include "mc/deps/shared_types/beta/data_drivenui/styling/BoxSize4D.h"
#include "mc/deps/shared_types/util/FileReference.h"

namespace SharedTypes::Beta::DataDrivenUI::Styling {

struct FormPanel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        4,
        24,
        ::std::optional<::std::variant<
            ::SharedTypes::Beta::DataDrivenUI::Styling::BoxSize2D,
            ::SharedTypes::Beta::DataDrivenUI::Styling::BoxSize4D>>>
                                                                                 mPadding;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::FileReference<21>>> mImage;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Beta::DataDrivenUI::Styling::BorderImageRepeatType>>
        mImageRepeatTopBottom;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Beta::DataDrivenUI::Styling::BorderImageRepeatType>>
        mImageRepeatRightLeft;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI::Styling
