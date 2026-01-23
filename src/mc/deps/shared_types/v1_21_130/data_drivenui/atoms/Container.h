#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct TagNamed; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct Container : public ::SharedTypes::v1_21_130::DataDrivenUI::
                       TagNamed<::SharedTypes::v1_21_130::DataDrivenUI::Container, 0, $unknown_type> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>>>
        mChildren;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
