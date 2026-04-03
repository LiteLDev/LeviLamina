#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ExtensionPoint; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDivider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDropdown; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormScrollView; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSlider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSwitch; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct CompositionLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>>
        mMarkup;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
