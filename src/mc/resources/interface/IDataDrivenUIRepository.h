#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace Bedrock::PubSub { class Subscription; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ExtensionPoint; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDivider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDropdown; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormScrollView; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSlider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSwitch; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
// clang-format on

class IDataDrivenUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IDataDrivenUIRepository() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IDataDrivenUIRepository() /*override*/;
#endif

    virtual void load(::ResourcePackManager const&) = 0;

    virtual ::std::vector<::std::variant<
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
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>> const&
    getComposition(::std::string const&) const = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const&) const = 0;

    virtual ::std::vector<::std::variant<
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
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>
    getExtensionPointContents(::std::string const&) const = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToOnCompositionsReloadedAsync(::std::function<void()>&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
