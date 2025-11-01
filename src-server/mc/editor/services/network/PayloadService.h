#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/selection/PayloadServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class EditorNetworkPacket;
class PacketSender;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class INetworkPayload; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class PayloadService : public ::Editor::Services::IEditorService, public ::Editor::Network::PayloadServiceProvider {
public:
    // PayloadService inner types declare
    // clang-format off
    struct CachedPacket;
    struct ConstructionInfo;
    // clang-format on
    
    // PayloadService inner types define
    enum class SendTarget : int {
        ServerPlayer = 0,
        ClientPlayer = 1,
        ServerManager = 2,
        ClientManager = 3,
        BroadcastToClientPlayers = 4,
        BroadcastToClientManagers = 5,
    };
    
    struct ConstructionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkaf66f0;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ConstructionInfo& operator=(ConstructionInfo const&);
        ConstructionInfo(ConstructionInfo const&);
        ConstructionInfo();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ConstructionInfo();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct CachedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkea7626;
        ::ll::UntypedStorage<8, 88> mUnk8c3e7c;
        ::ll::UntypedStorage<4, 4> mUnk88f348;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CachedPacket& operator=(CachedPacket const&);
        CachedPacket(CachedPacket const&);
        CachedPacket();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CachedPacket();
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
    ::ll::UntypedStorage<8, 64> mUnk261442;
    ::ll::UntypedStorage<8, 64> mUnk633e21;
    ::ll::UntypedStorage<1, 1> mUnk880d81;
    ::ll::UntypedStorage<8, 24> mUnk5cce2e;
    ::ll::UntypedStorage<8, 24> mUnk17b6ea;
    ::ll::UntypedStorage<8, 24> mUnk64c932;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadService& operator=(PayloadService const&);
    PayloadService(PayloadService const&);
    PayloadService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PayloadService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> dispatchToSelf(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 2
    virtual void onReceivePayload(::EditorNetworkPacket const& packet) /*override*/;

    // vIndex: 3
    virtual void _registerPayload(char const* payloadName, ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<void> _send(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<void> _sendToManager(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<void> _sendToClientId(::mce::UUID const& clientId, ::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> _sendToClientIds(::std::vector<::mce::UUID> const& clientIds, ::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> _broadcastToClients(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> _broadcastToClientManagers(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> _listenFor(char const* payloadName, ::std::function<void(::Editor::Network::INetworkPayload const&)> func) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PayloadService(::Editor::ServiceProviderCollection& providers, ::WeakEntityRef optionalPlayerRef, ::PacketSender& packetSender, bool isClientSide);

    MCNAPI ::Bedrock::PubSub::Publisher<void(::Editor::Network::INetworkPayload const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>* _findOrCreatePublisher(uint hashVal);

    MCNAPI ::std::shared_ptr<::Editor::Network::INetworkPayload> _load(::CompoundTag const* dataContainer);

    MCNAPI ::Scripting::Result_deprecated<::EditorNetworkPacket> _populatePacket(::Editor::Network::INetworkPayload* payload, ::Editor::Network::PayloadService::SendTarget target);

    MCNAPI void _registerPacketFactory(char const* payloadName, ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc);

    MCNAPI void _sendCachedPacketToTarget(::Editor::Network::PayloadService::CachedPacket& packet);

    MCNAPI ::Scripting::Result_deprecated<void> _sendToClient(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadService::SendTarget target);

    MCNAPI ::Scripting::Result_deprecated<void> _sendToClientTargets(::std::vector<::Actor*> actorList, ::EditorNetworkPacket& outPacket);

    MCNAPI ::Scripting::Result_deprecated<void> _sendToServer(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadService::SendTarget target);

    MCNAPI ::Scripting::Result_deprecated<void> _sendToTarget(::Actor* actor, ::EditorNetworkPacket& outPacket, ::Editor::Network::PayloadService::SendTarget toWhom);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& msPayloadNameKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers, ::WeakEntityRef optionalPlayerRef, ::PacketSender& packetSender, bool isClientSide);
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

    MCNAPI ::Scripting::Result_deprecated<void> $dispatchToSelf(::Editor::Network::INetworkPayload& payload);

    MCNAPI void $onReceivePayload(::EditorNetworkPacket const& packet);

    MCNAPI void $_registerPayload(char const* payloadName, ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc);

    MCNAPI ::Scripting::Result_deprecated<void> $_send(::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<void> $_sendToManager(::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<void> $_sendToClientId(::mce::UUID const& clientId, ::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<void> $_sendToClientIds(::std::vector<::mce::UUID> const& clientIds, ::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<void> $_broadcastToClients(::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<void> $_broadcastToClientManagers(::Editor::Network::INetworkPayload& payload);

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $_listenFor(char const* payloadName, ::std::function<void(::Editor::Network::INetworkPayload const&)> func);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPayloadServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND

};

}
