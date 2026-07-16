#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerDataTransferServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerDataTransferService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::ServerDataTransferServiceProvider,
                                  public ::Editor::Services::PayloadStoreHelper {
public:
    // ServerDataTransferService inner types declare
    // clang-format off
    struct PendingBiomeConfigRequest;
    struct PendingCreateSettingRequest;
    struct PendingDataRequest;
    struct PendingIdentifiersRequest;
    struct RegisteredCollection;
    // clang-format on

    // ServerDataTransferService inner types define
    struct PendingBiomeConfigRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk8dfde6;
        ::ll::UntypedStorage<8, 32> mUnk88961e;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingBiomeConfigRequest& operator=(PendingBiomeConfigRequest const&);
        PendingBiomeConfigRequest(PendingBiomeConfigRequest const&);
        PendingBiomeConfigRequest();
    };

    struct PendingCreateSettingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkb649f6;
        ::ll::UntypedStorage<8, 32> mUnk740edd;
        ::ll::UntypedStorage<8, 32> mUnk186506;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingCreateSettingRequest& operator=(PendingCreateSettingRequest const&);
        PendingCreateSettingRequest(PendingCreateSettingRequest const&);
        PendingCreateSettingRequest();
    };

    struct PendingDataRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk9fea6b;
        ::ll::UntypedStorage<8, 32> mUnkee87ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingDataRequest& operator=(PendingDataRequest const&);
        PendingDataRequest(PendingDataRequest const&);
        PendingDataRequest();
    };

    struct PendingIdentifiersRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkffa5c8;
        ::ll::UntypedStorage<8, 32> mUnk291185;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingIdentifiersRequest& operator=(PendingIdentifiersRequest const&);
        PendingIdentifiersRequest(PendingIdentifiersRequest const&);
        PendingIdentifiersRequest();
    };

    struct RegisteredCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk67b403;
        ::ll::UntypedStorage<8, 32> mUnk91396d;
        ::ll::UntypedStorage<1, 1>  mUnke9ef8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegisteredCollection& operator=(RegisteredCollection const&);
        RegisteredCollection(RegisteredCollection const&);
        RegisteredCollection();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk7a5ef7;
    ::ll::UntypedStorage<8, 64> mUnk995e81;
    ::ll::UntypedStorage<8, 64> mUnk35f4bc;
    ::ll::UntypedStorage<8, 64> mUnk705e89;
    ::ll::UntypedStorage<8, 64> mUnke70eae;
    ::ll::UntypedStorage<8, 64> mUnkdc0560;
    ::ll::UntypedStorage<1, 1>  mUnkb9da73;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerDataTransferService& operator=(ServerDataTransferService const&);
    ServerDataTransferService(ServerDataTransferService const&);
    ServerDataTransferService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerDataTransferService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void requestBiomeConfigs(
        ::std::string const&,
        ::std::function<void(
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&
        )> const&
    ) /*override*/;

    virtual void requestDefaultBiomeConfigs(
        ::std::string const&,
        ::std::function<void(
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&
        )> const&
    ) /*override*/;

    virtual void requestData(
        ::std::string const&,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const&,
        ::std::string const&,
        bool
    ) /*override*/;

    virtual void requestIdentifiersForCollection(
        ::std::string const&,
        ::std::function<void(
            ::std::string const&,
            ::std::vector<::HashedString> const&,
            bool,
            ::std::optional<::std::string>
        )> const&
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::std::string const> requestSchema(::std::string const&) /*override*/;

    virtual void createNewSetting(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::optional<::std::string>)> const&
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    changeBiomeMapping(::std::string const&, ::std::string const&, ::std::string const&) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    sendData(::std::string const&, ::std::string const&, ::std::string const&, bool) /*override*/;

    virtual ::Scripting::Result_deprecated<void> sendDataToClipboard(::std::string const&) /*override*/;

    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> getRegisteredCollections() const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> openSession(::std::string const&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> closeSession(::std::string const&) /*override*/;

    virtual bool isDeferredExperimentEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerDataTransferService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
