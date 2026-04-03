#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/ResourcePackListener.h"
#include "mc/resources/interface/IDataDrivenUIRepository.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourcePackManager;
namespace Bedrock::PubSub { class Subscription; }
namespace Puv { class Logger; }
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
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIComposition; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIRoot; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
// clang-format on

class DataDrivenUIRepository : public ::IDataDrivenUIRepository, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkf7c36c;
    ::ll::UntypedStorage<8, 24>  mUnka0c594;
    ::ll::UntypedStorage<8, 8>   mUnk45cd72;
    ::ll::UntypedStorage<8, 256> mUnkd8a435;
    ::ll::UntypedStorage<8, 256> mUnkcca1b1;
    ::ll::UntypedStorage<8, 256> mUnk323176;
    ::ll::UntypedStorage<8, 256> mUnk71ff3b;
    ::ll::UntypedStorage<8, 24>  mUnkde6365;
    ::ll::UntypedStorage<8, 24>  mUnkb6bcf5;
    ::ll::UntypedStorage<8, 128> mUnkb4c13b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenUIRepository& operator=(DataDrivenUIRepository const&);
    DataDrivenUIRepository(DataDrivenUIRepository const&);
    DataDrivenUIRepository();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataDrivenUIRepository() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DataDrivenUIRepository() /*override*/;
#endif

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) /*override*/;

    virtual void onJsonResourcesChanged(::ResourcePackManager& resourcePackManager) /*override*/;

    virtual void load(::ResourcePackManager const& resourcePackManager) /*override*/;

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
    getComposition(::std::string const& identifier) const /*override*/;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const& identifier) const /*override*/;

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
    getExtensionPointContents(::std::string const& name) const /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _initializeLoaders(
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot>& rootLoader,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition>& compositionLoader,
        bool                                                        isBuiltinPack
    );

    MCNAPI_C void _loadAllDataDrivenUIData(::ResourcePackManager const& resourcePackManager);

    MCNAPI_C void
    _parseAndLoadUICompositionData(char const* filenameStr, ::std::string const& fileData, bool isBuiltinPack);

    MCNAPI_C void _parseAndLoadUIRootData(char const* filenameStr, ::std::string const& fileData, bool isBuiltinPack);

    MCNAPI_C void _validateUICompositionDoc(
        ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const& uiComposition,
        bool                                                         isBuiltinPack,
        ::Puv::Logger&                                               logger
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::ResourcePackManager&                               resourcePackManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);

    MCNAPI void $load(::ResourcePackManager const& resourcePackManager);

    MCNAPI ::std::vector<::std::variant<
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
    $getComposition(::std::string const& identifier) const;

    MCNAPI ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    $getRoot(::std::string const& identifier) const;

    MCNAPI ::std::vector<::std::variant<
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
    $getExtensionPointContents(::std::string const& name) const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIDataDrivenUIRepository();

    MCNAPI static void** $vftableForResourcePackListener();
    // NOLINTEND
};
