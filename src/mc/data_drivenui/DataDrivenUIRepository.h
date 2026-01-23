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
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Container; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIComposition; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct UIRoot; }
// clang-format on

class DataDrivenUIRepository : public ::IDataDrivenUIRepository, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkf7c36c;
    ::ll::UntypedStorage<8, 24>  mUnka0c594;
    ::ll::UntypedStorage<8, 8>   mUnk244c05;
    ::ll::UntypedStorage<8, 192> mUnk371579;
    ::ll::UntypedStorage<8, 192> mUnk540ad7;
    ::ll::UntypedStorage<8, 192> mUnk195b70;
    ::ll::UntypedStorage<8, 192> mUnk188a36;
    ::ll::UntypedStorage<8, 24>  mUnkdfc714;
    ::ll::UntypedStorage<8, 24>  mUnkb4e2cf;
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
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getComposition(::std::string const& identifier) const /*override*/;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const& identifier) const /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToOnCompositionsReloadedAsync(::std::function<void()>&& onCompositionsReloadedAsyncCallback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C DataDrivenUIRepository(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::ResourcePackManager&                               resourcePackManager
    );

    MCNAPI_C void _initializeLoaders(
        ::Puv::SlicedLoader<::SharedTypes::v1_21_130::DataDrivenUI::UIRoot, nullptr_t, nullptr_t>& rootLoader,
        ::Puv::SlicedLoader<::SharedTypes::v1_21_130::DataDrivenUI::UIComposition, nullptr_t, nullptr_t>&
             compositionLoader,
        bool isBuiltinPack
    );

    MCNAPI_C void _loadAllDataDrivenUIData(::ResourcePackManager const& resourcePackManager);

    MCNAPI_C void
    _parseAndLoadUICompositionData(char const* filenameStr, ::std::string const& fileData, bool isBuiltinPack);

    MCNAPI_C void _parseAndLoadUIRootData(char const* filenameStr, ::std::string const& fileData, bool isBuiltinPack);
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
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    $getComposition(::std::string const& identifier) const;

    MCNAPI ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    $getRoot(::std::string const& identifier) const;

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
