#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/resources/IStyleTextureInfoProvider.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace Bedrock::PubSub { class Subscription; }
namespace SharedTypes::Beta::DataDrivenUI::Styling { struct Style; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ExtensionPoint; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDivider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDropdown; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormHorizontalStack; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormImage; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormPanel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormScrollView; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSlider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSwitch; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ScrollableGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
namespace mce { class UUID; }
class IStyleTextureInfoProvider;
// clang-format on

class IDataDrivenUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataDrivenUIRepository() /*override*/ = default;

    virtual void setStyleTextureInfoProvider(::IStyleTextureInfoProvider& styleTextureInfoProvider) = 0;

    virtual void load(::ResourcePackManager const& resourcePackManager, bool const betaApis) = 0;

    virtual bool hasRootDefinition(::std::string const& identifier) const = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormHorizontalStack>>> const&
    getComposition(::std::string const& identifier) const = 0;

    virtual ::mce::UUID const& getCompositionPackId(::std::string const& identifier) const = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormPanel>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const& identifier) const = 0;

    virtual ::mce::UUID const& getRootPackId(::std::string const& identifier) const = 0;

    virtual void getStyles(::std::vector<::SharedTypes::Beta::DataDrivenUI::Styling::Style>& styles) const = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormHorizontalStack>>>
    getExtensionPointContents(::std::string const& name) const = 0;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback) = 0;

    virtual ::std::optional<::IStyleTextureInfoProvider::Info>
    getStyleTextureInfo(::std::string_view texturePath) const = 0;
    // NOLINTEND
};
