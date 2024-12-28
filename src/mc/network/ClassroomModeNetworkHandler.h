#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"

// auto generated forward declare list
// clang-format off
class Packet;
struct NetworkIdentifierWithSubId;
namespace Automation { class AutomationClient; }
// clang-format on

class ClassroomModeNetworkHandler : public ::NetEventCallback, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc48695;
    ::ll::UntypedStorage<8, 8>  mUnke73bc4;
    ::ll::UntypedStorage<8, 32> mUnk3b0765;
    ::ll::UntypedStorage<8, 32> mUnk91139f;
    ::ll::UntypedStorage<1, 1>  mUnk7eb0cd;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClassroomModeNetworkHandler() /*override*/;

    // vIndex: 7
    virtual ::IncomingPacketFilterResult allowIncomingPacketId(
        ::NetworkIdentifierWithSubId const& id,
        ::MinecraftPacketIds                packetId,
        uint64                              packetSize
    ) /*override*/;

    // vIndex: 8
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet) /*override*/;

    // vIndex: 9
    virtual void onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClassroomModeNetworkHandler(bool isDedicatedServer);

    MCAPI void _connect(::std::string const& address);

    MCAPI void setAutomationClient(::Bedrock::NonOwnerPointer<::Automation::AutomationClient> client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isDedicatedServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::IncomingPacketFilterResult
    $allowIncomingPacketId(::NetworkIdentifierWithSubId const& id, ::MinecraftPacketIds packetId, uint64 packetSize);

    MCAPI ::OutgoingPacketFilterResult
    $allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const& ids, ::Packet const& packet);

    MCAPI void $onWebsocketRequest(
        ::std::string const&    serverAddress,
        ::std::string const&    payload,
        ::std::function<void()> errorCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableQueueForMainThread();

    MCAPI static void** $vftableForNetEventCallback();
    // NOLINTEND
};
