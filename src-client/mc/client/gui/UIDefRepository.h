#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/interface/IUIDefRepository.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PackReport;
class ResourceLoadManager;
class ResourceLocation;
class ResourcePackStack;
// clang-format on

class UIDefRepository : public ::IUIDefRepository {
public:
    // UIDefRepository inner types declare
    // clang-format off
    struct UIDefNamespace;
    struct DefEntry;
    // clang-format on

    // UIDefRepository inner types define
    struct UIDefNamespace {};

    struct DefEntry {};

    using VisitNodeFunc = ::std::function<
        ::Json::Value&(::std::string const&, ::std::string const&, ::std::string const&, ::Json::Value&)>;

    using DefEntriesPtr = ::std::shared_ptr<::std::vector<::UIDefRepository::DefEntry>>;

    using ReportsPtr = ::std::shared_ptr<::std::vector<::PackReport>>;

    using UIDefNamespaceMap = ::std::unordered_map<::std::string, ::UIDefRepository::UIDefNamespace>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>> mResourceLoadManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::UIDefRepository::UIDefNamespace>> mDefNamespaces;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                                          mGlobalVariables;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                                     mMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    UIDefRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadDefsList(
        ::ResourceLocation const&                           defsListFile,
        ::ResourcePackStack const&                          packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) /*override*/;

    virtual void validateDefEntries(
        ::ResourceLocation const&                           defsListFile,
        ::std::shared_ptr<::ResourcePackStack const>        packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) const /*override*/;

    virtual ::Json::Value const& findDef(::std::string const& defNamespace, ::std::string const& defName) const
        /*override*/;

    virtual ::Bedrock::Threading::SharedLock<::std::shared_mutex> acquireSharedLock() const /*override*/;

    virtual void syncUILoad() /*override*/;

    virtual void syncUILoadDefinitions() /*override*/;

    virtual void syncUILoadDefinitionReferences() /*override*/;

    virtual void cancelUIValidation() /*override*/;

    virtual bool isLoadingDone() const /*override*/;

    virtual bool isUILoadingDone() const /*override*/;

    virtual bool isUIValidationDone() const /*override*/;

    virtual void
    forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)> callback) /*override*/;

    virtual ::Json::Value const& getGlobalVariables() const /*override*/;

    virtual void translateLegacyItemIdsInRepository(::ItemRegistryRef const itemRegistry) /*override*/;

    virtual ~UIDefRepository() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIDefRepository(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);

    MCAPI void _applyGlobalColorFormat();

    MCAPI void _collectAllDefEntries(
        ::ResourceLoadType                                            loadType,
        ::ResourceLocation const&                                     defsListFile,
        ::ResourcePackStack const&                                    packStack,
        ::std::shared_ptr<::std::vector<::UIDefRepository::DefEntry>> allDefEntries,
        ::std::shared_ptr<::std::vector<::PackReport>>                packReports
    ) const;

    MCAPI void _forEachControl(
        ::Json::Value const&                                              value,
        ::std::string const&                                              namePath,
        ::std::function<void(::Json::Value const&, ::std::string const&)> callback
    );

    MCAPI void _queueFinishLoad(
        ::std::shared_ptr<::std::unordered_map<::std::string, ::UIDefRepository::UIDefNamespace>> defNamespaces,
        ::std::shared_ptr<::std::vector<::PackReport>>                                            packReportsPtr,
        ::ResourcePackStack const&                                                                packStack,
        ::std::function<void(::std::vector<::PackReport>&)>                                       onReportsReady
    );

    MCAPI void _readGlobalVariables(::ResourcePackStack const& packStack);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _resolveReferences(
        ::UIDefRepository::DefEntry&                      defEntry,
        ::std::vector<::UIDefRepository::DefEntry> const& allDefEntries,
        ::std::vector<int> const&                         sortedDefEntries,
        ::std::unordered_set<int>&                        visitedRefs,
        ::std::vector<bool>&                              resolved
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadDefsList(
        ::ResourceLocation const&                           defsListFile,
        ::ResourcePackStack const&                          packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    );

    MCAPI void $validateDefEntries(
        ::ResourceLocation const&                           defsListFile,
        ::std::shared_ptr<::ResourcePackStack const>        packStack,
        ::std::function<void(::std::vector<::PackReport>&)> onReportsReady
    ) const;

    MCAPI ::Json::Value const& $findDef(::std::string const& defNamespace, ::std::string const& defName) const;

    MCAPI ::Bedrock::Threading::SharedLock<::std::shared_mutex> $acquireSharedLock() const;

    MCAPI void $syncUILoad();

    MCAPI void $syncUILoadDefinitions();

    MCAPI void $syncUILoadDefinitionReferences();

    MCAPI void $cancelUIValidation();

    MCAPI bool $isLoadingDone() const;

    MCAPI bool $isUILoadingDone() const;

    MCAPI bool $isUIValidationDone() const;

    MCAPI void $forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)> callback);

    MCFOLD ::Json::Value const& $getGlobalVariables() const;

    MCAPI void $translateLegacyItemIdsInRepository(::ItemRegistryRef const itemRegistry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
