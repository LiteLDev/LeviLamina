#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/interface/IUIDefRepository.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"
#include "mc/platform/threading/SharedLock.h"

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
    class UIDefNamespace;
    struct DefEntry;
    // clang-format on

    // UIDefRepository inner types define
    class UIDefNamespace {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Json::Value>> mDefs;
        // NOLINTEND
    };

    struct DefEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            collectionIndex;
        ::ll::TypedStorage<8, 32, ::std::string> ns;
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 32, ::std::string> refNs;
        ::ll::TypedStorage<8, 32, ::std::string> refName;
        ::ll::TypedStorage<8, 16, ::Json::Value> jsonVal;
        // NOLINTEND
    };

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
        ::ResourceLocation const&,
        ::ResourcePackStack const&,
        ::std::function<void(::std::vector<::PackReport>&)>
    ) /*override*/;

    virtual void validateDefEntries(
        ::ResourceLocation const&,
        ::std::shared_ptr<::ResourcePackStack const>,
        ::std::function<void(::std::vector<::PackReport>&)>
    ) const /*override*/;

    virtual ::Json::Value const& findDef(::std::string const&, ::std::string const&) const /*override*/;

    virtual ::Bedrock::Threading::SharedLock<::std::shared_mutex> acquireSharedLock() const /*override*/;

    virtual void syncUILoad() /*override*/;

    virtual void syncUILoadDefinitions() /*override*/;

    virtual void syncUILoadDefinitionReferences() /*override*/;

    virtual void cancelUIValidation() /*override*/;

    virtual bool isLoadingDone() const /*override*/;

    virtual bool isUILoadingDone() const /*override*/;

    virtual bool isUIValidationDone() const /*override*/;

    virtual void forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)>) /*override*/;

    virtual ::Json::Value const& getGlobalVariables() const /*override*/;

    virtual void translateLegacyItemIdsInRepository(::ItemRegistryRef const) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIDefRepository(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
