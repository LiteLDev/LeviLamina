#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct TagNamed; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct PanelText : public ::SharedTypes::v1_21_130::DataDrivenUI::
                       TagNamed<::SharedTypes::v1_21_130::DataDrivenUI::PanelText, 2, $unknown_type> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mAttribs;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
