#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/serviceproviders/ServerDataTransferServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class DataTransferServiceDataRequestResponsePayload; }
namespace Editor::Network { class DataTransferServiceRegisterCollectionPayload; }
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ServerDataTransferService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::PayloadStoreHelper,
                                  public ::Editor::Services::ServerDataTransferServiceProvider {
public:
    // ServerDataTransferService inner types declare
    // clang-format off
    struct PendingDataRequest;
    struct RegisteredCollection;
    // clang-format on

    // ServerDataTransferService inner types define
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
        MCAPI ~RegisteredCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

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
        MCAPI ~PendingDataRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // vIndex: 0
    virtual ~ServerDataTransferService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback
    ) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<::std::string const, ::Scripting::Error>
    requestSchema(::std::string const& collectionName) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void>
    sendData(::std::string const& collectionName, ::std::string const& jsonData) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void> sendDataToClipboard(::std::string const& jsonData) /*override*/;

    // vIndex: 5
    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> getRegisteredCollections() const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerDataTransferService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _onDataRequestResponsePayloadReceived(
        ::Editor::Network::DataTransferServiceDataRequestResponsePayload const& payload
    );

    MCAPI void
    _onRegisterCollectionPayloadReceived(::Editor::Network::DataTransferServiceRegisterCollectionPayload const& payload
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void $requestData(
        ::std::string const& collectionName,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const& callback
    );

    MCAPI ::Scripting::Result<::std::string const, ::Scripting::Error>
    $requestSchema(::std::string const& collectionName);

    MCAPI ::Scripting::Result<void> $sendData(::std::string const& collectionName, ::std::string const& jsonData);

    MCAPI ::Scripting::Result<void> $sendDataToClipboard(::std::string const& jsonData);

    MCAPI ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData> $getRegisteredCollections() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForServerDataTransferServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
