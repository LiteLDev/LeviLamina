#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct TagNamed; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct Panel : public ::SharedTypes::v1_21_130::DataDrivenUI::
                   TagNamed<::SharedTypes::v1_21_130::DataDrivenUI::Panel, 1, $unknown_type> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mAttribs;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>>>>
        mChildren;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
