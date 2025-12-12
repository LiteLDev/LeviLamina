#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/ServerDataTransferServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class DataTransferServiceDataRequestResponsePayload; }
namespace Editor::Network { class DataTransferServiceRegisterCollectionPayload; }
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
    struct PendingDataRequest;
    struct RegisteredCollection;
    // clang-format on

    // ServerDataTransferService inner types define
    struct PendingDataRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkcf69c7;
        ::ll::UntypedStorage<8, 32> mUnk711599;
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

    struct RegisteredCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk87ab4d;
        ::ll::UntypedStorage<8, 32> mUnka75c69;
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
    ::ll::UntypedStorage<8, 64> mUnk7f44aa;
    ::ll::UntypedStorage<8, 64> mUnk995e81;
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

    virtual void requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback,
        bool                                                                                                 useSnapshot
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::std::string const>
    requestSchema(::std::string const& collectionName) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    sendData(::std::string const& collectionName, ::std::string const& jsonData) /*override*/;

    virtual ::Scripting::Result_deprecated<void> sendDataToClipboard(::std::string const& jsonData) /*override*/;

    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> getRegisteredCollections() const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> openSession(::std::string const& collectionName) /*override*/;

    virtual ::Scripting::Result_deprecated<void> closeSession(::std::string const& collectionName) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerDataTransferService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _onDataRequestResponsePayloadReceived(
        ::Editor::Network::DataTransferServiceDataRequestResponsePayload const& payload
    );

    MCNAPI void _onRegisterCollectionPayloadReceived(
        ::Editor::Network::DataTransferServiceRegisterCollectionPayload const& payload
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

    MCNAPI void $requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback,
        bool                                                                                                 useSnapshot
    );

    MCNAPI ::Scripting::Result_deprecated<::std::string const> $requestSchema(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<void>
    $sendData(::std::string const& collectionName, ::std::string const& jsonData);

    MCNAPI ::Scripting::Result_deprecated<void> $sendDataToClipboard(::std::string const& jsonData);

    MCNAPI ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> $getRegisteredCollections() const;

    MCNAPI ::Scripting::Result_deprecated<void> $openSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<void> $closeSession(::std::string const& collectionName);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForServerDataTransferServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
