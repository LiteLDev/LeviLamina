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
class EditorNetworkPacket;
class PacketSender;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class INetworkPayload; }
namespace Editor::Network { struct PayloadMetrics; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class PayloadService : public ::Editor::Services::IEditorService, public ::Editor::Network::PayloadServiceProvider {
public:
    // PayloadService inner types declare
    // clang-format off
    struct CachedPacket;
    struct PayloadFactory;
    struct PayloadPublisher;
    struct PayloadInfo;
    // clang-format on

    // PayloadService inner types define
    enum class SendTarget : int {
        ServerPlayer              = 0,
        ClientPlayer              = 1,
        ServerManager             = 2,
        ClientManager             = 3,
        BroadcastToClientPlayers  = 4,
        BroadcastToClientManagers = 5,
    };

    struct CachedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnkea7626;
        ::ll::UntypedStorage<8, 128> mUnk8c3e7c;
        ::ll::UntypedStorage<4, 4>   mUnk88f348;
        ::ll::UntypedStorage<8, 8>   mUnk618bb4;
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

    struct PayloadFactory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkdd8c80;
        // NOLINTEND

    public:
        // prevent constructor by default
        PayloadFactory& operator=(PayloadFactory const&);
        PayloadFactory(PayloadFactory const&);
        PayloadFactory();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PayloadFactory();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PayloadPublisher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk27a74f;
        // NOLINTEND

    public:
        // prevent constructor by default
        PayloadPublisher& operator=(PayloadPublisher const&);
        PayloadPublisher(PayloadPublisher const&);
        PayloadPublisher();
    };

    struct PayloadInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk20af30;
        ::ll::UntypedStorage<8, 64> mUnk34ed57;
        ::ll::UntypedStorage<8, 8>  mUnka29ebc;
        ::ll::UntypedStorage<8, 8>  mUnkff84cc;
        // NOLINTEND

    public:
        // prevent constructor by default
        PayloadInfo& operator=(PayloadInfo const&);
        PayloadInfo(PayloadInfo const&);
        PayloadInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PayloadInfo();
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
    ::ll::UntypedStorage<8, 64> mUnk15ebab;
    ::ll::UntypedStorage<1, 1>  mUnk880d81;
    ::ll::UntypedStorage<8, 24> mUnk5cce2e;
    ::ll::UntypedStorage<8, 24> mUnk17b6ea;
    ::ll::UntypedStorage<8, 24> mUnk5c8add;
    ::ll::UntypedStorage<1, 1>  mUnk89f9cd;
    ::ll::UntypedStorage<1, 1>  mUnkb98162;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadService& operator=(PayloadService const&);
    PayloadService(PayloadService const&);
    PayloadService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PayloadService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    dispatchToSelf(::Editor::Network::INetworkPayload& payload) /*override*/;

    virtual void onReceivePayload(::EditorNetworkPacket const& packet) /*override*/;

    virtual bool isCollectingMetrics() const /*override*/;

    virtual ::std::vector<::std::pair<::std::string, ::Editor::Network::PayloadMetrics>> collectMetricsReport() const
        /*override*/;

    virtual ::Editor::Network::PayloadMetrics* _registerPayload(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    _send(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _sendToManager(
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _sendToClientId(
        ::mce::UUID const&                  clientId,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _sendToClientIds(
        ::std::vector<::mce::UUID> const&   clientIds,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _broadcastToClients(
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _broadcastToClientManagers(
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> _listenFor(
        char const*                                                      payloadName,
        ::std::function<void(::Editor::Network::INetworkPayload const&)> fnSubscriber
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PayloadService(
        ::Editor::ServiceProviderCollection& providers,
        ::WeakEntityRef                      optionalPlayerRef,
        ::PacketSender&                      packetSender,
        bool                                 isClientSide,
        bool                                 collectMetrics
    );

    MCNAPI ::Editor::Network::PayloadService::PayloadInfo* _createPayloadInfo(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    );

    MCNAPI ::Editor::Network::PayloadService::PayloadInfo* _findPayloadInfo(char const* payloadName);

    MCNAPI ::std::shared_ptr<::Editor::Network::INetworkPayload>
    _load(::std::string_view payloadName, ::std::string_view payloadRawData);

    MCNAPI ::Scripting::Result_deprecated<::EditorNetworkPacket> _populatePacket(
        ::Editor::Network::INetworkPayload*           payload,
        ::Editor::Network::PayloadService::SendTarget target,
        ::Editor::Network::PayloadMetrics*            metrics
    );

    MCNAPI void _sendCachedPacketToTarget(::Editor::Network::PayloadService::CachedPacket& packet);

    MCNAPI ::Scripting::Result_deprecated<void> _sendToClient(
        ::Editor::Network::INetworkPayload&           payload,
        ::Editor::Network::PayloadService::SendTarget target,
        ::Editor::Network::PayloadMetrics*            metrics
    );

    MCNAPI ::Scripting::Result_deprecated<void> _sendToClientTargets(
        ::std::vector<::Actor*>            actorList,
        ::EditorNetworkPacket&             outPacket,
        ::Editor::Network::PayloadMetrics* metrics
    );

    MCNAPI ::Scripting::Result_deprecated<void> _sendToServer(
        ::Editor::Network::INetworkPayload&           payload,
        ::Editor::Network::PayloadService::SendTarget target,
        ::Editor::Network::PayloadMetrics*            metrics
    );

    MCNAPI ::Scripting::Result_deprecated<void> _sendToTarget(
        ::Actor*                                      actor,
        ::EditorNetworkPacket&                        outPacket,
        ::Editor::Network::PayloadService::SendTarget toWhom,
        ::Editor::Network::PayloadMetrics*            metrics
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection& providers,
        ::WeakEntityRef                      optionalPlayerRef,
        ::PacketSender&                      packetSender,
        bool                                 isClientSide,
        bool                                 collectMetrics
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
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $dispatchToSelf(::Editor::Network::INetworkPayload& payload);

    MCNAPI void $onReceivePayload(::EditorNetworkPacket const& packet);

    MCNAPI bool $isCollectingMetrics() const;

    MCNAPI ::std::vector<::std::pair<::std::string, ::Editor::Network::PayloadMetrics>> $collectMetricsReport() const;

    MCNAPI ::Editor::Network::PayloadMetrics* $_registerPayload(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $_send(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics);

    MCNAPI ::Scripting::Result_deprecated<void>
    $_sendToManager(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics);

    MCNAPI ::Scripting::Result_deprecated<void> $_sendToClientId(
        ::mce::UUID const&                  clientId,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    );

    MCNAPI ::Scripting::Result_deprecated<void> $_sendToClientIds(
        ::std::vector<::mce::UUID> const&   clientIds,
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $_broadcastToClients(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadMetrics* metrics);

    MCNAPI ::Scripting::Result_deprecated<void> $_broadcastToClientManagers(
        ::Editor::Network::INetworkPayload& payload,
        ::Editor::Network::PayloadMetrics*  metrics
    );

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $_listenFor(char const* payloadName, ::std::function<void(::Editor::Network::INetworkPayload const&)> fnSubscriber);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPayloadServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Network
