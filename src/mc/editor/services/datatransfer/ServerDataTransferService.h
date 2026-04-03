#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerDataTransferServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class DataTransferServiceCreateSettingResponsePayload; }
namespace Editor::Network { class DataTransferServiceDataRequestResponsePayload; }
namespace Editor::Network { class DataTransferServiceDeferredExperimentEnabledPayload; }
namespace Editor::Network { class DataTransferServiceIdentifiersRequestResponsePayload; }
namespace Editor::Network { class DataTransferServiceRegisterCollectionPayload; }
namespace Editor::Network { class DataTransferServiceRequestBiomeConfigResponsePayload; }
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingBiomeConfigRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingCreateSettingRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingDataRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingIdentifiersRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RegisteredCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk7a5ef7;
    ::ll::UntypedStorage<8, 64> mUnk995e81;
    ::ll::UntypedStorage<8, 64> mUnk35f4bc;
    ::ll::UntypedStorage<8, 64> mUnk705e89;
    ::ll::UntypedStorage<8, 64> mUnke70eae;
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
    virtual ~ServerDataTransferService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void requestBiomeConfigs(
        ::std::string const& biomeIdentifier,
        ::std::function<void(
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&
        )> const&            callback
    ) /*override*/;

    virtual void requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback,
        ::std::string const&                                                                                 identifier,
        bool                                                                                                 useSnapshot
    ) /*override*/;

    virtual void requestIdentifiersForCollection(
        ::std::string const& collectionName,
        ::std::function<void(
            ::std::string const&,
            ::std::vector<::HashedString> const&,
            bool,
            ::std::optional<::std::string>
        )> const&            callback
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::std::string const>
    requestSchema(::std::string const& collectionName) /*override*/;

    virtual void createNewSetting(
        ::std::string const& collectionName,
        ::std::string const& identifier,
        ::std::string const& jsonData,
        bool                 lockToBiome,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::optional<::std::string>)> const&
            callback
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> changeBiomeMapping(
        ::std::string const& biomeIdentifier,
        ::std::string const& collectionName,
        ::std::string const& identifier
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> sendData(
        ::std::string const& collectionName,
        ::std::string const& jsonData,
        ::std::string const& identifier,
        bool                 lockToBiome
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> sendDataToClipboard(::std::string const& jsonData) /*override*/;

    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> getRegisteredCollections() const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> openSession(::std::string const& collectionName) /*override*/;

    virtual ::Scripting::Result_deprecated<void> closeSession(::std::string const& collectionName) /*override*/;

    virtual bool isDeferredExperimentEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerDataTransferService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void
    _onCreateSettingResponseReceived(::Editor::Network::DataTransferServiceCreateSettingResponsePayload const& payload);

    MCNAPI void _onDataRequestResponsePayloadReceived(
        ::Editor::Network::DataTransferServiceDataRequestResponsePayload const& payload
    );

    MCNAPI void _onDeferredExperimentEnabledPayloadReceived(
        ::Editor::Network::DataTransferServiceDeferredExperimentEnabledPayload const& payload
    );

    MCNAPI void _onRegisterCollectionPayloadReceived(
        ::Editor::Network::DataTransferServiceRegisterCollectionPayload const& payload
    );

    MCNAPI void _onRequestBiomeConfigResponseReceived(
        ::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload const& payload
    );

    MCNAPI void _onRequestIdentifiersResponseReceived(
        ::Editor::Network::DataTransferServiceIdentifiersRequestResponsePayload const& payload
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $requestBiomeConfigs(
        ::std::string const& biomeIdentifier,
        ::std::function<void(
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&
        )> const&            callback
    );

    MCNAPI void $requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback,
        ::std::string const&                                                                                 identifier,
        bool                                                                                                 useSnapshot
    );

    MCNAPI void $requestIdentifiersForCollection(
        ::std::string const& collectionName,
        ::std::function<void(
            ::std::string const&,
            ::std::vector<::HashedString> const&,
            bool,
            ::std::optional<::std::string>
        )> const&            callback
    );

    MCNAPI ::Scripting::Result_deprecated<::std::string const> $requestSchema(::std::string const& collectionName);

    MCNAPI void $createNewSetting(
        ::std::string const& collectionName,
        ::std::string const& identifier,
        ::std::string const& jsonData,
        bool                 lockToBiome,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::optional<::std::string>)> const&
            callback
    );

    MCNAPI ::Scripting::Result_deprecated<void> $changeBiomeMapping(
        ::std::string const& biomeIdentifier,
        ::std::string const& collectionName,
        ::std::string const& identifier
    );

    MCNAPI ::Scripting::Result_deprecated<void> $sendData(
        ::std::string const& collectionName,
        ::std::string const& jsonData,
        ::std::string const& identifier,
        bool                 lockToBiome
    );

    MCNAPI ::Scripting::Result_deprecated<void> $sendDataToClipboard(::std::string const& jsonData);

    MCNAPI ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> $getRegisteredCollections() const;

    MCNAPI ::Scripting::Result_deprecated<void> $openSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<void> $closeSession(::std::string const& collectionName);

    MCNAPI bool $isDeferredExperimentEnabled() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerDataTransferServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
