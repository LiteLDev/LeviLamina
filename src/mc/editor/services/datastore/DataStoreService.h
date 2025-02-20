#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/serviceproviders/DataStoreServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::DataStore { struct PayloadDescription; }
namespace Editor::Network { class DataStoreEventPayload; }
namespace Editor::Network { class ServerScriptTeardownRebuildPayload; }
namespace Json { class Value; }
// clang-format on

namespace Editor::Services {

class DataStoreService : public ::Editor::Services::IEditorService,
                         public ::Editor::Services::DataStoreServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk13c2ab;
    ::ll::UntypedStorage<8, 8>   mUnke835e6;
    ::ll::UntypedStorage<8, 8>   mUnk53a18a;
    ::ll::UntypedStorage<8, 8>   mUnk77d480;
    ::ll::UntypedStorage<8, 128> mUnk906987;
    ::ll::UntypedStorage<8, 48>  mUnk8f2fc8;
    ::ll::UntypedStorage<8, 16>  mUnke703fc;
    ::ll::UntypedStorage<8, 16>  mUnkd4e093;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreService& operator=(DataStoreService const&);
    DataStoreService(DataStoreService const&);
    DataStoreService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStoreService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> dispatchEvent(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    ) /*override*/;

    // vIndex: 2
    virtual ::Json::Value
    getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const& desc) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Subscription listenForEvent(
        ::std::function<
            void(::HashedString const&, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&)>
            callback
    ) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _handleEvents(
        ::HashedString const&,
        ::Editor::DataStore::EventType,
        ::Json::Value const&,
        ::Editor::DataStore::PayloadDescription const&,
        bool
    ) = 0;

    // vIndex: 8
    virtual ::Json::Value _getPayload(::HashedString const&, ::Editor::DataStore::PayloadDescription const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataStoreService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _handleDataStoreEventPacket(::Editor::Network::DataStoreEventPayload const& packet);

    MCAPI void _handleScriptReloadEventPacket(::Editor::Network::ServerScriptTeardownRebuildPayload const& packet);

    MCAPI ::Scripting::Result<void> _processEvent(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc,
        bool                                           isNetworkEvent
    );

    MCAPI void _publishEvent(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCAPI void _sendNetworkEvent(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
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

    MCFOLD ::Scripting::Result<void> $quit();

    MCAPI ::Scripting::Result<void> $dispatchEvent(
        ::HashedString const&                          dataTag,
        ::Editor::DataStore::EventType                 eventType,
        ::Json::Value const&                           payload,
        ::Editor::DataStore::PayloadDescription const& desc
    );

    MCAPI ::Json::Value
    $getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const& desc) const;

    MCFOLD ::Bedrock::PubSub::Subscription $listenForEvent(
        ::std::function<
            void(::HashedString const&, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&)>
            callback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForDataStoreServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
